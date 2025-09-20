#include <stdio.h>
int main(){
   int  curr=10000;
   int w;
   printf("enter the amount u want to withdraw\n");
   scanf("%d",&w);
   if(w>curr){
    printf("Insuffecient funds");
   }
   else if(w%100==0){
    printf("Collect your cash: %d\n",w);
    curr-=w;
    printf("Balence %d",curr);
   }
   else{
    printf("Enter money in multiples of 100");

   }
   return 0;
}