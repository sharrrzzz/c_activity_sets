#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
    int a,b,gcd;
    a = input();
    b = input();
    gcd = find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}

int input()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    return n;
}

int find_gcd(int a, int b)
{
    while (a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        if (b>a)
        {
            b=b-a;
        }
    }
}

void output(int a, int b, int gcd)
{
    printf("The GCD of %d and %d is %d",a,b,gcd);
}