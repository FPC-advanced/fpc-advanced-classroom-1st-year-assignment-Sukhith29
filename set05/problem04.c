/*
4.  Write a program to find out the mood of a Camel.

Camel is:
 - sick when its `stomach_radius` is less than `height` and less than `length`
 - happy when its `height` is less than `length` and less than `stomach_radius`.
 - tense when its `length` is less than `height` and `stomach_radius`.

***Function Declarations***

```c
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length)
void output(float radius, float height, float length, int mood);
```

***Input***
```
5
2
4
```

***Output***
```
The Camel is Happy
```*/

#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length) {
    printf("Enter the stomach radius, height, and length of the camel: ");
    scanf("%f %f %f", radius, height, length);
}

int find_mood(float radius, float height, float length) {
    if (radius < height && radius < length) return 0; // Sick
    if (height < length && height < radius) return 1; // Happy
    if (length < height && length < radius) return 2; // Tense
    return -1; // Unknown mood
}

void output(int mood) {
    const char *moodStrings[] = {"Sick", "Happy", "Tense", "Unknown"};
    printf("The Camel is %s\n", moodStrings[mood + 1]);
}

int main() {
    float radius, height, length;

    // Input
    input_camel_details(&radius, &height, &length);

    // Determine mood and output
    output(find_mood(radius, height, length));

    return 0;
}
