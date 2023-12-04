/*1.  Write a program to find the distance between two points.

***Function Declarations***

```c
struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);
```

***Input***

```
1.0 1.0
2.0 2.0
```

***Output***

```
The Distance between (1.0,1.0) and (2.0,2.0) is 1.0
```

---*/

#include <stdio.h>
#include <math.h>

struct _point {
    float x;
    float y;
};

typedef struct _point Point;

Point input() {
    Point p;
    printf("Enter the coordinates of the point (x y): ");
    scanf("%f %f", &p.x, &p.y);
    return p;
}

void dist(Point a, Point b, float *res) {
    *res = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void output(Point a, Point b, float res) {
    printf("The Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.1f\n", a.x, a.y, b.x, b.y, res);
}

int main() {
    Point point1, point2;
    float distance;

    
    point1 = input();
    point2 = input();

    dist(point1, point2, &distance);

    output(point1, point2, distance);

    return 0;
}
