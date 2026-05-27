#include<stdio.h>
int main(){
    char str[8]="is block";
    if(str=="if block")
    printf("if block executed");
    else
    printf("else block executed");
    return 0;
}
// direct comparing is not possible 
// either use stl function or looping