
#include <stdio.h>

struct _triangle
{
    float base , altitude , area ;
};
typedef struct _triangle Triangle;

Triangle input_triangle()
{
    Triangle x;
    printf("enter the base of the triangle : ");
    scanf("%f",&x.base);
    printf("enter the altitude of the triangle : ");
    scanf("%f",&x.altitude);

}

void find_area(Triangle *t)
{
    t->area=(t->base*t->altitude)/2;
}

void output (Triangle t)
{
    printf("the area of the triangle is %f", t.base);
}

int main()
{
    Triangle t , x;
    x=input_triangle();
    find_area(&t);
    output(t);
    return 0;

}