

#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    int a,b,c,d,e,x,y,z,sum;

    a=t/10000;
    x=t%10000;

    b=x/1000;
    y=x%1000;

    c=y/100;
    z=y%100;

    d=z/10;
    e=z%10;

    sum= a+b+c+d+e;

    printf("%d \n", sum);


    return 0;
}