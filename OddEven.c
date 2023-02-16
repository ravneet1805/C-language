#include<stdio.h>
int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d \n", &x);
    
    if (x%2==0)
    {
        printf("%d is Even \n", x);
    }

    else{
        printf("%d is Odd \n", x);
    }

    return 0;
}