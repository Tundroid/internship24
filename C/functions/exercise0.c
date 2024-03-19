#include <stdio.h>
#include "./math/geometry/geometry.h"

int main()
{
    double base, height;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter height: ");
    scanf("%lf", &height);
    printf("Area of parallelogram: %0.2lf\n", parallelogram_area(base, height));

    printf("Enter size: ");
    scanf("%lf", &base);
    printf("Area of square: %0.2lf\n", square_area(base));
}