#include <stdio.h>
int main(){
    int result [3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&result[i][j]);
        }
    }
    
    for(int i=0;i<3;i++){
        printf("Row %d\t",i);
        for(int j=0;j<4;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}