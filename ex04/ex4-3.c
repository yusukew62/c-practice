#include <stdio.h>

int main()
{
    float inch = 2.54;

    int vertical = 5;
    int size = 3;
    /* Case of floating */
    // float vertical = 6.8;
    // float size = 2.3;

    printf("vertical: %d, size: %d\n", vertical, size);
    /* Case of floating */
    // print("vertical: %f, size: %f\n", vertial, size);
    printf("Area of rectangle is %f cm2\n", (vertical * size)/2.0 * inch);
    printf("Circumference of rectangle is %f cm\n", (vertical + size) * 2.0 * inch);

    return (0);
}
