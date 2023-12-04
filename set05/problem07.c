/*7.  Write a program to find out if the name of the camel is a nice name.

> A camel has a nice name if it has at least 2 vowels and 2 consonants in it

***Function Declarations***
```c
void input(char *name);
int has_nice_name(char *c);
void output(int res);
```

***Input***
```
Conky
```

***Output***
```
The camel does not have a nice name
```

*/

#include <stdio.h>
#include <ctype.h>

void input(char *name) {
    printf("Enter the name of the camel: ");
    scanf("%s", name);
}

int is_vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int has_nice_name(char *name) {
    int vowelCount = 0;
    int consonantCount = 0;

    for (int i = 0; name[i] != '\0'; ++i) {
        if (isalpha(name[i])) {
            if (is_vowel(name[i])) {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }

    return (vowelCount >= 2 && consonantCount >= 2);
}

void output(int res) {
    if (res) {
        printf("The camel has a nice name\n");
    } else {
        printf("The camel does not have a nice name\n");
    }
}

int main() {
    char name[50];

    // Input
    input(name);

    // Check if the name is nice
    int result = has_nice_name(name);

    // Output
    output(result);

    return 0;
}
