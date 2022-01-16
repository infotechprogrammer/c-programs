#include<stdio.h>

int main()
{
    int a = 20, b = 20;
    if (a > b) { 
        printf("The largest number A");
    } else if(b > a){
        printf("The largest number B");
    } else { //a=b
        printf("Equal");
    }

return 0;
}