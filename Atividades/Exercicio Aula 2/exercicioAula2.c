#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    float x = rand() % (100 - 1 + 1) + 1;
    float y = rand() % (100 - 1 + 1) + 1;
    float z = rand() % (100 - 1 + 1) + 1;
    printf(" x = %.2f", x);
    printf ("\n y = %.2f", y);
    printf ("\n z = %.2f", z);
    printf("\n x + y = %.2f", x + y);
    printf("\n x - y = %.2f", x - y);
    printf("\n x * y = %.2f", x * y);
    printf("\n x / y = %.4f", x / y);
    printf("\n x %% y = %i", (int)x % (int)y);
    printf("\n x * y + z = %.2f", x * y + z);
    printf("\n x * (y + z) = %.2f", x * (y + z));
    printf("\n x / y + z = %.2f", x / y + z);
    printf("\n x / (y + z) = %.2f", x / (y + z));
    printf("\n x * y / z = %.4f", x * y / z);
    printf("\n x / y * z = %.4f", x / y * z);
    printf("\n x * (y / z) = %.4f", x * (y / z));
    
    return 0;
}