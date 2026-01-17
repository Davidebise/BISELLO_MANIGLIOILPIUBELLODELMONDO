#include <stdio.h>
#include <stdlib.h>
int main() {
    int n=6;
    int *array=(int*)malloc(n*sizeof(int));
    array[0]=1;
    array[1]=2;
    array[2]=-3;
    array[3]=4;
    array[4]=-5;
    array[5]=6;
    int c=0;
    for (int i=0;i<n;i++) {

        array[c]=array[i];
        if (array[i]>=0) {
            c++;
        }
    }
    realloc(array,c*sizeof(int));
    for (int i=0;i<c;i++) {
        printf("%d \n",array[i]);
    }
    free(array);
    return 0;
}