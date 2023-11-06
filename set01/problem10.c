#include<stdio.h>

void input_strings(char *string1, char *string2)
{
    printf("Enter the two strings-\n");
    scanf("%s%s",string1,string2);
}
int stringcompare(char *string1, char *string2)
{
    int result;
    while(*string1 !='\0'&&*string2 !='\0')
    {
        if (*string1 != *string2)
        {
         return *string1 - *string2;
    }
    *string1++;
    *string2++;
}
return *string1 - *string2;
}
void output(char *string1, char *string2, int result)
{
    if(result==0)
    {
        printf("They are equal");
    }
    else if(result<0)

    {
        printf("string 2-%s greater than string 1-%s",string2,string1);}
    
    else if(result>0)
    {
        printf("string1-%s is greater than string2-%s",string1,string2);
    }
}
int main()
{
     char str1[100] ;
    char str2[100] ;
    input_strings(str1, str2);
    int result = stringcompare(str1, str2);
     output(str1, str2, result);
     return 0;
}