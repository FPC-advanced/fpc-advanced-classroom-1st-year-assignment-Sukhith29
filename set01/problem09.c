#include <stdio.h>
#include <math.h>

float input()
{
    float x;
    printf("enter a number ; ");
    scanf("%f",&x);
    return x;
}
float mysqrt(float x)
{
    while(x>0)
    {
        float r=sqrt(x);
    return r;    
    }
}
void output(float x , float root)
{
    printf("sqrt of %f is %f",x,root);

}
int main(void)
{
    float n,root;
    n=input();
    root=mysqrt(n);
    output(n,root);
}