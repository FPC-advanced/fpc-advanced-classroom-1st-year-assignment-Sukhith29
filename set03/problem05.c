/*5. Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.

***Function Declarations***
```c
int input_array_size();
void init_array(int n, int a[n];
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);
```

***Input***
```
35
```

***Output***
```
2, 3, 7, 11, 13, 19, 23, 29, 31*/
```

#include <stdio.h>

int input_array_size() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

void init_array(int n, int a[n]) {
    for (int i = 2; i <= n; i++) {
        a[i] = 1; 
    }
}

void eratosthenes_sieve(int n, int a[n]) {
    for (int i = 2; i * i <= n; i++) {
        if (a[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                a[j] = 0;
            }
        }
    }
}

void output(int n, int a[n]) {
    printf("Prime numbers between 2 and %d are: ", n);
    for (int i = 2; i <= n; i++) {
        if (a[i] == 1) {
            printf("%d, ", i);
        }
    }
    printf("\n");
}

int main() {
    int n = input_array_size();
    int a[n];

    init_array(n, a);
    eratosthenes_sieve(n, a);
    output(n, a);

    return 0;
}
