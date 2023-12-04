/*
6.  Write a program to find the average of all the odd elements in an array

***Function Declarations***
```c
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);
```

***Input***
```
5
5 4 3 8 0
```

***Output***
```
Average of all the odd elements is: 4
```
*/

#include <stdio.h>

int input_n() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input(int n, int a[n]) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
}

float odd_average(int n, int a[n]) {
    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 != 0) {
            sum += a[i];
            count++;
        }
    }

    if (count == 0) {
        return 0.0; 
    }

    return (float)sum / count;
}

void output(float avg) {
    printf("Average of all the odd elements is: %.2f\n", avg);
}

int main() {
    int n = input_n();
    int array[n];

    input(n, array);

    float average = odd_average(n, array);

    output(average);

    return 0;
}
