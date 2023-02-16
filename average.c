#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter first no.: ");
    scanf("%d", &a);

    printf("Enter second no.: ");
    scanf("%d", &b);

    printf("Enter third no.: ");
    scanf("%d", &c);

    printf("Average: %d \n", (a+b+c)/3);

    return 0;
}