#include<stdio.h>
int main(){

    char fname [20], lname [20]; 
    printf("Enter your first name : ");
    scanf("%s", fname);
    printf("Enter your last name: "); 
    scanf("%s", lname);
    printf("Your Full Name is %s %s\n", fname, lname);
    return 0;
}