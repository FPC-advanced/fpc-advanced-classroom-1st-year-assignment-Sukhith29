/*2. Write a program to find the smallest of three fractions

***Function Declarations***
```c
typedef struct {
    int num, den;
} Fraction;
```

***Input***
```
1 2
1 3
1 4
```

***Output***
```
The smallest of 1/2, 1/3 and 1/4 is 1/4
```

---*/

#include<stdio.h>
typedef struct {
    int num, den;
} Fraction;
Fraction input(){
    Fraction n;
    printf("input numerator");
    scanf("%d",&n.num);
    printf("input denominator");
    scanf("%d",&n.den);
    return n;
}
float calc(Fraction no){
    float frac = (float)no.num/no.den;
    return frac;
}
int main(){
Fraction a = input(),b=input(),c=input(),lg;
float f1,f2,f3;
f1 = calc(a);
f2 = calc(b);
f3 = calc(c);
if(f1>f2&&f1>f3){
lg =a;
}
if(f2>f1&&f2>f3){
    lg =b;
}
if(f3>f1&&f3>f2){
    lg = c;
}
printf("%d/%d",lg.num,lg.den);
return 0;
}