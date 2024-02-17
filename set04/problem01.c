#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main()
{
    int num1, den1, num2, den2, res_num, res_den;
    input(&num1, &den1, &num2, &den2);
    add(num1, den1, num2, den2, &res_num, &res_den);
    output(num1, den1, num2, den2, res_num, res_den);
    return 0;
}

void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("Enter the numerator of the first fraction: ");
    scanf("%d", num1);
    printf("Enter the denominator of the first fraction: ");
    scanf("%d", den1);
    printf("Enter the numerator of the second fraction: ");
    scanf("%d", num2);
    printf("Enter the denominator of the second fraction: ");
    scanf("%d", den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    *res_num = num1 * den2 + num2 * den1;
    *res_den = den1 * den2;
    int gcd = 1;
    for (int i = 1; i <= *res_num && i <= *res_den; i++)
    {
        if (*res_num % i == 0 && *res_den % i == 0)
        {
            gcd = i;
        }
    }
    *res_num = *res_num / gcd;
    *res_den = *res_den / gcd;
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    printf("The sum of %d/%d and %d/%d is %d/%d", num1, den1, num2, den2, res_num, res_den);
}