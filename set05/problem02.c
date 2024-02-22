#include <stdio.h>
#include <math.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

// `weight = pi * stomach_radius^3 * sqrt(height * length)`

int main()
{
    float radius, height, length, weight;
    input_camel_details(&radius, &height, &length);
    weight = find_weight(radius, height, length);
    output(radius, height, length, weight);
    return 0;
}

void input_camel_details(float *radius, float *height, float *length)
{
    printf("Enter the stomach radius of the camel: ");
    scanf("%f",radius);
    printf("Enter the height of the camel: ");
    scanf("%f",height);
    printf("Enter the length of the camel: ");
    scanf("%f",length);
}

float find_weight(float radius, float height, float length)
{
    float weight;
    float pi = 3.1415;
    weight = pi * radius * radius * radius * sqrt(height * length);
    return weight;
}

void output(float radius, float height, float length, float weight)
{
    printf("The weight of a camel with stomach radius %.2f, height %.2f and length %.2f is %.4f",radius,height,length,weight);
}