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
        for (int j = 0; j <=1; i++)
        {
            printf("%d",*(*(a+i)+j));
        }
        printf("\n");
        
    }
    
    return 0;
}