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
	


#include<stdio.h>
void inputs(char *a){
    printf("enter a word");
    scanf("%s",a);
}
void reverse(char *a,char *b)
{
  
    int i,j = 0,n;
    for(i=0;a[i]!='\0';i++);n =i;
  for (i=n-1;a[i+1]!=a[0];i--)
  {
   *(b+j) = *(a+i);  j++;
  }
  *(b+j) = '\0';
 }
void out(char *a){
    printf("%s",a);
}
int main()
{
    char str[100],str1[100];
    inputs(str);
    reverse(str,str1);out(str1);
    return 0;
}





