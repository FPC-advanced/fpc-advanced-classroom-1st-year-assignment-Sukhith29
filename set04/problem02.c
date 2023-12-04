/*2. Write a program to find the smallest of three fractions

***Function Declarations***
```c
typedef struct {
    int num, den;
} Fraction;
```

***Input***
```
1 2
1 3
1 4
```

***Output***
```
The smallest of 1/2, 1/3 and 1/4 is 1/4
```

---*/

#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction findSmallestFraction(Fraction fractions[3]) {
    Fraction smallest = fractions[0];

    for (int i = 1; i < 3; ++i) {
        int product1 = smallest.num * fractions[i].den;
        int product2 = fractions[i].num * smallest.den;

        if (product1 * fractions[i].den > product2 * smallest.den) {
            smallest = fractions[i];
        }
    }

    return smallest;
}

int main() {
    Fraction fractions[3];

    printf("Enter three fractions (numerator denominator for each): \n");
    for (int i = 0; i < 3; ++i) {
        scanf("%d %d", &fractions[i].num, &fractions[i].den);
    }

    Fraction smallest = findSmallestFraction(fractions);

    printf("The smallest of %d/%d, %d/%d, and %d/%d
