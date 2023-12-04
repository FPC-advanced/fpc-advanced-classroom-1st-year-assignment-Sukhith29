/*7. Write a program to add two fractions

***Function Declarations***
```c
typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2)
void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum)
```

***Input***
```
9 6
5 6
```

***Output***
```
9/6 + 5/6 = 7/3
```

---*/

#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction() {
    Fraction f;
    printf("Enter the numerator and denominator of the fraction: ");
    scanf("%d %d", &f.num, &f.den);
    return f;
}

int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fraction add_fractions(Fraction f1, Fraction f2) {
    Fraction sum;
    sum.num = f1.num * f2.den + f2.num * f1.den;
    sum.den = f1.den * f2.den;

    int gcd = find_gcd(sum.num, sum.den);

    sum.num /= gcd;
    sum.den /= gcd;

    return sum;
}

void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum) {
    printf("%d/%d + %d/%d = %d/%d\n", f1.num, f1.den, f2.num, f2.den, sum.num, sum.den);
}

int main() {
    Fraction fraction1, fraction2, sum;

    // Input
    fraction1 = input_fraction();
    fraction2 = input_fraction();

    // Add fractions
    sum = add_fractions(fraction1, fraction2);

    // Output
    output(fraction1, fraction2, sum);

    return 0;
}
