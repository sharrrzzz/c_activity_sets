#include <stdio.h>

void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main()
{
    int n,r,result;
    input_n_and_r(&n, &r);
    result = nCr(n,r);
    output(n,r,result);
    return 0;
}

void input_n_and_r(int *n, int *r)
{
    printf("Enter the value of n: ");
    scanf("%d",n);
    printf("Enter the value of r: ");
    scanf("%d",r);
}

int nCr(int n, int r)
{
    //nCr = n! / (r! * (n - r)!)
    int numerator = 1, denominator = 1;
    for (int i = 0; i < r; i++)
    {
        numerator = numerator * (n - i);
    }
    for (int j = 1; j <= r; j++)
    {
        denominator = denominator * j;
    }

    int ncr = numerator/denominator;
    return ncr;
}

void output(int n, int r, int result)
{
    printf("for n = %d and r = %d, nCr = %d",n,r,result);
}