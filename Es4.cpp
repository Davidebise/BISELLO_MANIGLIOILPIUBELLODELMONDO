#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Inserire un valore:");
    scanf(" %d",&n);
    int *array=(int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++) {
        printf("\nInserire il %d valore:",i+1);
        scanf("%d",&array[i]);
    }
    for (int i=0;i<n;i++) {
        printf("\n%d ",array[i]);
    }
    free(array);
    return 0;
}