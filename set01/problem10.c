#include<stdio.h>
void  input_two_strings(char *string1[100],char *string2[100]);
void check(char string1[100],char string2[100],char *out[100]);
void outp(char out[100]);

void  input_two_strings(char *string1[100],char *string2[100]){
printf("enter the 1st word ");
scanf("%s",string1);
printf("enter the 1st word ");
scanf("%s",string2);
}
void check(char string1[100],char string2[100],char *out[100])
{
    int i;
    for(i=0;string1[i]!='\0'&&string2[i]!='\0';i++)
    {
     if(string1[i]>string2[i]){
       *out =&string1;
      }
      else if(string2[i]>string1[i]){
        *out =&string2;
       }
    
    
      }
}
void outp(char out[100]){ 
    printf("%s",out);
}
int main(){
    char string1[100],string2[100],out[100];
    input_two_strings(&string1,&string2);
    check(string1,string2,&out);
    outp(out);
    return 0;

}