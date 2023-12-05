/*5.  Write a program to find borga(x) given x.

> The formula for finding borga(x) is `1 + (x^1)/3! + (x^2)/5! + (x^3)/7! + ...`. Stop when the next term is less 0.000001 using four functions.

```c
int input(int x);
float borga_X(int x);
void output(int x, float result);
```

***Input***
```
5
```

***Output***
```
borga(5) = 2.699337

```
*/
#include <stdio.h>

int input() {
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    return x;
}

float borga_X(int x) {
    float result = 1.0;
    float term = x;
    int factorial = 1;  

    for (int i = 1; term > 0.000001; ++i) {
        result += term / factorial;
        term *= x;  /
        factorial *= (2 * i) * (2 * i + 1);  
    }

    return result;
}

void output(int x, float result) {
    printf("borga(%d) = %.6f\n", x, result);
}

int main() {
    int x = input();
    float result = borga_X(x);
    output(x, result);

    return 0;
}
