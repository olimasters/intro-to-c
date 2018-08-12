#include <stdio.h>

int main(int argc, char *argv[])
{
    int distanceInKm = 500;
    float timeInSeconds = 13231.5;
    const int hourInSeconds = 3600;
    float timeInHours;
    double averageSpeed;

    // Implicit type conversions
    timeInHours = timeInSeconds / hourInSeconds;
    averageSpeed = distanceInKm / timeInHours;

    printf("Average speed: %.2f km/h\n", averageSpeed);

    return 0;
}
