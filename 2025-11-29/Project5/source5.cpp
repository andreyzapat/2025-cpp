#include <cstdio>
struct Student 
{
    char surname[50];
    char name[50];
    int math = 0;
    int physics = 0;
    int informatics = 0;
};
int main(int argc, char** argv)
{
    int n = 0;
    scanf_s("%d", &n);
    struct Student students[1000];
    double sum_math = 0.0;
    double sum_physics = 0.0;
    double sum_informatics = 0.0;
    for (int i = 0; i < n; i++)
    {
        scanf_s("%s %s %d %d %d",
            students[i].surname, (unsigned)sizeof(students[i].surname),
            students[i].name, (unsigned)sizeof(students[i].name),
            &students[i].math,
            &students[i].physics,
            &students[i].informatics);
        sum_math += students[i].math;
        sum_physics += students[i].physics;
        sum_informatics += students[i].informatics;
    }
    double avg_math = sum_math / n;
    double avg_physics = sum_physics / n;
    double avg_informatics = sum_informatics / n;
    printf("%.6lf %.6lf %.6lf\n", avg_math, avg_physics, avg_informatics);
	return 0;
}