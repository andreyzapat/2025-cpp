#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
typedef struct {
    char competition[100];
    int place;
} Result;

// Структура для хранения массива результатов
typedef struct {
    Result* results;    // динамический массив результатов
    int count;          // количество результатов
    int capacity;       // вместимость массива
} ResultBook;

// Структура для спортсмена
typedef struct {
    char name[100];     // имя спортсмена
    char sport[50];     // вид спорта
    ResultBook results; // вложенная структура с результатами
} Athlete;

// Функции для работы с ResultBook
void init_resultbook(ResultBook* rb) {
    rb->count = 0;
    rb->capacity = 5;
    rb->results = (Result*)malloc(rb->capacity * sizeof(Result));
}

void add_result(ResultBook* rb, const char* competition, int place) {
    // Если массив заполнен, увеличиваем его размер
    if (rb->count >= rb->capacity) {
        rb->capacity *= 2;
        rb->results = (Result*)realloc(rb->results, rb->capacity * sizeof(Result));
    }

    strcpy(rb->results[rb->count].competition, competition);
    rb->results[rb->count].place = place;
    rb->count++;
}

int count_first_places(const ResultBook* rb) {
    int count = 0;
    for (int i = 0; i < rb->count; i++) {
        if (rb->results[i].place == 1) {
            count++;
        }
    }
    return count;
}

void free_resultbook(ResultBook* rb) {
    free(rb->results);
    rb->results = NULL;
    rb->count = 0;
    rb->capacity = 0;
}
void free_athletes(Athlete* athletes, int n) {
    for (int i = 0; i < n; i++) {
        free_resultbook(&athletes[i].results);
    }
    free(athletes);
}
// Функции для работы со спортсменами
Athlete* create_athletes(int n) {
    Athlete* athletes = (Athlete*)malloc(n * sizeof(Athlete));
    for (int i = 0; i < n; i++) {
        init_resultbook(&athletes[i].results);
    }
    return athletes;
}

Athlete* find_best_athlete(Athlete* athletes, int n) {
    if (n <= 0) return NULL;

    Athlete* best = &athletes[0];
    int best_first_places = count_first_places(&athletes[0].results);

    for (int i = 1; i < n; i++) {
        int current_first_places = count_first_places(&athletes[i].results);
        if (current_first_places > best_first_places) {
            best = &athletes[i];
            best_first_places = current_first_places;
        }
    }
    return best;
}

void print_athlete(const Athlete* athlete) {
    printf("Спортсмен: %s\n", athlete->name);
    printf("Вид спорта: %s\n", athlete->sport);
    printf("Результаты (%d):\n", athlete->results.count);

    if (athlete->results.count == 0) {
        printf("  Нет результатов\n");
    }
    else {
        for (int i = 0; i < athlete->results.count; i++) {
            printf("  %d. %s - %d место\n",
                i + 1,
                athlete->results.results[i].competition,
                athlete->results.results[i].place);
        }
    }
    printf("Первых мест: %d\n", count_first_places(&athlete->results));
    printf("\n");
}



void clear_input_buffer() {
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void clear_last_linebreak(char* str) {
    if (str != NULL) {
        str[strcspn(str, "\n")] = '\0';
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

    // Ввод данных о спортсменах
    for (int i = 0; i < n; i++) {
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

        for (int j = 0; j < result_count; j++) {
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

    // Вывод всех спортсменов
    printf("\n=== ВСЕ СПОРТСМЕНЫ ===\n");
    for (int i = 0; i < n; i++) {
        printf("\n%d. ", i + 1);
        print_athlete(&athletes[i]);
    }

    // Поиск спортсмена с наибольшим количеством первых мест
    Athlete* best = find_best_athlete(athletes, n);
    if (best) {
        printf("\n=== ЛУЧШИЙ СПОРТСМЕН ===\n");
        print_athlete(best);
    }

    free_athletes(athletes, n);
    return 0;
}