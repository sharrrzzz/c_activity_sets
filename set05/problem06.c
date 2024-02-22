#include <stdio.h>

int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main()
{
    int n;
    n = input_n();
    int a[n];
    input(n,a);
    float avg;
    avg = odd_average(n,a);
    output(avg);
    return 0;
}

int input_n()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    return n;
}

void input(int n, int a[n])
{
    printf("Enter the elements of the array: \n");
    for (int i = 0; i<n; i++)
    {
        printf("Element %d: \n",i+1);
        scanf("%d",&a[i]);
    }
}

float odd_average(int n, int a[n])
{
    int sum = 0;
    int odd_nos = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            sum = sum + a[i];
            odd_nos++;
        }
    }

    if (odd_nos == 0)
    {
        return 0;
    }

    float avg = sum / odd_nos;
    return avg;
}

void output(float avg)
{
    printf("The average of all odd numbers is: %.2f",avg);
}
