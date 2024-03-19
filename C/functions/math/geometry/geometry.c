#define VERSION "1.0"

/**
 * parallelogram_area - calculates the area of a parallelogram
 * @base: base of the parallelogram
 * @height: height of the parallelogram
 * 
 * Return: double, area of the parallelogram
*/
double parallelogram_area(double base, double height)
{
    showVersion(VERSION);
    return base * height;
}

/**
 * square_area - calculates the area of a square
 * @side: size of the square
 * 
 * Return: double, area of the square
*/
double square_area(double side)
{
    showVersion(VERSION);
    return side * side;
}