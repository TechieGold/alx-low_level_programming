#include "main.h"

char *_strstr(char *haystack, char *needle) {
    if (*needle == '\0') {
        return haystack; // Empty needle matches at the beginning of any haystack
    }

    while (*haystack != '\0') {
        char *haystack_ptr = haystack;
        char *needle_ptr = needle;

        while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr) {
            haystack_ptr++;
            needle_ptr++;
        }

        if (*needle_ptr == '\0') {
            return haystack; // Substring found
        }

        haystack++;
    }

    return NULL; // Substring not found
}

