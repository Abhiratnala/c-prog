#include <stdio.h>
int main(){
    int n,m;
    printf("Enter ");
    scanf("%d%d",&n,&m);
     printf("N:%d\t M:%d\n",n,m);

    n=n+m;
    m=n-m;
    n=n-m;
   printf("N:%d\t M:%d\n ",n,m);
    return 0;
}