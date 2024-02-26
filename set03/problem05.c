#include <stdio.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main()
{
    int n;
    n = input_array_size();
    int a[n];
    init_array(n, a);
    erotosthenes_sieve(n, a);
    output(n, a);
    return 0;
}

int input_array_size()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    return n;
}

void init_array(int n, int a[n])
{
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
}

void erotosthenes_sieve(int n, int a[n])
{
    
}

void output(int n, int a[n])
{
    printf("Prime numbers between 2 and %d are: \n", n);
    for (int i = 2; i < n; i++)
    {
        if (a[i] == 1)
        {
            printf("%d, ", i);
        }
    }
    printf("\n");
}