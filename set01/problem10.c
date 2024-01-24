#include <stdio.h>
#include <string.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main()
{
    char string1[100],string2[100];
    input_two_strings(string1,string2);
    int result;
    result=stringcompare(string1,string2);
    output(string1,string2,result);
}

void input_two_strings(char *string1, char *string2)
{
    printf("Enter the first string: ");
    scanf("%s",string1);
    printf("Enter the second string: ");
    scanf("%s",string2);
}

int stringcompare(char *string1, char *string2)
{
    int i=0, result;
    for (i=0;string1[i]==string2[i];i++);
        if (string1[i]>string2[i])
        {
            result=0;
        }
        else if (string2[i]>string1[i])
        {
            result=1;
        } 
        else 
        {
            result=2;
        }
    return result;
}

void output(char *string1, char *string2, int result)
{
    if (result==0)
    {
        printf("%s is greater",string1);
    }
    else if (result==1)
    {
        printf("%s is greater",string2);
    }
    else 
    {
        printf("both are same");
    }
}