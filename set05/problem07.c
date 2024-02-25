#include <stdio.h>
#include <string.h>

void input(char *name);
int has_nice_name(char *name);
void output(char *name, int res);

int main()
{
    char name[100];
    input(name);
    int res = has_nice_name(name);
    output(name,res);
    return 0;
}

void input(char *name)
{
    printf("Enter the name a camel: ");
    scanf("%s", name);
}

int has_nice_name(char *name)
{
    int vowels = 0, consonants = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
        {
            vowels++;
        }
        else if (name[i] >= 'a' && name[i] <= 'z' || name[i] >= 'A' && name[i] <= 'Z')
        {
            consonants++;
        }
    }
    if (vowels >= 2 && consonants >= 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void output(char *name, int res)
{
    if (res == 1)
    {
        printf("The camel %s has a nice name.",name);
    }
    else
    {
        printf("The camel %s does not have a nice name.",name);
    }
}