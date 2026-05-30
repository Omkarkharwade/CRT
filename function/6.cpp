#include<iostream>
#include<cstdlib>
using namespace std;

int *fun();

int main(){
    int *ptr = fun();
    cout << *ptr;

    free(ptr);

    return 0;
}

int *fun(){
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 25;
    return ptr;
}