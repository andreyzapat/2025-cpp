#include <cstdio>
#include <math.h>
struct Point 
{
    int x = 0;
    int y = 0;
};
int main(int argc, char** argv) 
{
    int n;
    scanf_s("%d", &n);
    struct Point points[100];
    for (int i = 0; i < n; i++) 
    {
        scanf_s("%d %d", &points[i].x, &points[i].y);
    }
    double max_distance = -1.0;
    int max_index = 0;
    for (int i = 0; i < n; i++) 
    {
        int dx = points[i].x;
        int dy = points[i].y;
        double distance_squared = dx * dx + dy * dy;
        if (distance_squared > max_distance) 
        {
            max_distance = distance_squared;
            max_index = i;
        }
    }
    printf("%d %d\n", points[max_index].x, points[max_index].y);
    return 0;
}