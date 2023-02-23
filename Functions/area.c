#include <stdio.h>

void square(float s);
void circle(float r);
void rectangle(float l, float b);

int main()
{
    float s,r,l,b;

    //area fo square

    printf("Side: ");
    scanf("%f", &s);

    square(s);

    //area of circle

    printf("Radius: ");
    scanf("%f", &r);
    
    circle(r);

    //area of rectangle

    printf("length: ");
    scanf("%f", &l);
    printf("Breadth: ");
    scanf("%f", &b);

    rectangle(l,b);

    return 0;
}

void square(float s){

    float area = s*s;
    printf("Area of square: %f \n", area);

}

void circle(float r){

    float area = 3.14*r*r;
    printf("Area of square: %f \n", area);
}

void rectangle(float l, float b){

    float area = l*b;
    printf("Area of square: %f \n", area);
}