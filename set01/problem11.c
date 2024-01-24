#include <stdio.h>
#include <complex.h>

struct _complex
{
    float real;
    float imaginary;
};
typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main()
{
    Complex a, b, sum;
    a = input_complex();
    b = input_complex();
    sum = add_complex(a, b);
    output(a, b, sum);
    return 0;
}

Complex input_complex()
{
    Complex c;
    printf("enter the real part: ");
    scanf("%f", &c.real);
    printf("enter the imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}

Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum)
{
    printf("The sum of is %f + %fi", sum.real, sum.imaginary);
}