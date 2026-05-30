#include<iostream>
using namespace std;

int main(){
    char name[]="abcdef";
    int i=0;
    cout<<name[i]<<" ";
    cout<<i[name]<<" ";
    cout<<name[i+2]<<" ";
    cout<<i[name+2]<<" ";

    return 0;
}
//  name[i] and i[name] is same mostly asked in interview
