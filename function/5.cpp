#include<iostream>
using namespace std;
int num=5;
int fun();
int main(){
    fun();
    fun();
    return 0;

    
}
int fun(){
    static int num=2;
    cout<<num;
    num++;
    return 0;
}