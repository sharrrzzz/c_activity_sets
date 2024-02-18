#include <stdio.h>
#include <string.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main()
{
    char string[100];
    input_string(string);
    int no_words = count_words(string);
    output(string,no_words);
    return 0;
}

void input_string(char *a)
{
    printf("Enter a string: ");
    scanf("%[^\n]%*c",a);
}

int count_words(char *string)
{
    int count = 0;
    char* tok = strtok(string, " ");
    while (tok != NULL)
    {
        count++;
        tok = strtok(NULL, " ");
    } 
    return count;
}

void output(char *string, int no_words)
{
    printf("The number of words is %d",no_words);
}