<<<<<<< HEAD
#include <stdio.h>
int input()
{
    int x;
    printf("enter number ");
    scanf("%d",&x);
    return x;
}
int compare(int a,int b,int c)
{
    int z= (a > b) ? a : b;
    int w= (z > c) ? z : c;
    printf("the largest no is %d",w);
    return w;

}
int main(void)
{
    int a,b,c,d;
    a=input();
    b=input();
    c=input();
    d=compare(a,b,c);
    return d;
}
=======

>>>>>>> cae1c3b01a4b1a4b9c35570ca243ae75415f88a3
