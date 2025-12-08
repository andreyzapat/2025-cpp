#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char competition[100];
    int place;
} Result;
typedef struct {
    char name[100];
    char sport[50];
    Result* results;
    int result_count;
    int result_capacity;
} Athlete;
Athlete* createAthlete(const char* name, const char* sport) {
    Athlete* athlete = (Athlete*)malloc(sizeof(Athlete));
    strcpy_s(athlete->name, sizeof(athlete->name), name);
    strcpy_s(athlete->sport, sizeof(athlete->sport), sport);
    athlete->result_capacity = 5;
    athlete->result_count = 0;
    athlete->results = (Result*)malloc(athlete->result_capacity * sizeof(Result));
    return athlete;
}
void addResult(Athlete* athlete, const char* competition, int place) {
    if (athlete->result_count >= athlete->result_capacity) 
    {
        athlete->result_capacity *= 2;
        athlete->results = (Result*)realloc(athlete->results, athlete->result_capacity * sizeof(Result));
    }
    strcpy_s(athlete->results[athlete->result_count].competition, sizeof(athlete->results[athlete->result_count].competition), competition);
    athlete->results[athlete->result_count].place = place;
    athlete->result_count++;
}
int countFirstPlaces(Athlete* athlete) {
    int count = 0;
    for (int i = 0; i < athlete->result_count; i++) 
    {
        if (athlete->results[i].place == 1) 
        {
            count++;
        }
    }
    return count;
}
Athlete* findBestAthlete(Athlete** athletes, int count) {
    if (count == 0) return NULL;
    Athlete* best = athletes[0];
    int best_score = countFirstPlaces(athletes[0]);
    for (int i = 1; i < count; i++)
    {
        int current_score = countFirstPlaces(athletes[i]);
        if (current_score > best_score)
        {
            best = athletes[i];
            best_score = current_score;
        }
    }

    return best;
}
void printAllAthletes(Athlete** athletes, int count) {
    printf("=== СПИСОК СПОРТСМЕНОВ ===\n");
    for (int i = 0; i < count; i++) 
    {
        printf("\nСпортсмен: %s\n", athletes[i]->name);
        printf("Вид спорта: %s\n", athletes[i]->sport);
        printf("Результаты (%d):\n", athletes[i]->result_count);
        if (athletes[i]->result_count == 0)
        {
            printf("  Нет результатов\n");
        }
        else 
        {
            for (int j = 0; j < athletes[i]->result_count; j++) 
            {
                printf("  %d. %s - %d место\n", j + 1, athletes[i]->results[j].competition, athletes[i]->results[j].place);
            }
        }
        printf("Первых мест: %d\n", countFirstPlaces(athletes[i]));
    }
}
void freeAthlete(Athlete* athlete) {
    if (athlete != NULL) 
    {
        free(athlete->results);
        free(athlete);
    }
}
void freeAllAthletes(Athlete** athletes, int count) {
    for (int i = 0; i < count; i++) {
        freeAthlete(athletes[i]);
    }
}
int main(int argc, char** argv) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n = 0;
    printf("Введите количество спортсменов: ");
    scanf("%d", &n);
    clear_input_buffer();
    Athlete* athletes = create_athletes(n);
    for (int i = 0; i < n; i++) 
    {
        printf("\nСпортсмен %d:\n", i + 1);
        printf("Имя: ");
        fgets(athletes[i].name, sizeof(athletes[i].name), stdin);
        clear_last_linebreak(athletes[i].name);
        printf("Вид спорта: ");
        fgets(athletes[i].sport, sizeof(athletes[i].sport), stdin);
        clear_last_linebreak(athletes[i].sport);
        int result_count = 0;
        printf("Количество результатов: ");
        scanf("%d", &result_count);
        clear_input_buffer();
        for (int j = 0; j < result_count; j++) 
        {
            char competition[100];
            int place;
            printf("Результат %d:\n", j + 1);
            printf("  Название соревнования: ");
            fgets(competition, sizeof(competition), stdin);
            clear_last_linebreak(competition);
            printf("  Занятое место: ");
            scanf("%d", &place);
            clear_input_buffer();
            add_result(&athletes[i].results, competition, place);
        }
    }
    printf("\n=== ВСЕ СПОРТСМЕНЫ ===\n");
    for (int i = 0; i < n; i++) {
        printf("\n%d. ", i + 1);
        print_athlete(&athletes[i]);
    }
    Athlete* best = find_best_athlete(athletes, n);
    if (best) 
    {
        printf("\n=== ЛУЧШИЙ СПОРТСМЕН ===\n");
        print_athlete(best);
    }
    free_athletes(athletes, n);
    return 0;
}