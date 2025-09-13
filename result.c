#include <stdio.h>
int main(){
   int m1,m2,m3,m4,m5;
    float t,p;
 printf("Enter marks ");
 scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
  t=m1+m2+m3+m4+m5;
  p=(t/500)*100;
  printf("Total marks %f: ",t);
  printf("percentage %0.3f: ",p);
  return 0;
}