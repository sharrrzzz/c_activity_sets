#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    int n, result;
    n = input_number();
    result = is_composite(n);
    output(n, result);
    return 0;
}

int input_number()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    return n;
}

int is_composite(int n)
{
    int result = 0;
    for (int i = 2; i<n; i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
    return result;
}

void output(int n, int result)
{
    if (result == 1)
    {
        printf("%d is a composite number.",n);
    }
    else
    {
        printf("%d is not a composite number.",n);
    }
}