/*2. Write a program to find whether the given 3 points form a triangle

***Function Declarations***
```c
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
```

***Input***
```
1 1
0 0
1 1
```

***Output***
```
The points (1.0, 1.0), (0.0, 0.0) and (1.0, 1.0) do not form a triangle
```

---*/

#include <stdio.h>
#include <math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("enter the points of first triangle :");
    scanf("%f %f",x1,y1);
    printf("enter the second points :");
    scanf("%f %f",x2,y2);
    printf("enter the third points :");
    scanf("%f %f",x3,y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
     int d1,d2,d3;
     d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
     d2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
     d3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

     if(d1+d2>d3 && d2+d3>d1 && d1+d3>d2)
     {
        return 1;
     }
     else
     {
        return 0;
     }

}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    printf("the points (x1,y1) ,(x2,x3) , (x3,y3)",x1,y1,x2,y2,x3,y3);
    if (result)
    {
        printf("forms a triangle");
    }
    else
    {
        printf("does not form a traingle");
    }
}

int main ()
{
    float x1,y1,x2,y2,x3,y3;
    int result;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;

}