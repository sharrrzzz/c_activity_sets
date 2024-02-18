#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2,Fraction sum);

int main()
{
    Fraction f1, f2, f3, sum;
    printf("Enter fraction 1: ");
    f1 = input_fraction();
    printf("Enter fraction 2: ");
    f2 = input_fraction();
    sum = add_fractions(f1,f2);
    output(f1,f2,sum);
    return 0;
}

Fraction input_fraction()
{
    Fraction f;
    printf("Enter the numerator: ");
    scanf("%d",&f.num);
    printf("Enter the denominator: ");
    scanf("%d",&f.den);
    return f;
}

int find_gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction sum;
    sum.num = f1.num * f2.den + f2.num * f1.den;
    sum.den = f1.den * f2.den;
    int gcd = find_gcd(sum.num,sum.den);
    sum.num = sum.num / gcd;
    sum.den = sum.den / gcd;
    return sum;
}

void output(Fraction f1, Fraction f2,Fraction sum)
{
    printf("Sum = %d/%d",sum.num,sum.den);
}




