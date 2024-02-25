#include <stdio.h>

typedef struct _camel
{
    float radius, height, length, weight;
} Camel;

void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main()
{
    int n;
    printf("Enter the number of camels: ");
    scanf("%d", &n);
    Camel camel[n];
    float truck_weight;
    input(n, camel, &truck_weight);
    find_camel_weight(n, camel);
    float total_weight = compute_total_weight(n, camel, truck_weight);
    output(total_weight);
    return 0;
}

void input(int n, Camel c[n], float *truck_weight)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter details of camel %d\n", i + 1);
        printf("Height: ");
        scanf("%f", &c[i].height);
        printf("Radius: ");
        scanf("%f", &c[i].radius);
        printf("Length: ");
        scanf("%f", &c[i].length);
    }
    printf("Enter the weight of the truck: ");
    scanf("%f", truck_weight);
}

void find_camel_weight(int n, Camel c[n])
{
    for (int i = 0; i < n; i++)
    {
        float volume = 3.14 * c[i].radius * c[i].radius * c[i].length;
        c[i].weight = volume * 1.0;
    }
}

float compute_total_weight(int n, Camel c[n], float truck_weight)
{
    float total_weight = truck_weight;
    for (int i = 0; i < n; i++)
    {
        total_weight += c[i].weight;
    }
    return total_weight;
}

void output(float total_weight)
{
    printf("The total weight of truck is: %f", total_weight);
}