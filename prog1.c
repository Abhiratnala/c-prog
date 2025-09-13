#include <stdio.h>
#define kmtom 1.6
int main(){
    double miles,kms,extra;
    printf("enter miles");
    scanf("%lf%lf",&miles,&extra);
    kms=kmtom*miles;
    printf("Kilometers=%f",kms);
     printf("extra=%f",extra);
    return 0;
}