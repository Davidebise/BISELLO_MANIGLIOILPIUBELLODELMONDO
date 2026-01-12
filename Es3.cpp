#include <stdio.h>
void function(int a,int b,int *c,int *d) {
    *c=1;
    *d=1;
    for (int i=0;i<b;i++) {
        *c*=a;
    }
    for (int i=0;i<a;i++) {
        *d*=b;
    }
}
int main() {
    int a,b;
    a=2;
    b=3;
    function(a,b,&a,&b);
    printf("%d",a);
    printf("\n%d",b);
    return 0;
}