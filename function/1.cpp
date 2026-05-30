#include<iostream>
using namespace std;
int myfunction(int,int);
int main(){
    int a=25,b=24+1,c;
    cout<<myfunction(a,b);
}
int myfunction(int x,int y){
    return (x-(x==y));
}
// return (25-(25==25));
// return (25-1);
// return 24;