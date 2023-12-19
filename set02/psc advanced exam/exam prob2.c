#include <stdio.h>

int input() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);	
    return n;
}

int check_factorial(int n) {
    int i, fact = 1;
    for (i = 1; i <= n; i++) {
        fact *= i;
        if (fact == n) {
            return 1; 
        } else if (fact > n) {
            return 0; 
        }
    }
    return 0; 
}

void array_elements(int n, int a[]) {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void find_factorials(int n, int a[], int result[], int *count) {
    *count = 0; 

    for (int i = 0; i < n; i++) {
        if (check_factorial(a[i])) {
            result[*count] = a[i];
            (*count)++;
        }
    }
}

void output(int result[], int count) {
    printf("Factorial numbers in the array are: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main() {
    int n = input(); 
    int array[n], result[n], count;

    array_elements(n, array); 

    find_factorials(n, array, result, &count); 
    output(result, count); 

    return 0;
}
