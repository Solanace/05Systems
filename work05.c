#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_header.h"

int my_strlen(char *s) {
    int length = 0;
    while (s[length]) {
        length ++;
    }
    return length;
}

char *my_strcpy(char *dest, char *source) {
    int i = 0;
    while (source[i]) {
        dest[i] = source[i];
        i ++;
    }
    dest[i] = 0;
    return dest;
}

int main() {
    printf("Testing strlen:\n");
    char *stringA = "this string is 33 characters long";
    printf("String tested on: %s\n", stringA);
    printf("my_strlen: %d\n", my_strlen(stringA));
    
    int length = strlen(stringA);
    printf("strlen: %d\n", length);
    
    printf("\nTesting strcpy:\n");
    char dest1[40];
    char dest2[40];
    
    my_strcpy(dest1, "hello");
    printf("my_strcpy: %s\n", dest1);
    strcpy(dest1, "hello");
    printf("strcpy: %s\n", dest1);
    
    my_strcpy(dest2, dest1);
    printf("my_strcpy: %s\n", dest2);
    strcpy(dest2, dest1);
    printf("strcpy: %s\n", dest2);
    return 0;
}
