/*04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.

***Function Declarations***
```c
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
```

***Input***
```
1 2 7 8 12
```

***Output***
```
2o*/
#include <stdio.h>

int input_array_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[]) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter the elements of the array: ");
        scanf("%d", &a[i]);
    }
}

int is_composite(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i <= num; i++) {
        if (num % i == 0) {
            return 1; 
        }
    }
    return 0; 
}

int sum_composite_numbers(int n, int a[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(a[i])) {
            sum =sum + a[i];
        }
    }
    return sum;
}

void output(int sum) {
    printf("The sum of composite numbers is: %d\n", sum);
}

int main() {
    int n, sum;
    n = input_array_size();
    int a[n];
    input_array(n, a);
    sum = sum_composite_numbers(n, a);
    output(sum);
    return 0;
}






