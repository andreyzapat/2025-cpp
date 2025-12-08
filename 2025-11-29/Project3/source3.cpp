#include <cstdio>
#include <math.h>
struct Point 
{
    int x = 0;
    int y = 0;
};
int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    struct Point points[100];
    for (int i = 0; i < n; i++) 
    {
        scanf_s("%d %d", &points[i].x, &points[i].y);
    }
    double max_distance = 0.0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            int dx = points[i].x - points[j].x;
            int dy = points[i].y - points[j].y;
            double distance_squared = (double)(dx * dx) + (double)(dy * dy);
            if (distance_squared > max_distance) 
            {
                max_distance = distance_squared;
            }
        }
    }
    double diameter = sqrt(max_distance);
    printf("%.15lf\n", diameter);
	return 0;
}