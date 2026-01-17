#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[20];
    int points;
}Giocatore;
typedef struct {
    Giocatore *giocatori;
}Squadra;
int main() {
    int n=4;
    int total_points=0;
    Squadra squad;
    squad.giocatori=(Giocatore*)malloc(n*sizeof(Giocatore));
    if (squad.giocatori==NULL) {
        exit(1);
    }
    for (int i=0;i<n;i++) {
        printf("Nome giocatore:");
        scanf("%s",&squad.giocatori[i].name);
        printf("Punteggio giocatore:");
        scanf(" %d",&squad.giocatori[i].points);
        total_points+=squad.giocatori[i].points;
    }
    printf("Punteggio squadra: %d",total_points);
    free(squad.giocatori);
    return 0;
}