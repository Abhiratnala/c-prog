#include <stdio.h>
int main(){
    int result [5][3];
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&result[i][j]);
        }
    }
    printf("\tsub1 \t sub2 \t sub3\n");
    for(int i=0;i<5;i++){
        printf("Student %d\t ",i);
        for(int j=0;j<3;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}