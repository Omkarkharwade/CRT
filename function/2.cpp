#include<iostream>
using namespace std;
int _a_1234(int );
int main(){
    int n=_a_1234(4);
    cout<<--n;
    return 0;

    
}
int _a_1234(int n){
    return (n++);
}