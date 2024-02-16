#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
    int a,b,c;
    a=input_side();
    b=input_side();
    c=input_side();
    int isscalene = check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}

int input_side()
{
    int n;
    printf("Enter the sides of the triangle: ");
    scanf("%d",&n);
    return n;
}

int check_scalene(int a, int b, int c)
{
    if (a!=b && a!=c && b!=c)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

void output(int a, int b, int c, int isscalene)
{
    printf("The sides of the triangle are: %d,%d,%d\n",a,b,c);
     
    if (isscalene)
    {
        printf("The triangle is scalene");
    }
    else
    {
        printf("The triangle is not scalene");
    }
}