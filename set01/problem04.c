
#include <stdio.h>
void input(int *pa, int *pb)
{
    printf("Enter two numbers\n");
    scanf("%d%d",pa,pb); 		
}

void add(int a, int b, int *sum)
{
    *sum = a+b;
}
void output(int a, int b, int c)
{
    printf("Sum of %d + %d is %d\n",a,b,c);
}
int main()
{
    int a,b,c;
    input(&a,&b);
    add(a,b,&c);
    output(a,b,c);
    return 0;
}
