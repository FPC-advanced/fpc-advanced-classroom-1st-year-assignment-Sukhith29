/*1. Write a program to find the distance between 2 points

***Function Declarations***
```c
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
```

***Input***
```
1 1
2 2
```

***Output***
```
The distance between point (1.0000000, 1.0000000) and (2.0000000, 2.0000000) is 1.4142
```

---*/


#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("enter the points to be measured:");
    scanf("%f %f",x1,y1);
    printf("enter the 2 points");
    scanf("%f %f",x2,y2);

}

float find_distance(float x1, float y1, float x2, float y2)
{
    float x,y,distance;
    x=pow((x2-x1),2);
    y=pow((y2-y1),2);
    distance=sqrt(x+y);
    return distance;
}

void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("the distance between (%f and %f) and (%f and %f) is (%f)",x1,y1,x2,y2,distance); 
}

int main()
{
    float x1,x2,y1,y2,distance;
    input(&x1,&y1,&x2,&y2);
    distance=find_distance();
    output(x1,y1,x2,y2,distance);
    return 0;
}
