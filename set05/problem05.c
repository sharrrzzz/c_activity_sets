#include <stdio.h>

int input(int x);
float borga_X(int x);
void output(int x, float result);

int main()
{
    int x;
    float result;
    x = input(x);
    result = borga_X(x);
    output(x, result);
    return 0;
}

int input(int x)
{
    printf("Enter a number: ");
    scanf("%d",&x);
    return x;
}

float borga_X(int x)
{
    float result = 1.0;
    float term = 1.0;
    float factorial = 1.0;
    float x_power = x;
    int n = 1;
    while (term >= 0.000001)
    {
        factorial = factorial * (2 * n) * (2 * n + 2);
        term = x_power / factorial;
        result = result + term;
        x_power = x * x_power;
        n++;
    }
    return result;
}

void output(int x, float result)
{
    printf("Borga(%d) = %.6f",x,result);
}