#include <stdio.h>

void triple(int *number)
{
    *number *= 3;
}

int main(int argc, char *argv[])
{
    int salary = 30000;
    int *salaryPointer = &salary
    triple(salaryPointer);
    printf("%d\n", salary);
    return 0;
}
