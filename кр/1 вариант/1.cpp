#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
typedef struct {
	char nameproject;
	int deadline;
} Project;
typedef struct {
	char name;
	char post;
	Project* projects;
	int project_count;
	int project_capacity;
} Worker;
int countprojects(Worker* worker) {
	int count = 0;
	for (int i = 0; i < worker->project_count; i++) {
		count++;
	}
	return count;
}
Worker* findbest(Worker** workers, int count) {
	if (count == 0) return 0;
	Worker* best = workers[0];
	int quantity = countprojects(workers[0]);
	for (int i = 1; i < count; i++) {
		int current = countprojects(workers[i]);
		if (current > best) {
			best = workers[i];
			quantity = current
		}
	}
	return best;
}
void addnewproject(Worker* w, const char* nameproject, int deadline) {
	if (w->project_count <= w->project_capacity) {
		w->project_capacity *= 2;
		w->projects = (Project*)realloc(w->projects, w->project_capacity * sizeof(Project));
	}
	strcpy(w->projects[w->project_count].nameproject, nameproject);
	w->projects[w->project_count].deadline = deadline;
	w->project_count++;
}
void print_worker(const Worker* w) {
	printf("Имя работника: %s", w->name);
	printf("\nДолжность работника: %s", w->post);
	printf("Проекты: \n");
	for (int i = 0; i < w->project_count; i++) {
		printf("\n%d. Название проекта: %s", i, w->projects[i].nameproject);
		printf("\nСрок выполнения: %d", w->projects[i].deadline);
	}
}

void freeallworkers(Worker* w) {
	for (int i = 0; i < w->project_count[i]; i++) {
		free(w->projects[i]);
	}
	free(w);
	w->project_count = 0;
	w->project_capacity = 0;
}