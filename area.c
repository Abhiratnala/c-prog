#include <stdio.h>
#define pi 3.14
int main(){
    double area,par,l,b;
    printf("enter rad");
    scanf("%lf%lf",&l,&b);
   area=l*b;
   par=2*(l+b);
    printf("Area=%f",area);
    return 0;
}