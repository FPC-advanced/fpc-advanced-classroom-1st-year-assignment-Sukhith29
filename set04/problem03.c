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

unsigned long long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        unsigned long long result = 1;
        for (int i = 2; i <= num; ++i) {
            result *= i;
        }
        return result;
    }
}

unsigned long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void output(int n, int r, unsigned long long result) {
    printf("For n = %d and r = %d, nCr = %llu\n", n, r, result);
}

int main() {
    int n, r;

    input_n_and_r(&n, &r);

    unsigned long long result = nCr(n, r);

    output(n, r, result);

    return 0;
}
