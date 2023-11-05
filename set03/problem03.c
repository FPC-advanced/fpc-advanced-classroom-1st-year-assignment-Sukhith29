/*3. Write a program to check if the given number is prime

***Function Declarations***
```c
int input_number();
int is_prime(int n);
void output(int n, int result);
```

***Input***
```
3
```

***Output***
```
3 is a prime number
```*/

#include <stdio.h>

int input_number()
{
    int n;
    printf("enter the number to be checked :");
    scanf("%d",&n);
    return n;
}

int is_prime(int n)
{
    int a[n];
    for (int i=0;i<n;i++)
    {
        if(n % i ==0)
        {
            return 0;
        }
    }
    return 1;
}

void output(int n, int result)
{
    printf("the number %d is ",n);
    if (result)
    {
        printf("a prime number");
    }
    else
    {
        printf("is not a prime number");
    }
}

int main()
{
    int n,result ;
    n=input_number();
    result=is_prime(n);
    output(n,result);
    return 0;

}


