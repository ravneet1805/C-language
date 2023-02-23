//As the director of a library, Radhika is responsible for buying all of the books that are added to the collection.
//Radhika now has to buy 10 books for her library, and she will receive a 10% discount on those 5 books.
//Write a C program to prepare a bill for 5 books after 10% discount for her library.

#include <stdio.h>

int main()


{
    int sum=0;

    for(int i=0; i<5; i++){
        int price[5];
        printf("Enter book price: ");
        scanf("%d", &price[i]);

        

        sum= sum+ price[i]*0.1;

    }

    printf("sum:%d", sum);
    
    return 0;
}