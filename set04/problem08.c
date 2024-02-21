#include <stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main()
{
    int n = input_n();
    Fraction fractions[n];
    input_n_fractions(n, fractions);
    Fraction sum = add_n_fractions(n, fractions);
    output(n, fractions, sum);
    return 0;
}

int input_n()
{
    int n;
    printf("Enter the number of fractions: ");
    scanf("%d", &n);
    return n;
}

Fraction input_fraction()
{
    Fraction f;
    printf("Enter the numerator: ");
    scanf("%d", &f.num);
    printf("Enter the denominator: ");
    scanf("%d", &f.den);
    return f;
}

void input_n_fractions(int n, Fraction f[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("Fraction %d\n", i + 1);
        f[i] = input_fraction();
    }
}

int find_gcd(int a, int b)
{
    int gcd;
    while (b != 0)
    {
        gcd = b;
        b = a % b;
        a = gcd;
    }
    return gcd;
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction sum;
    sum.num = f1.num * f2.den + f2.num * f1.den;
    sum.den = f1.den * f2.den;
    int gcd = find_gcd(sum.num, sum.den);
    sum.num = sum.num / gcd;
    sum.den = sum.den / gcd;
    return sum;
}

Fraction add_n_fractions(int n, Fraction f[n])
{
    Fraction sum = {0,1};
    for (int i = 0; i < n; i++)
    {
        sum = add_fractions(sum, f[i]);
    }
    return sum;
}

void output(int n, Fraction f[n], Fraction sum)
{
    printf("Fractions entered are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d/%d\n", f[i].num, f[i].den);
    }
    printf("Sum of fractions is: %d/%d", sum.num, sum.den);
}