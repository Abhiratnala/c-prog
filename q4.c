#include <stdio.h>
int main(){
    printf("Enter color");
    char count[100];
    fgets(count,sizeof(count),stdin);
    char ch=count[0];
    if(ch=='O' || ch=='o'){
        printf("Ammonia");

    }
    else if(ch=='b' || ch=='B'){
        printf("Carbon Monoxide");
        
    }
    else if(ch=='y' || ch=='Y'){
        printf("Hybrogen");
        
    }
    else if(ch=='g' || ch=='G'){
        printf("Oxygen");
    }
    else{
        printf("unknown content");
    }
    return 0;
}