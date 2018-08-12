#include <stdio.h>

unsigned long msb(unsigned long num)
{
    if(num == 0)
        return num;
    unsigned long i;
    for(i = (~0LU >> 1) + 1; !(i & num); i >>= 1);
    return i;
}

unsigned long powMod(unsigned long base, unsigned long exponent, unsigned long mod)
{
    unsigned long exponentmsb = msb(exponent);
    unsigned long powers = base;
    unsigned long result = 1;
    for(unsigned long mask = 1; !((mask >> 1) & exponentmsb); mask <<= 1)
    {
        if(exponent & mask)
            result = (result * powers) % mod;
        powers = (powers * powers) % mod;
    }
    return result;
}

int main(int argc, char *argv[])
{
    char lineBuffer[100];
    unsigned long base, exponent, mod;
    while(fgets(lineBuffer, 99, stdin) != NULL)
    {
        sscanf(lineBuffer, "%lu %lu %lu", &base, &exponent, &mod);
        printf("%lu\n", powMod(base, exponent, mod));
    }
    //printf("%lu\n",powMod(100924, 36591673, 12309134));
    return 0;
}
