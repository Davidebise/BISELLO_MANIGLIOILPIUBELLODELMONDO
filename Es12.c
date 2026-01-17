#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct{
    char name[20];
    char text[200];
}Commento;
typedef struct {
    Commento *comments;
}Post;
int main() {
    int n=4;
    int total_comments=0;
    Post p;
    p.comments=(Commento*)malloc(n*sizeof(Commento));
    if (p.comments==NULL) {
        exit(1);
    }
    int choose;
    for (int i=0;i<n;i++) {
        printf("Post %d\n",i);
        while (true){
            printf("Premere 2 per uscire o un altro numero per inserire un commento:");
            scanf(" %d",&choose);
            if (choose==2) {
                break;
            }
            printf("Autore:");
            scanf("%s",&p.comments[i].name);
            printf("Testo:");
            gets(p.comments[i].text);
            total_comments+=1;
        }
    }
    printf("Commenti totali: %d",total_comments);
    free(p.comments);
    return 0;
}