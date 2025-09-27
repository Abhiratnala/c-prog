#include <stdio.h>
int main(){
    int sum [3][3];
    int a [3][3];
    int b [3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            //sum[i][j]=b[i][j]+a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
            //sum[i][j]=b[i][j]+a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=b[i][j]+a[i][j];
            
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",sum[i][j]);
            
        }
        printf("\n");
    }
   
    
    return 0;
}