/*3. Write a program to find the `nCr` of given n and r

***Function Declarations***
```c
void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);
```

***Input***
```
6
3
```

***Output***
```
for n = 6 and r = 3, nCr = 20
```

---*/

#include <stdio.h>

void input_n_and_r(int *n, int *r) {
    printf("Enter the values for n and r: \n");
    scanf("%d %d", n, r);
}

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void output(int n, int r, int result) {
    printf("For n = %d and r = %d, nCr = %d\n", n, r, result);
}

int main() {
    int n, r;

    // Input
    input_n_and_r(&n, &r);

    // Calculate nCr
    int result = nCr(n, r);

    // Output
    output(n, r, result);

    return 0;
}
