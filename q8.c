#include <stdio.h>
int main(){
    int result [3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&result[i][j]);
        }
    }
     for(int i=0;i<3;i++){
      
        for(int j=0;j<3;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            
int temp=result[i][j];
result[i][j]=result[j][i];
result[j][i]=temp;
        }
    }
    printf("\n");
    for(int i=0;i<3;i++){
      
        for(int j=0;j<3;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}