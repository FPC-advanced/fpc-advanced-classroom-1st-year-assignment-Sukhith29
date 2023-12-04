/*5. Write a program to find the index of the largest number in an array

***Function Declarations***
```c
int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);
```

***Input***
```
4 2 9 1 7
```

***Output***
```
The index of the largest number in the array is 2
```

---*/

#include <stdio.h>

int input_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
}

int find_largest_index(int n, int a[n]) {
    int largestIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (a[i] > a[largestIndex]) {
            largestIndex = i;
        }
    }

    return largestIndex;
}

void output(int index) {
    printf("The index of the largest number in the array is %d\n", index);
}

int main() {
    int n;
    n = input_size();

    int array[n];
    input_array(n, array);

    int largestIndex = find_largest_index(n, array);

    output(largestIndex);

    return 0;
}
