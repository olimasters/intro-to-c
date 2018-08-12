#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *word)
{
    int length = strlen(word);
    for(int i = 0; i < length/2; i++)
    {
        if(word[i] != word[length-1-i])
            return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    int number = 100 + 1;
    char string[50];
    sprintf(string, "abc%dcba", number);
    if(isPalindrome(string))
        printf("%s is a palindrome!\n", string);
    else
        printf("%s is not a palindrome!\n", string);
}
