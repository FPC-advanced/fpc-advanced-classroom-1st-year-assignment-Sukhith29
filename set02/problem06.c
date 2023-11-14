/*Write a program to reverse a string.

***Function Declarations***
```c
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
```

***Input***
```
hello
```

***Output***
```
olleh
```

#include <stdio.h>

void input_string(char *a)
{
    printf("enter the string which you want to reverse");
    scanf("%s",a);
}

void str_reverse(char *str, char *rev_str)
{
    
}*/

/*#include<stdio.h>
void input_string(char *a)
{
printf("enter the string ");
scanf("%s",a);
}
void str_reverse(char *str, char *rev_str)
{
int n,i,j=0;
for(i =0;str[i]!='\0';i++);n =i;
for(i =n;i<=0;--i,j++){
rev_str[j] = str[i];
}

}
void output( char *str){
printf("%s",str);

}

int main(){
  char str[100],rev[100];
  input_string(str);
  str_reverse(str,rev);
  output(rev);
  return 0;
}*/
	


#include <stdio.h>

void input_string(char *a);
void str_reverse(char *str,char *str_rev);
void output(char *a,char *reverse_a);

int main() {
    char z[50];
    char y[50];
    input_string(z);
    str_reverse(z, y);
    output(z, y);
    return 0;
}
void input_string(char *a) {
    printf("Enter a string: ");
    gets(a);  
}
void str_reverse(char *str, char *str_rev) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
    for (int i = 0; i < length; i++) {
        str_rev[i] = str[length - 1 - i];
    }
    str_rev[length] = '\0';  
}
void output(char *a, char *reverse_a) {
    printf(" The original string you entered: %s\n", a);
    printf(" The string when reversed : %s\n", reverse_a);
}









