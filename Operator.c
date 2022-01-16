#include<stdio.h>

int main()
{
    int a,b;
    int add,sub,mul,div,mod;
    printf("Enter numbers");
    scanf("%d%d",&a,&b);
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    printf("\nSum = %d",add);
    printf("\nSub = %d",sub);
    printf("\nMul = %d",mul);
    printf("\nDiv = %d",div);
    printf("\nMod = %d",mod);

return 0;
}