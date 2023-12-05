#include <stdio.h>
void input_string(char *a, char *b);
int sub_str_index(char *string, char *substring);
void output(char *string, char *substring, int index);
int main()
{
    char string[100], substring[100];
    int index;
    input_string(&string, &substring);
    index = sub_str_index(&string, &substring);
    output(string, substring, index);
    return 0;
}
void input_string(char *a, char *b)
{
    printf("Enter a string:\n");
    scanf(" %s", a);
    printf("Enter a substring to find:\n");
    scanf(" %s", b);
}
int sub_str_index(char *string, char *substring)
{
    int i, j;
    for (i = 0; string[i] != '\0'; i++)
    {
        for (j = 0; substring[j] != '\0' && string[i + j] == substring[j]; j++)
            ;
        if (substring[j] == string[i + j])
        {
            return j;
        }
    }
    return -1;
}
void output(char *string, char *substring, int index)
{
    if (index != -1)
    {
        printf("The index of %s in %s is %d\n", substring, string, index);
    }
    else
    {
        printf(" %s is  not a substring of %s", substring, string);
    }
}