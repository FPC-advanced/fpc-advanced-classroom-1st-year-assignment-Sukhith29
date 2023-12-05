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

struct camel
{
    float radius, height, length, weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *C);
void output(Camel C);
int main()
{
    Camel C;
    float radius, height, length, weight;
    C = input();
    find_weight(&C);
    output(C);
    return 0;
}
Camel input()
{
    Camel C;
    printf("Enter the radius,height,length of the camel:\n");
    scanf("%f %f %f", &C.radius, &C.height, &C.length);
    return C;
}
void find_weight(Camel *C)
{
    float weight, pi;
    pi = 3.142;
    C->weight = pi * C->radius * C->radius * C->radius * sqrt(C->height * C->length);
}
void output(Camel C)
{
    printf("The weight of the camel with radius: %0.1f, height: %0.1f, length: %0.1f is %f", C.radius, C.height, C.length, C.weight);
}

