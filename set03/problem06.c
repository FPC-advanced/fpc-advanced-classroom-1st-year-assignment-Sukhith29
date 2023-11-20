6. Write a program to find the index of a substring of a string

***Function Declarations***
```c
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);
```

***Input***
```
helloworldhello
world
```

***Output***
```
The index of 'world' in 'helloworldhello' is 5
```

#include <stdio.h>
#include <string.h>

// Function to take input for the string and substring
void input_string(char* a, char* b) {
    printf("Enter the main string: ");
    scanf("%s", a);
    
    printf("Enter the substring: ");
    scanf("%s", b);
}

// Function to find the index of a substring in a string
int sub_str_index(char* string, char* substring) {
    int len1 = strlen(string);
    int len2 = strlen(substring);

    for (int i = 0; i <= len1 - len2; i++) {
        int j;

        // Check if the substring matches the characters in the string
        for (j = 0; j < len2; j++) {
            if (string[i + j] != substring[j]) {
                break;
            }
        }

        // If the inner loop didn't break, it means the substring is found
        if (j == len2) {
            return i;
        }
    }

    // If the substring is not found
    return -1;
}

// Function to output the result
void output(char *string, char *substring, int index) {
    if (index != -1) {
        printf("The index of '%s' in '%s' is %d\n", substring, string, index);
    } else {
        printf("'%s' not found in '%s'\n", substring, string);
    }
}

int main() {
    char main_string[100], sub_string[50];
    
    input_string(main_string, sub_string);
    
    int index = sub_str_index(main_string, sub_string);
    
    output(main_string, sub_string, index);

    return 0;
}
