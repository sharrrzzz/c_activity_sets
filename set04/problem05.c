#include <stdio.h>

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main()
{
    int n;
    n = input_size();
    int a[n];
    input_array(n,a);
    int index = find_largest_index(n,a);
    output(index);
    return 0;
}

int input_size()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    return n;
}

void input_array(int n, int a[n])
{
    printf("Enter the elements: \n");
    for (int i = 0; i<n; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
}

int find_largest_index(int n, int a[n])
{
    int index = 1;
    for (int i = 1; i<n; i++)
    {
        if (a[i] > a[index])
        {
            index = i;
        }
    }
    return index;
}

void output(int index)
{
    printf("index of the larest element is %d",index);
}