#include <stdio.h>

typedef struct
{
    int num, den;
} Fraction;

Fraction input();
Fraction find_smallest_fractions(Fraction f1, Fraction f2, Fraction f3);
Fraction simplify(Fraction f);
void output(Fraction f);

int main()
{
    Fraction f1, f2, f3, smallest;
    printf("Enter the first fraction: \n");
    f1 = input();
    printf("Enter the second fraction: \n");
    f2 = input();
    printf("Enter the third fraction: \n");
    f3 = input();
    smallest = find_smallest_fractions(f1, f2, f3);
    smallest = simplify(smallest);
    output(smallest);
    return 0;
}

Fraction input()
{
    Fraction f;
    printf("\nEnter the numerator of the fraction: ");
    scanf("%d", &f.num);
    printf("\nEnter the denominator of the fraction: ");
    scanf("%d", &f.den);
    return f;
}

Fraction find_smallest_fractions(Fraction f1, Fraction f2, Fraction f3)
{
    Fraction smallest;
    if (f1.num / f1.den < f2.num / f2.den && f1.num / f1.den < f3.num / f3.den)
    {
        smallest = f1;
    }
    else if (f2.num / f2.den < f1.num / f1.den && f2.num / f2.den < f3.num / f3.den)
    {
        smallest = f2;
    }
    else
    {
        smallest = f3;
    }
    return smallest;
}

Fraction simplify(Fraction f)
{
    int gcd = 1;
    for (int i = 2; i <= f.num && i <= f.den; i++)
    {
        if (f.num % i == 0 && f.den % i == 0)
        {
            gcd = i;
        }
    }
    f.num = f.num / gcd;
    f.den = f.den / gcd;
    return f;
}

void output(Fraction f)
{
    printf("The smallest fraction is %d/%d", f.num, f.den);
}