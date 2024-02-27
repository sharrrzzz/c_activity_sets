// 2. Write a C program to add two numbers.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    int sum = a+b;
    printf("The sum of %d and %d is %d",a,b,sum);
}
