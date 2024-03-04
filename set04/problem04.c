#include <stdio.h>

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main()
{
    int n;
    n = input_degree();
    float a[n + 1];
    input_coefficients(n, a);
    float x, result;
    x = input_x();
    result = evaluate_polynomial(n, a, x);
    output(n, a, x, result);
    return 0;
}

int input_degree()
{
    int n;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &n);
    return n;
}

void input_coefficients(int n, float a[n])
{
    printf("Enter the co-efficients of the polynomials: \n");
    for (int i = 0; i <= n; i++)
    {
        printf("Co-efficient of x^%d: ", n - i);
        scanf("%f", &a[i]);
    }
}

float input_x()
{
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    return x;
}

float evaluate_polynomial(int n, float a[n], float x)
{
    float result = a[0];
    for (int i = 1; i <= n; i++)
    {
        result = result * x + a[i];
    }
    return result;
}

void output(int n, float a[n], float x, float result)
{
    printf("Polynomial: ");
    for (int i = 0; i <= n; i++)
    {
        printf("(%f)x^%d", a[i], n - i);
        if (i < n)
        {
            printf("+");
        }
    }
    printf(" = %f", result);
}