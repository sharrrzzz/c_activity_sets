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
    float term;
    float factorial = 1.0;
    float x_power = x;
    for (int i = 1; ;i++)
    {
        factorial *= (2 * i) * (2 * i + 1);
        term = x_power/factorial;
        result += term;
        if (term < 0.000001 && term > -0.000001)
        {
            break;
        }
        x_power *= x;
    }
    return result;
}

void output(int x, float result)
{
    printf("Borga(%d) = %.6f",x,result);
}