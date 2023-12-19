#include stdio.h
int input ()
{
int n;
printf("enter the no of elements in an array ");
scanf("%d",&n);
return n;
}

int check_for_factorial (int n)
{
int i , fact =1;
for (i=1 ;i<n ; i++)
{
fact *=i;
if (fact ==n)
{
return 1;

}else if (fact > n)
{
return 0;
}

}
return 0;
}

void  output (int n , int isfactorial)
{
printf("the factorial of %d is", n);
if ( isfactorial ==1)
{
printf("the is the factorial")
}
else
{
printf("does not have factorial")
}
}

int main ()
{
int a, is_factorial;
a=input();
is_factorrial=check_for_factorial(a);
output(a,is_factorial);
return 0;
}
