#include <cstdio>
struct Point
{
	double x = 0.0;
	double y = 0.0;
};
int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    struct Point points[100];
    double sum_x = 0.0;
    double sum_y = 0.0;
    for (int i = 0; i < n; i++) 
    {
        scanf_s("%lf %lf", &points[i].x, &points[i].y);
        sum_x += points[i].x;
        sum_y += points[i].y;
    }
    double center_x = sum_x / n;
    double center_y = sum_y / n;
    printf("%.15lf %.15lf\n", center_x, center_y);
	return 0;
}