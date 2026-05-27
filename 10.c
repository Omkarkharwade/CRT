#include<stdio.h>
int main(){
    char str[]="\0";
    if(printf("%s",str))
    printf("inside if block");
    else
    printf("inside else block");
    return 0;
}
// the printf statement or expression inside the if block prints nothing,so the expression return 0 and else block gets executed
