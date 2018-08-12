#include <stdio.h>
#include <math.h>

int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main(int argc, char *argv[])
{
    printf("Max of 10 and 20: %d\n", max(10,20));
    return 0;
}
