/*Write a program to find the triangle with smallest area in n given triangles.

***Function Declarations***
```c
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
```

***Input***
```
2 3
4 6
```

***Output***
```
The smallest triangle out of triangles with base and height (2,3) , (4,6) is the triangle having base 2.00, height 3.00 and area 3.00
```*/

#include <stdio.h>

struct _triangle {
	float base, altitude, area;
};
typedef struct _triangle Triangle;

int input_n()
{
    int n ;
    printf("enter the array of triangles :");
    scanf("%d",&n);
    return n;
}

Triangle input_triangle()
{
    Triangle x;
    printf("enter the base of the triangle :");
    scanf("%f",&x.base);
    printf("enter the altitude of the triangle :");
    scanf("%f",&x.altitude);
    return x;
}

void input_n_triangles(int n, Triangle t[n])
{
    int i;
    for(i=0;i<n;i++)
    {
       t[i]= input_triangle();
    }

}

void find_area(Triangle *t)
{
    t->area = (t->base * t->altitude)/2;
}

void find_n_areas(int n, Triangle t[n])
{
    int i;
    int sum=0.0;
    for(i=0;i<n;i++)
    {
        sum = sum + find_area(t[i]);

    }
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
    int i;
    Triangle smallest =t[0];
    for (i=1;i<n;i++)
    {
        if (t[i].area < smallest.area)
        {
            smallest =t[i];
        }
    }
    return smallest;
}

void output(int n, Triangle t[n], Triangle smallest)
{
    printf("triangle with the smallest area with base %f, altitude %f and area is %f "smallest.base ,smallest.altitude , smallest.area);
}

int main()
{
    int n ;
    n=input_n();
    Triangle triangles[n];
    input_n_triangle(n.triangles);
    find_n_areas(n,triangles);
    Triangle s,allest =find_smallest_triangle(n,triangles);
    output(n,triangles , smallest );
    return 0;

}