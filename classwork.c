/* Program to calc sum of numbers(10num max) if a users enters a negative num, the loop terminates*/

/*#include <stdio.h>

void name();

int main()
{
    while (1)
    {
        printf("Ravneet \n");
    }
    
        
        
    
    return 0;
}
*/




/* #include <stdio.h>

int main()
{
    int x;
    int sum=0;
    printf("Enter number: ");
    for (int i = 0; i <10; i++)
    {
        
        
        scanf("%d", &x);

        if (x<0)
        {
            break;
        }
        
        sum=sum+x;

    }

    printf("sum: %d \n", sum);

    
    return 0;
} */

/* Program to its not added to result if negative*/

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* #include <stdio.h>

int main()
{
    int x=2;
    
    printf("value of x: %d \n", x);
    
    printf("address of x: %u \n", &x);
    
    printf("address of x in hexadecimal: %x", &x);

    return 0;
}
*/

/* #include <stdio.h>

int main()
{
    int x=2;
    int *y;
    y=&x;
    
    printf("value of x: %d \n", x);
    printf("value of x: %u \n",*y);
    printf("value of x: %u \n", *(&x));
    printf("address of x: %u \n", &x);
    printf("address of x: %u \n", y);
    printf("address of x: %u \n", &(*y));
    return 0;
} */

/* #include <stdio.h>

int sum(int *x, int *y);

int main()
{
    int a,b;
    printf("enter the number: \n");
    scanf("%d %d", &a,&b);
    printf("%d", sum(&a,&b));

    return 0;
}

int sum(int *x, int *y){
    int z;
    z= *x + *y;

    return z;
    
} */

/*#include <stdio.h>

int main()
{
    int *ptr;
    printf("%u \n", &ptr);
    printf("%d \n", *ptr);
    return 0;
}*/

#include <stdio.h>

/* int main()
{
    int *ptr;
    ptr=NULL;
    printf("%u \n", &ptr);
    printf("%d \n", *ptr);
    printf("%d \n", ptr);
    
    return 0;
} */

/* #include <stdio.h>

int main()
{
    void *k;
    
    int a=2;
    char b='a';
    float e=2.1;

    k=&a;
    printf("address: %p \n", k);
    printf("value: %d \n \n", *(int*)k);

    k=&b;
    printf("address: %p \n", k);
    printf("value: %c \n\n", *(char*)k);

    k=&e;
    printf("address: %p \n", k);
    printf("value: %f \n\n", *(float*)k);
    return 0;
} */

#include <stdio.h>

int main()
{
    int a=2;
    int *k;

    k=&a;
    printf("address before adding: %d \n", k);
    printf("value: %u \n", *k);
    k=k+1;
    //k=NULL;
    printf("address: %d \n", k);
    printf("value: %u \n", *k);
    return 0;
}