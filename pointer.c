#include<stdio.h>

int main()
{
    int n = 10;
    printf("%d\n",&n);

    int *p = &n; //pointer
    
    printf("%d\n",p);
    printf("%d\n",*p);
    
    char c = 'a';
    printf("%d\n",&c);

    char *pt = &c;
    printf("%d\n",pt);
    printf("%c\n",*pt);



return 0;
}