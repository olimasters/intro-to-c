#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    printf("Square numbers below 100:\n");
    for(int i = 0; i < 100; i++)
    {
        int squareRoot = sqrt(i);
        if(squareRoot * squareRoot == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
