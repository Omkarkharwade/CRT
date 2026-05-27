#include<stdio.h>
int main(){
    int arr[5],i;
    for(int i=0;i<5;i++){
        printf("enter a value of array arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("the array:");
    for(int i=4;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    return 0;
}