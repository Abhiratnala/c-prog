#include <stdio.h>
int main(){
    int result [3][4];
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&result[i][j]);
            
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
           sum+=result[i][j];
            
        }
        printf("sum of prod %d: %d\n",(i+1),sum);
        sum=0;
    }
   
   
    
    return 0;
}