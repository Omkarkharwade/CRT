#include<iostream>
using namespace std;

void abc(char arr[]);

int main(){
    char arr[100];
    arr[0]='a';
    arr[1]='b';
    arr[2]='c';
    arr[3]='d';

    abc(arr);

    return 0;
}

void abc(char arr[]){
    cout << *++arr;
    cout << *arr++;
}