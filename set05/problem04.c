#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main()
{
    float radius, height, length, weight;
    input_camel_details(&radius, &height, &length);
    int mood;
    mood = find_mood(radius, height, length);
    output(radius, height, length, mood);
    return 0;
}

void input_camel_details(float *radius, float *height, float *length)
{
    printf("Enter the stomach radius of the camel: ");
    scanf("%f", radius);
    printf("Enter the height of the camel: ");
    scanf("%f", height);
    printf("Enter the length of the camel: ");
    scanf("%f", length);
}

int find_mood(float radius, float height, float length)
{
    int mood;
    if (radius < height && radius < length) // camel is sick
    {
        return 1; 
    }
    else if (height < length && height < radius) // camel is happy
    {
        return 2;
    }
    else if (length < height && length < radius) // camel is tensed
    {
        return 3;
    }
    else // cannot understand the mood
    {
        return 0;
    }
    return mood;
}

void output(float radius, float height, float length, int mood)
{
    if (mood == 1)
    {
        printf("Camel is sick.");
    }
    else if (mood == 2)
    {
        printf("Camel is happy.");
    }
    else if (mood == 3)
    {
        printf("Camel is tensed.");
    }
    else 
    {
        printf("Cannot understand camel's mood :(");
    }
}
