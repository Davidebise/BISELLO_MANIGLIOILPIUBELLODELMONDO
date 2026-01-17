#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char title[100];
    int pages;
} Libro;

void AddBook(Libro **libri, int *n) {
    Libro *tmp = realloc(*libri, (*n + 1) * sizeof(Libro));
    if (tmp == NULL) {
        printf("Not enough space\n");
        return;
    }

    *libri = tmp;

    printf("Inserire titolo: ");
    scanf("%s", &(*libri)[*n].title);

    do {
        printf("Inserire numero di pagine: ");
        scanf("%d", &(*libri)[*n].pages);
    } while ((*libri)[*n].pages <= 0 || (*libri)[*n].pages > 10000);

    (*n)++;
}

void ShowBooks(Libro *libri, int n) {
    for (int i = 0; i < n; i++) {
        printf("Titolo: %s\n", libri[i].title);
        printf("Pagine: %d\n\n", libri[i].pages);
    }
}

int main(void) {
    Libro *libri = NULL;
    int n = 0;
    int scelta;

    do {
        printf("1) Aggiungi Libro\n2) Visualizza Libri\n3) Esci\n");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                AddBook(&libri, &n);
                break;
            case 2:
                ShowBooks(libri, n);
                break;
        }
    } while (scelta != 3);

    free(libri);
    return 0;
}
