#include <stdio.h>
#include <math.h>

struct point
{
    double x;
    double y;
};

double size(struct point *vector)
{
    return sqrt(vector->x * vector->x + vector->y * vector->y );
}

double distance(struct point *a, struct point *b)
{
    struct point difference;
    difference.x = a->x - b->x;
    difference.y = a->y - b->y;
    return size(&difference);
}

int main(int argc, char *argv[])
{
    struct point a = {1, 5};
    struct point b = {4, 1};
    printf("%.2f\n", distance(&a, &b));
    return 0;
}
