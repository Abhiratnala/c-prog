#include <stdio.h>
int main(){
    int units;
    float cost;
    printf("enter units");
    scanf("%d",&units);
    if(units <=100){
cost=units*1.50;
    }
    else if(units-100<=200){
        cost=(units-100)*2.50;
    }
    else{
        cost=units*4.00;

    }
    if(cost>1000){
        cost=cost*(1+0.1);
    }
    printf("Total cost%f ",cost);
    return 0;
}