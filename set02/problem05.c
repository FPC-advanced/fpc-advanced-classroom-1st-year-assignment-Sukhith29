 /*Write a program to find GCD _(HCF)_ of two numbers.

***Function Declarations***
```c
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
```

***Input***
```
12
16
```

***Output***
```
4*/

/*#include <stdio.h>

int input()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    return n;
}

int find_gcd(int a, int b)
{
    int gcd =1;
    int i;
    for(i =1;i<=a && i<=b; i++)
    {
        if( a%i == 0 && b%i == 0 )
       {
        gcd = i;
       }
    }
 return gcd;
    
}

void output(int a, int b, int gcd)
{
    printf("the gcd of %d and %d is : %d",a,b,gcd);
}

int main()
{
    int a , b , gcd;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}*/

#include<Stdio.h>
int input(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    return n;
}

int find_gcd(int a, int b){
 
    while(a!=b){
if(a>b){
    a-=b;
}
if(b>a){b-=a;}}
   return a;
}
void output(int gcd)
{
    printf("%d",gcd);
}
int main(){
    int a =input(),b = input();
    int gcd = find_gcd(a,b);

    output(gcd);
    return 0;
}