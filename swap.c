#include <stdio.h>
int main(){
    int n,m;
    printf("Enter ");
    scanf("%d%d",&n,&m);
     printf("N:%d\t M:%d\n",n,m);

    int temp=n;
    n=m;
    m=temp;
   printf("N:%d\t M:%d\n ",n,m);
    return 0;
}