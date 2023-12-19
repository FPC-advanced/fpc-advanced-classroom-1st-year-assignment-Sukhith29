/*4. Write a program to evaluate a polynomial at a given point using [Horner's Method](https://en.wikipedia.org/wiki/Horner%27s_method#:~:text=Alternatively%2C%20Horner's%20method%20also%20refers,into%20general%20use%20around%201970.)

***Function Declarations***
```c
int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);
```

***Input***
```
1
1 1
1
```

***Output***
```
H(1, 1, 1) = 1.00 + 1.00 * 1.00^1 = 2.0000000
```

---*/
#include<stdio.h>
void input(int *num1, int *num2, int *den1, int *den2);
int gcd(int a, int b);
void add(int num1, int num2, int den1, int den2, int *res_num, int *res_den);
void output(int num1, int num2, int den1, int den2, int res_num, int res_den);
int main()
{
    int num1,num2,res_num,den1,den2,res_den;
    input(&num1,&num2,&den1,&den2); 
    add(num1,num2,den1,den2,&res_num,&res_den);
    output(num1,num2,den1,den2,res_num,res_den);
    return 0;
}
void input(int *num1, int *num2, int *den1, int *den2)
{
    printf("Enter Numerator and Denominator of Fraction-1\n");
    scanf("%d%d",num1,den1);
    printf("Enter Numerator and Denominator of Fraction-2\n");
    scanf("%d%d",num2,den2);
}
int gcd(int a, int b)
{
    int hcf=1;
    for (int i=2;(i<=a || i<=b);i++)
        {
            if ( (a%i==0) && (b%i==0) )
            {
                hcf=i;
            }
        }
        return hcf;
}
void add(int num1, int num2, int den1, int den2, int *res_num, int *res_den)
{
    int hcf;
    hcf=gcd(den1,den2);
      *res_den = (den1*den2)/hcf;
      res_num = num1(res_den/den1) + num2(*res_den/den2);
}
void output(int num1, int num2, int den1, int den2, int res_num, int res_den)
{
    int factor;
    factor=gcd(res_num,res_den);
    printf("%d/%d + %d/%d = %d/%d = %d/%d = %.2f\n",num1,den1,num2,den2,res_num,res_den,res_num/factor,res_den/factor,((res_num/factor)*1.0)/((res_den/factor)*1.0));   
}