#include<iostream>
using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        if(10%2==0){
            cout<<"it is even";
        }
        else{
            cout<<"it is old";
        }
    }
}