#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        fprintf(stderr, "Usage: %s <input filename> <output filename>\n", argv[0]);
        return 1;
    }

    FILE *in = fopen(argv[1], "r");
    if(in == NULL)
    {
        fprintf(stderr, "Failed to open input file %s\n", argv[1]);
        return 1;
    }
    FILE *out = fopen(argv[2], "w");
    if(out == NULL)
    {
        fprintf(stderr, "Failed to output file %s\n", argv[2]);
        return 1;
    }

    char lineBuffer[4096];
    while(fgets(lineBuffer, sizeof(lineBuffer), in))
    {
        for(size_t i = 0; lineBuffer[i] != '\0'; ++i)
            if(lineBuffer[i] == '"')
            {
                lineBuffer[i] = '\n';
                lineBuffer[i+1] = '\0';
                break;
            }
        fputs(lineBuffer, out);
    }
    fclose(in);
    fclose(out);
    return 0;
}
