#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,3,1,11,4,10,33,7,2,5};
    int small,large;
    small=large=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]<small){
            small=arr[i];
        }
        if(arr[i]>large){
            large=arr[i];
        }
    }
        cout<<"small  "<<small<<" "<<"large "<<large<<endl;
    }
