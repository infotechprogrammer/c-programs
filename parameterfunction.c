#include <stdio.h>

int sum(int a, int b)
{
    int sum = a + b;
    return (sum);
}

int main()
{
    int sum1 = sum(10, 20); //30
    int sum2 = sum(20, 20); //40
    int sum3 = sum(25, 25); //50
    printf("%d\n", sum1);
    printf("%d\n", sum2);
    printf("%d\n", sum3);

    return 0;
}