#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[20];
    int salary;
    int years;
}Dipendente;
int main() {
    int n=5; //dimensione elenco
    Dipendente *dipendenti=(Dipendente*)malloc(n*sizeof(Dipendente));
    if (dipendenti != NULL) {
        for(int i=0;i<n;i++) {
            printf("Inserire nome:");
            scanf("%s",&dipendenti[i].name);
            printf("\nInserire salario:");
            scanf(" %d",&dipendenti[i].salary);
            printf("\nInserire anni di servizio:");
            scanf(" %d",&dipendenti[i].years);
        }
    }else {
        exit(1);
    }
    for(int i=0;i<n;i++) {
        if (dipendenti[i].years>10) {
            printf("\nNome:%s",dipendenti[i].name);
            printf("\nSalario:%d",dipendenti[i].salary);
            printf("\nAnni di servizio:%d",dipendenti[i].years);
        }
    }
    free(dipendenti);
    return 0;
}