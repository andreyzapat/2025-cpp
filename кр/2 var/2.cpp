#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

typedef struct {
	char name;
	char name2;
}Author;

typedef struct {
	char title;
	int year;
	Author* authors;
	int count;
	int capacity;
}Book;

int count_authors(Book* b) {
	int N = 0;
	for (int i = 0; i < b->count; i++) {
		N++;
	}
	return N;
}

Book* findbiggest(Book** b, int n) {
	Book* max = b[0];
	for (int i = 1; i < n; i++) {
		if (count_authors(b[i]) > count_authors(max)) {
			max = b[i];
		}
	}
}

void addnewauthor(Book* b, const char name, const char name2) {
	if (b->count <= b->capacity) {
		b->capacity *= 2;
		b->authors = (Author*)realloc(b->authors, b->capacity * sizeof(Author));
	}
	strcpy(b->authors[b->count].name, name);
	strcpy(b->authors[b->count].name2, name2);
	b->count++;
}

