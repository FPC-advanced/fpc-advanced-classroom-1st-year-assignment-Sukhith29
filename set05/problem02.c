/*2.  Write a program to find the weight of a camel, given height, length and stomach radius using four functions.

> `weight = pi * stomach_radius^3 * sqrt(height * length)`

***Function Declarations***

```c
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);
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
```*/

#include <stdio.h>
#include <math.h>
void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);
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
    printf("Enter the radius,height and length of the Camel:\n");
    scanf("%f %f %f", radius, height, length);
}
float find_weight(float radius, float height, float length)
{
    float weight, pi;
    pi = 3.142;
    weight = pi * radius * radius * radius * sqrt(height * length);
    return weight;
}
void output(float radius, float height, float length, float weight)
{
    printf("The weight of the camel with radius: %0.1f, height: %0.1f, length: %0.1f is %f", radius, height, length, weight);
}