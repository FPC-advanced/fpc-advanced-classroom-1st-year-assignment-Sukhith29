#include <stdio.h>

int input ()
{
    int x;
    printf("enter the number : ");
    scanf("%d",&x);
    return x;
}

int add(int a,int b)
{
    int sum ;
    sum =a+b;
    return sum;
}

void output(int a,int b ,int c)
{
    printf("the sum of %d +%d is %d",a ,b ,c);
}



int main(void)
{
    int a,b,c;
    a=input();
    b=input();
    c=add (a,b);
    output (a,b,c);
    return c;
}