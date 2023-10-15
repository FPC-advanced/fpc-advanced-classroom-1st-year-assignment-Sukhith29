//2. Write a C program to add two numbers.

#include <stdio.h>

int main( )
{
    int a , b , sum;
    printf("enter two numbs");
    scanf("%d %d", &a ,&b);
    
    printf("the sum of %d + %d is %d" , a , b , a + b );
    return 0;
}