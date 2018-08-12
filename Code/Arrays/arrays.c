#include <stdio.h>

int main(int argc, char *argv[])
{
    float numbers[5] = {1.2, 53.2, 0.7, -10, 100.4};
    for(int i = 0; i < 5; i++)
    {
        printf("%.2f\n", numbers[i]);
    }
    return 0;
}
