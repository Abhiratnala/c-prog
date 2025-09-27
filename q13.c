
#include <stdio.h>
int main(){
    int arr [11];
    int a [4]={10,20,30,40};
    int b [7]={12,26,35,69,73,90,100};
    int i=0,j=0,k=0,n1=4,n2=7,n=11;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k++]=a[i];
            i++;
        }
        else{
            arr[k++]=b[j];
            j++;
        }
    }
    while(i<n1){
        arr[k++]=a[i];
        i++;
    }
    while(j<n2){
        arr[k++]=b[j];
        j++;
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}