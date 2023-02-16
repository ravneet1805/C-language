// #include <stdio.h>

// int main()
// {
//     int i[2]= {1,2};

//     printf("address: %p \n", i);

//     int *x;
//     x= &i[0];
//     printf("address: %p \n", x);
//     printf("value: %d \n", *x);
//     x=x+1;
//     printf("address: %p \n", x);
//     printf("value: %d \n", *x);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     return 0;
// }

/*
#include <stdio.h>

display1(int m);
display2(int *n);

int main()
{
    int arr[]={55,56,67,87,90};
    for (int i = 0; i <=6; i++)
    {
        display1(arr[i]);
    }
    

    return 0;
}

display1(int m)
{
    printf("%d \n", m);
}

display2(int *n)
{
    
    printf("%u \n", *n);
}
*/

#include <stdio.h>

int main()
{
    int arr[5]={10,20,30,40,50};
    int *x;

    printf("enter value from 0 to 4: ");
    int a;
    scanf("%d", &a);
    x=&arr[a];

    printf("%u \n", *x);

    return 0;
}