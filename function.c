#include<stdio.h>  
void printName();  //declaration (globally)
int main ()  
{  
    printf("Hello ");  
    printName();  // calling
}  
void printName()   // defined
{  
    printf("Javatpoint");  
}  