#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
    char str[100], reverse_str[100];
    input_string(str);
    str_reverse(str, reverse_str);
    output(str, reverse_str);
    return 0;
}

void input_string(char *a)
{
    printf("Enter a string: ");
    scanf("%s", a);
}

void str_reverse(char *str, char *rev_str)
{
    int length = strlen(str)-1;
    for (int i = 0; i < strlen(str)/2; i++)
    {
        char temp;
        temp = str[i];
        str[i] = str[length];
        str[length--]=temp;
    }
}

void output(char *a, char *reverse_a)
{
    printf("Reverse string is %s",a);
}