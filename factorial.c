//Today in class, Kiran read about how to find the factorial of a number and did a great job of understanding it, while her classmate Seema struggled.
//Write a code in C language which will help Seema to find out the factorial of the number.


#include <stdio.h>

int main()
{
    int x,sum=1;
    printf("Enter a number: ");
    scanf("%d", &x);

    if(x==0){
        printf("Factorial of %d is:%d \n", x,x);
    }
    else{

    for(int i=1; i<=x; i++){
        

        sum= sum*i;
    }
    printf("factorial of %d: %d \n", x,sum);
    return 0;
    }
}