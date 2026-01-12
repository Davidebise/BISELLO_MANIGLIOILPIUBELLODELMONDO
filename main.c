#include <stdio.h>
void function(int a,int b,int *q,int *r) {
    *q = a/b;
    *r = a%b;
}
int main(void) {
    int a;
    int b;
    int q;
    int r;
    a=4;
    b=3;
    function(a,b,&q,&r);
    printf("%d",q);
    printf("\n%d",r);
    return 0;
}