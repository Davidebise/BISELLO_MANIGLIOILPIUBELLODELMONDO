#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[20];
    int goals;
}Giocatore;
typedef struct {
    Giocatore *giocatori;
}Squadra;
typedef struct {
    Squadra *squadre;
}Campionato;
int main() {
    int n_players=4;
    int n_squads=3;
    int total_goals=0;
    Campionato campionato;
    campionato.squadre=(Squadra*)malloc(n_squads*sizeof(Squadra));
    if (campionato.squadre==NULL) {
        exit(1);
    }
    for (int i=0;i<n_squads;i++) {
        campionato.squadre[i].giocatori=(Giocatore*)malloc(n_players*sizeof(Giocatore));
        if (campionato.squadre[i].giocatori==NULL) {
            exit(1);
        }
        for (int j=0;j<n_players;j++) {
            printf("\nNome giocatore:");
            scanf("%19s",campionato.squadre[i].giocatori[j].name);
            printf("\nGol giocatore:");
            scanf("%d",&campionato.squadre[i].giocatori[j].goals);
            total_goals+=campionato.squadre[i].giocatori[j].goals;
        }
    }
    printf("\nGol campionato: %d",total_goals);
    free(campionato.squadre);
    return 0;
}