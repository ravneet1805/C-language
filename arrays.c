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

/*
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
*/

/* #include <stdio.h>

int main()
{
    int arr[4]={1,2,3,4};

    printf("%u \n", arr+1);
    printf("%u \n", &arr+1);
    return 0;
} */

/*
#include <stdio.h>

int main()
{
    int a[4]={1,2,3,4};

    int (*p1)[4];

    p1=&a;

    for (int i = 0; i <4; i++)
    {
        printf("%d \n", *(p1+i));
    }
    

    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int a[3][2]={
        {12,13},
        {14,15},
        {16,17}
    };

    for (int i = 0; i <=3; i++)
    {
        for (int j = 0; j <=1; j++)
        {
            printf("%d \n",*(*(a+i)+j));
        }
        printf("\n");
        
    }
    
    return 0;
}
*/


/* 
#include <stdio.h>

int display(int s[][2],int row,int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");
        
    }
    
}
int main(){

    int s[4][2] = {     {1234,56},
                        {1212,45},
                        {4567,29},
                        {6734,28}
    };
    display(s,4,2);
    
    return 0;
}
*/