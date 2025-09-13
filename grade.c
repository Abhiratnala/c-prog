#include <stdio.h>
int main(){
   int m1,m2,m3,m4,m5;
    float t,p;
 printf("Enter marks ");
 scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
  t=m1+m2+m3+m4+m5;
  p=(t/500)*100;
  char grade;
  if(90.0<=p && p<100.0){
    grade='o';
  }
  else if(80.0<=p && p<90.0){
grade='a';
  }
  else if(60.0<=p && p<80.0){
grade='b';
  }
  else if(40.0<=p && p<60.0){
grade='c';
  }
  else{
grade='d';
  }

  printf("Total marks %f: ",t);
  printf("percentage %0.3f: ",p);
    printf("Grade %c: ",grade);
  return 0;
}