#include <cstdio>
#include <math.h>
struct Point 
{
    int x = 0;
    int y = 0;
};
double distance(struct Point a, struct Point b) 
{
    int dx = a.x - b.x;
    int dy = a.y - b.y;
    return sqrt((double)(dx * dx) + (double)(dy * dy));
}
int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    struct Point points[100];
    for (int i = 0; i < n; i++) 
    {
        scanf_s("%d %d", &points[i].x, &points[i].y);
    }
    double max_perimeter = 0.0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++) 
            {
                double a = distance(points[i], points[j]);
                double b = distance(points[j], points[k]);
                double c = distance(points[k], points[i]);
                double perimeter = a + b + c;
                if (perimeter > max_perimeter) 
                {
                    max_perimeter = perimeter;
                }
            }
        }
    }
    printf("%.15lf\n", max_perimeter);
	return 0;
}