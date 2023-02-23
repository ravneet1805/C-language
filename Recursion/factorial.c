#include <stdio.h>

int fact(int num);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("%d \n",fact(x));

    return 0;
}

int fact(int num){

    if(num==1){

        return 1;
    }

    int a= fact(num-1);
    int b= a*num;

    return b;
}    