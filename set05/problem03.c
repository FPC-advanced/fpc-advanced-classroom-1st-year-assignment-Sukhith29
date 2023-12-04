/*3.  Write a program to find the weight of the camel given height, length and stomach radius using four functions *(Structures)*

> `weight = pi * stomach_radius^3 * sqrt(height * length)`

***Function Declarations***
```c
struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
float find_weight(Camel c);  //pass by value
//or
void find_weight(Camel *c); //passing address variable
void output(Camel c);
```

***Input***

```
1
1
1
```

***Output***

```
The weight of the camel with radius: 1.0, height: 1.0, length: 1.0 is 3.1415
```
*/

#include <stdio.h>
#include <math.h>

#define PI 3.1415

struct camel {
    float radius, height, length, weight;
};

typedef struct camel Camel;

Camel input() {
    Camel c;
    printf("Enter the stomach radius, height, and length of the camel: ");
    scanf("%f %f %f", &c.radius, &c.height, &c.length);
    return c;
}

float find_weight(Camel c) {
    return PI * pow(c.radius, 3) * sqrt(c.height * c.length);
}

void find_weight(Camel *c) {
    c->weight = PI * pow(c->radius, 3) * sqrt(c->height * c->length);
}

void output(Camel c) {
    printf("The weight of the camel with radius: %.1f, height: %.1f, length: %.1f is %.4f\n",
           c.radius, c.height, c.length, c.weight);
}

int main() {
    Camel myCamel;

    myCamel = input();

    float weight1 = find_weight(myCamel);

    find_weight(&myCamel);

    output(myCamel);

    return 0;
}

