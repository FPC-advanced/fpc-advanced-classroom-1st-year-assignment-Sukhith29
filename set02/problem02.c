 /*Write a program to find if a triangle is scalene.

> A triangle is scalene if all the three sides of the triangle are not equal to one another

***Function Declarations***
```c
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);*/

#include <stdio.h>

int input_side() {
    int n;
    printf("Enter the side of the triangle: ");
    scanf("%d", &n);
    return n;
}

int check_scalene(int a, int b, int c) {
    if (a != b && a != c && b != c) {
        return 1;  // Indicates it's a scalene triangle
    } else {
        return 0;  // Indicates it's not a scalene triangle
    }
}

void output(int a, int b, int c, int isscalene) {
    printf("The sides %d and %d and %d ", a, b, c);
    if (isscalene) {
        printf("form a scalene triangle.\n");
    } else {
        printf("do not form a scalene triangle.\n");
    }
}

int main() {
    int a, b, c, isscalene;
    a = input_side();
    b = input_side();
    c = input_side();
    isscalene = check_scalene(a, b, c);
    output(a, b, c, isscalene);
    return 0;
}
