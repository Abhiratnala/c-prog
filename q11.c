#include <stdio.h>
int main(){
    int result [3][3];
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&result[i][j]);
            sum+=result[i][j];
        }
    }
    printf("Sum: %d",sum);
   
    
    return 0;
}