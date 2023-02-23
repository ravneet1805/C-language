//Imagine if you were hosting a dinner party and invited all the numbers from 1 to n to the table, but instead of bringing their whole selves, they only brought their fractions. As the host, your task is to calculate the sum of all the fractional guests, starting with the gracious host at 1 and adding in each
//party guest until the table is full. Will you be able to solve the mystery of the sum of the fractions? Write a C program to calculate the sum of following series where n is input by user.


#include <stdio.h>

int main()
{
    float x, sum=0;

    scanf("%f", &x);
    if(x>0){
    
        for(int i=1; i<=x; i++){

            sum= sum+(1.0/i);

        }
        printf(" %.2f \n", sum);
    }
    else if(x==0){
        printf("%d \n",x);
    }
    else{
        printf("Invalid input \n");
    }

    return 0;
}