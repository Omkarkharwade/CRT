#include<iostream>
using namespace std;
int show(int);
int main(){
    int num=show(sizeof(float));
    cout<<++num;


    return 0;
}
int show(int returns){
    returns+=5.31;
    return(returns);
}