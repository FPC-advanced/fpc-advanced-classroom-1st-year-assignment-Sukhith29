/*1. Write a program to find sum of two fractions

***Function Declarations***
```c
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);
```

***Input***
```
1 4
1 2
```

***Output***
```
1/2 + 1/4 = 3/4
```

---*/
#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2){
    printf("enter the first fraction");
    scanf("%d %d",num1,den1);
      printf("enter the second fraction");
    scanf("%d %d",num2,den2);
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den){
    if(den1!=den2){
        num1 *=den2;
        num2 *=den1;
        *res_num = num1 + num2;
       *res_den = den1*den2;
}
else{
    *res_num = num1 + num2;
     *res_den = den1;
}
 
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den){
    printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,res_num,res_den);
    
}
int main(){
    int n1,d1,n2,d2,resn,resd;
    input(&n1,&d1,&n2,&d2);
    add(n1,d1,n2,d2,&resn,&resd);
    output(n1,d1,n2,d2,resn,resd);
   return 0;
}