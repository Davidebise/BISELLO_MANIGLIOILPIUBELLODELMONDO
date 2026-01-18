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
typedef struct {
    Post *posts;
}Profilo;
int main() {
    int n=4;
    int total_comments=0;
    Profilo profile;
    profile.posts=(Post*)malloc(n*sizeof(Post));
    if (profile.posts==NULL) {
        exit(1);
    }
    int choose;
    int comment_number;
    int actual_dimension;
    for (int i=0;i<n;i++) {
        printf("Post %d\n",i);
        actual_dimension=1;
        comment_number=0;
        profile.posts[i].comments=(Commento*)malloc(actual_dimension*sizeof(Commento));
        while (true){
            if (comment_number>=actual_dimension) {
                actual_dimension=actual_dimension*2;
                profile.posts[i].comments=realloc(profile.posts[i].comments,actual_dimension*sizeof(Commento));
            }
            printf("Premere 2 per uscire o un altro numero per inserire un commento:");
            scanf(" %d",&choose);
            getchar(); //consuma l'\n
            if (choose==2) {
                break;
            }
            printf("Autore:");
            scanf("%s",&profile.posts[i].comments[comment_number].name);
            getchar();
            printf("Testo:");
            fgets(profile.posts[i].comments[comment_number].text, 200, stdin);
            comment_number++;
            total_comments+=1;
        }
    }
    printf("Commenti totali utente: %d",total_comments);
    free(profile.posts);
    return 0;
}