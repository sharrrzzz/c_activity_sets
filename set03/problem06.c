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
    printf("Enter a string: ");
    scanf("%s",b);
}

int sub_str_index(char* string, char* substring)
{
    int stringlength = strlen(string);
    int substringlength = strlen(substring);
    for (int i = 0; i <= stringlength - substringlength; i++)
    {
        int j;
        for (int j = 0; j <= stringlength - substringlength; j++)
        {
            if (string[i + j] != substring[j])
            {
                break;
            }
            if (j == substringlength)
            {
                return i;
            }
        }
    }
    return -1;
}

void output(char *string, char *substring, int index)
{
    if (index != -1)
    {
        printf("the index of %s is %d in %s",substring,index,string); 
    }
    else 
    {
        printf("%s is found in %s",substring,string);
    }
}
