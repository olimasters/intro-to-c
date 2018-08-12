#include <stdio.h>

void printNumbers(float *array, int arraySize)
{
    for(int i = 0; i < arraySize; i++)
    {
        printf("%.2f\n", array[i]);
    }
}

int main(int argc, char *argv[])
{
    float numbers[5] = {1.2, 53.2, 0.7, -10, 100.4};
    printNumbers(numbers, 5);
    return 0;
}
