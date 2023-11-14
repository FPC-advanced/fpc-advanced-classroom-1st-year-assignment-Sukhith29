/*4. Write a program to find nth number in fibonacci sequence.

> Fibonacci Sequence is of the form: `0, 1, 1, 2, 3, 5, 8, 13, ...`

***Function Declarations***
```c
int input();
int find_fibo(int n);
void output(int n, int fibo);
```

***Input***
```
5
```

***Output***
```
fibo(5) = 5
```

---*/

#include <stdio.h>

int input()
{
    int n;
    printf("enter the length for the series:");
    scanf("%d",&n);
    return n;
}

int find_fibo(int n)
{
  int t1 =0 ,t =1,f = 0,i;
for(i=0;f!=n;i++)
  {
  f= t1+t;
  t1 = t;t =f;
  }
return (i+1);
}

void output(int n, int fibo)
{
    printf("%d is the %dth term",n,fibo);
}

int main()
{
    int n,f;
     n = input();
     f = find_fibo(n);
    output(n,f);
    return 0;
}