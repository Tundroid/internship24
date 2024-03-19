#ifndef __MY_GEOMETRY__
#define __MY_GEOMETRY__

#include <stdio.h>

double parallelogram_area(double base, double height);
double square_area(double side);
double rectangle_area(double lenght, double width);
double triangle_area(double base, double height);
double circle_area(double radius);
double trapezoid_area(double length1, double length2, double height);
double cube_area_lateral(double side);
double cube_area_total(double side);

void showVersion(char *ver)
{
    printf("Version %s\n", ver);
}

#endif /* __MY_GEOMETRY__ */