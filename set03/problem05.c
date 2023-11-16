5. Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.

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
2, 3, 7, 11, 13, 19, 23, 29, 31
```

#include <stdio.h>
int input_array_size()
{
    int n ;
    printf("enter the size of the array :");
    scanf("%d",&n);
    return n;
}

void init_array(int n, int a[n])
{
    int i;
    for(i=0;i<=n;i++)
    {
        printf("enter the element of the array :");
        scanf("")
    }
}