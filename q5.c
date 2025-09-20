#include <stdio.h>
int main(){
    int n;
    printf("Enter n\t");
    scanf("%d",&n);
    int d=0,s=0;
    while(n!=0){
        d=n%10;
        printf("%d\t",d);
        s+=d;
        n=n/10;
    }
    
    if(s%9==0){
        printf("\ndivisible by 9");
    }
    else{
        printf("\nnot divisible by 9");
    }
    return 0;
}