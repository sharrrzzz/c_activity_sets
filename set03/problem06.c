#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main()
{
    char string[100], substring[100];
    input_string(string, substring);
    int index = sub_str_index(string, substring);
    output(string, substring, index);
    return 0;   
}

void input_string(char* a, char* b)
{
    printf("Enter a string: ");
    scanf("%s",a);
    printf("Enter the substring: ");
    scanf("%s",b);
}

int sub_str_index(char* string, char* substring)
{
    int stringlength = 0;
    for (int i = 0; string[stringlength] != '\0'; i++)
    {
        stringlength++;
    }

    int substringlength = 0;
    for (int j = 0; substring[substringlength] != '\0'; j++)
    {
        substringlength++;
    }
    for (int k = 0; k <= stringlength - substringlength; k++)
    {
        int l;
        for (l = 0; l < substringlength; l++)
        {
            if (string[k + l] != substring[l])
            {
                break;
            }
        }
            if (l == substringlength)
            {
                return k;
            }
    }
    return -1;
}

void output(char *string, char *substring, int index)
{
    if (index != -1)
    {
        printf("the index of '%s' in '%s' is %d",substring,string,index); 
    }
    else 
    {
        printf("%s is not found in %s",substring,string);
    }
}
