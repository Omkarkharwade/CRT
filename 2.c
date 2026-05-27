#include<stdio.h>
int main(){
    int arr[10],i,sum=0;
    for(int i=0;i<10;i++){
        printf("enter value of arr[%d]: ",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("sum=%d",sum);
}