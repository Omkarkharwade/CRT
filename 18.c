#include<stdio.h>
int main(){
    if(sizeof("\0"))
    printf("inside if block");
    else
    printf("inside else block");
    return 0;
}
// the sizeof("\0") is 1 byte return true 1 so if block gets executed