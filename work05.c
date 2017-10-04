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

char *my_strncat(char *dest, char *source, int n) {
    int i = 0;
    while (dest[i]) {
        i ++;
    }
    int j = 0;
    while (j < n) {
        dest[i] = source[j];
        i ++;
        j ++;
    }
    dest[i] = 0;
    return dest;
}

int my_strcmp(char *s1, char *s2) {
    int i = 0;
    while (s1[i] && s2[i]) {
        if (s1[i] - s2[i]) {
            return s1[i] - s2[i];
        }
        i ++;
    }
    return s1[i] - s2[i];
}

char *my_strchr(char *s, char c) {
    int i = 0;
    while (s[i]) {
        if (s[i] == c) {
            return s + i;
        }
        i ++;
    }
    return 0;
}

int main() {
    printf("Testing strlen:\n");
    char *s1 = "this string is 33 characters long";
    printf("String tested on: \"%s\"\n", s1);
    printf("my_strlen: %d\n", my_strlen(s1));
    
    int length = strlen(s1);
    printf("strlen:    %d\n", length);
    
    printf("\nTesting strcpy:\n");
    char *s2 = "hello";
    printf("String tested on: \"%s\"\n", s2);
    char dest1[40];
    char dest2[40];
    
    my_strcpy(dest1, s2);
    printf("my_strcpy: %s\n", dest1);
    strcpy(dest1, s2);
    printf("strcpy:    %s\n", dest1);
    
    printf("\nTesting strncat:\n");
    char s3[10] = "Tomato";
    char *s4 = "es";
    printf("Strings tested on: \"%s\" and \"%s\"\n", s3, s4);
    char s10[10] = "Tomato";
    my_strncat(s3, s4, 2);
    printf("my_strncat: %s\n", s3);
    strncat(s10, s4, 2);
    printf("strncat:    %s\n", s10);
    
    printf("\nTesting strcmp:\n");
    char *s5 = "apples";
    char *s6 = "applesB";
    
    printf("Comparing \"%s\" and \"%s\"\n", s5, s6);
    printf("my_strcmp: %d\n", my_strcmp(s5, s6));
    printf("strcmp:    %d\n", strcmp(s5, s6));
    printf("Comparing \"%s\" and \"%s\"\n", s6, s5);
    printf("my_strcmp: %d\n", my_strcmp(s6, s5));
    printf("strcmp:    %d\n", strcmp(s6, s5));
    printf("Comparing \"%s\" and \"%s\"\n", s5, s5);
    printf("my_strcmp: %d\n", my_strcmp(s5, s5));
    printf("strcmp:    %d\n", strcmp(s5, s5));
    
    printf("\nTesting strchr:\n");
    char *s7 = "pineapple";
    char c = 'e';
    
    printf("Finding \'%c\' in \"%s\"\n", c, s7);
    printf("my_strchr: %s\n", my_strchr(s7, c));
    printf("strchr:    %s\n", strchr(s7, c));
    return 0;
}
