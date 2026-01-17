#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[20];
    char surname[20];
}Persona;
int main() {
    Persona *persona=(Persona*)malloc(sizeof(Persona));
    printf("Inserire nome:");
    scanf("%s",&persona->name);
    printf("\nInserire cognome:");
    scanf("%s",&persona->surname);

    printf("\nNome:%s",persona->name);
    printf("\nCognome:%s",persona->surname);
    free(persona);
    return 0;
}