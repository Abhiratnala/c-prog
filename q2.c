#include <stdio.h>
int main(){
    int result [3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&result[i][j]);
        }
    }
    printf("\t 1 \t 2 \t 3\n");
    for(int i=0;i<3;i++){
        printf(" %d\t ",i);
        for(int j=0;j<3;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}