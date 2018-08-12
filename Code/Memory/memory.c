#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 128

char **readStrings(int numberOfStrings)
{
    char **strings = malloc(numberOfStrings * sizeof(char *));
    for(int i = 0; i < numberOfStrings; i++)
    {
        strings[i] = malloc(MAX * sizeof(char));
        fgets(strings[i], MAX, stdin);
    }
    return strings;
}

int compareStrings(const void *a, const void *b)
{
    return strcmp(*(const char **)a, *(const char **)b);
}

void printStrings(char **strings, int numberOfStrings)
{
    for(int i = 0; i < numberOfStrings; i++)
        printf(strings[i]);
}

void freeStringArray(char **strings, int numberOfStrings)
{
    for(int i = 0; i < numberOfStrings; i++)
        free(strings[i]);
}

int main(int argc, char *argv[])
{
    int numberOfStrings;
    scanf("%d", &numberOfStrings);
    getchar(); // Clear newline from input buffer
    char **strings = readStrings(numberOfStrings);
    qsort(strings, numberOfStrings, sizeof(char *), compareStrings);
    printStrings(strings, numberOfStrings);
    freeStringArray(strings, numberOfStrings);
    free(strings);
    return 0;
}
