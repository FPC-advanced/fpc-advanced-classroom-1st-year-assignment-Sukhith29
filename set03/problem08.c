/*8. Write a program to find the permeter of a polygon

***Function Declarations***
```c
typedef struct point {
    float x,y;
} Point;


typedef struct polygon {
    int sides;
    point p[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point(char *promt_msg);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);
```

***Input***
```
Enter the number of sides of the polygon:
4
Enter the coordinates of point 1 (x,y):
0 0
Enter the coordinates of point 2 (x,y):
1 0
Enter the coordinates of point 3 (x,y):
1 1
Enter the coordinates of point 4 (x,y):
0 1
```

***Output***
```
The perimeter of the polynomial is 4.000000
```*/


#include <stdio.h>
#include <math.h>

typedef struct point 
{
    float x, y;
}   Point;

typedef struct polygon 
{
    int sides;
    Point p[100];
    float perimeter;
} 
Polygon;

int input_n() 
{
    int sides;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &sides);
    return sides;
}

Point input_point(char *prompt_msg) 
{
    Point p;
    printf("%s", prompt_msg);
    scanf("%f %f", &p.x, &p.y);
    return p;
}

int input_polygon(Polygon *poly) {
    poly->sides = input_n();
    printf("Enter the coordinates of the polygon vertices:\n");
    
    for (int i = 0; i < poly->sides; i++) {
        printf("Enter the coordinates of point %d (x,y):\n", i + 1);
        poly->p[i] = input_point("");
    }

    return poly->sides;
}

float find_distance(Point a, Point b) {
    float dx = b.x - a.x;
    float dy = b.y - a.y;
    return sqrt(dx * dx + dy * dy);
}


void find_perimeter(Polygon *poly) {
    poly->perimeter = 0.0;

    for (int i = 0; i < poly->sides; i++) {
        int next = (i + 1) % poly->sides;  
        poly->perimeter += find_distance(poly->p[i], poly->p[next]);
    }
}

void output(Polygon poly) {
    printf("The perimeter of the polygon is %.6f\n", poly.perimeter);
}

int main() {
    Polygon myPolygon;
    input_polygon(&myPolygon);
    find_perimeter(&myPolygon);
    output(myPolygon);

    return 0;
}
