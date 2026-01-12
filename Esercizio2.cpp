#include <stdio.h>
void function(int s,int *h,int *m,int *s_ref) {
    *h=s/3600;
    *m=(s-3600*(*h))/60;
    *s_ref=s%60;
}
int main() {
    int s_valore;
    int h;
    int m;
    int s_ref;
    s_valore = 3662;
    function(s_valore,&h,&m,&s_ref);
    printf("%d",h);
    printf("\n%d",m);
    printf("\n%d",s_ref);
    return 0;
}