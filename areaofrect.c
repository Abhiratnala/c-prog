#include <stdio.h>
#define pi 3.14
int main(){
    double area,par,l,b;
    printf("enter l and b ");
    scanf("%lf%lf",&l,&b);
   area=l*b;
   par=2*(l+b);
    printf("Area=%0.2f\n",area);
    printf("perimeter=%f",par);
    return 0;
}