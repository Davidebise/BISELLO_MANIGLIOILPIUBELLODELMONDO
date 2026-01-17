#include <stdio.h>
typedef struct{
    char name[20];
    char surname[20];
    int age;
}Persona;
int main() {
    Persona persona;
    printf("Inserire nome:");
    scanf("%s",&persona.name);
    printf("\nInserire cognome:");
    scanf("%s",&persona.surname);
    printf("\nInserire età:");
    scanf(" %d",&persona.age);

    printf("\nNome:%s",persona.name);
    printf("\nCognome:%s",persona.surname);
    printf("\nEtà:%d",persona.age);
    return 0;
}