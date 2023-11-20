7. Write a program to find the length of a line

***Function Declarations***
```c
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);
```

***Input***
```
1 1
2 2
```

***Output***
```
The distance between the points (1.000000,1.000000) and (2.000000,2.000000) is 1.4142
```

---

#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

// Function to input a point
Point input_point() {
    Point p;
    printf("Enter x and y coordinates (separated by space): ");
    scanf("%f %f", &p.x, &p.y);
    return p;
}

// Function to input a line
Line input_line() {
    Line l;
    printf("Enter coordinates for point 1:\n");
    l.p1 = input_point();
    printf("Enter coordinates for point 2:\n");
    l.p2 = input_point();
    return l;
}

// Function to calculate the distance between two points
void find_length(Line *l) {
    float dx = l->p2.x - l->p1.x;
    float dy = l->p2.y - l->p1.y;
    l->distance = sqrt(dx * dx + dy * dy);
}

// Function to output the result
void output(Line l) {
    printf("The distance between the points (%.6f,%.6f) and (%.6f,%.6f) is %.4f\n",
           l.p1.x, l.p1.y, l.p2.x, l.p2.y, l.distance);
}

int main() {
    Line myLine = input_line();
    find_length(&myLine);
    output(myLine);

    return 0;
}
