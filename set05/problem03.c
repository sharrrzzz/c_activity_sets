#include <stdio.h>
#include <math.h>

struct camel
{
    float radius, height, length, weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c); // passing address variable
void output(Camel c);

//`weight = pi * stomach_radius^3 * sqrt(height * length)`

int main()
{
    Camel c;
    c = input();
    find_weight(&c);
    output(c);
    return 0;
}

Camel input()
{
    Camel c;
    printf("Enter the stomach radius of the camel: ");
    scanf("%f", &c.radius);
    printf("Enter the height of the camel: ");
    scanf("%f", &c.height);
    printf("Enter the length of the camel: ");
    scanf("%f", &c.length);
    return c;
}

void find_weight(Camel *c)
{
    float pi = 3.1415;
    c->weight = pi * c->radius * c->radius * c->radius * sqrt(c->height * c->length);
}

void output(Camel c)
{
    printf("The weight of a camel with stomach radius %.2f, height %.2f and length %.2f is %.4f", c.radius, c.height, c.length, c.weight);
}
