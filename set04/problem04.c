/*4. Write a program to evaluate a polynomial at a given point using [Horner's Method](https://en.wikipedia.org/wiki/Horner%27s_method#:~:text=Alternatively%2C%20Horner's%20method%20also%20refers,into%20general%20use%20around%201970.)

***Function Declarations***
```c
int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);
```

***Input***
```
1
1 1
1
```

***Output***
```
H(1, 1, 1) = 1.00 + 1.00 * 1.00^1 = 2.0000000
```

---*/
#include <stdio.h>

int input_degree() {
    int n;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &n);
    return n;
}

void input_coefficients(int n, float a[n]) {
    printf("Enter the coefficients of the polynomial (from highest degree to constant term):\n");
    for (int i = n; i >= 0; --i) {
        printf("Coefficient of x^%d: ", i);
        scanf("%f", &a[i]);
    }
}

float input_x() {
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    return x;
}

float evaluate_polynomial(int n, float a[n], float x) {
    float result = a[0];
    
    for (int i = 1; i <= n; ++i) {
        result = result * x + a[i];
    }
    
    return result;
}

void output(int n, float a[n], float x, float result) {
    printf("H(%d, %d, %.2f) = %.2f", n, n, x, a[0]);
    
    for (int i = 1; i <= n; ++i) {
        printf(" + %.2f * %.2f^%d", a[i], x, i);
    }

    printf(" = %.7f\n", result);
}

int main() {
    int n;
    n = input_degree();

    float coefficients[n + 1];
    input_coefficients(n, coefficients);

    float x;
    x = input_x();

    float result = evaluate_polynomial(n, coefficients, x);

    output(n, coefficients, x, result);

    return 0;
}
