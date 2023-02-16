#include<stdio.h>

int main()
{
    int age;
    float marks;

    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("Enter your marks: \n");
    scanf("%f", &marks);

    printf("Your age is: %d \n Your marks are: %f \n", age, marks);

    return 0;
}