#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 0;
    printf("Even natural numbers below 20:\n");
    while(a < 20)
    {
        printf("%d\n", a);
        a += 2;
    }
    return 0;
}
