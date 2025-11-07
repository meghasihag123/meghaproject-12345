#include <stdio.h>
#include <math.h> // use headerfile
int main()
{
    // 1. sqrt function
    /* int a;
     printf("Enter value of a ");
     scanf("%d", &a);

     int j = sqrt(a);
     printf("square root = %d", j);*/

    // 2. pow(a,b) function
    /*int a, b;
    printf("Enter value of a ");
    scanf("%d", &a);
    printf("Enter value of b ");
    scanf("%d", &b);

    int j = pow(a, b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("power = %d\n", j);*/

    // 3. exp function
    // SYNTAX : double exp(double x)
    /*double a;
    printf("Enter the value ");
    scanf("%lf", &a);
    double j;
    j = exp(a); // e raised to the power of argument x . (here a) // e=2.71828
    printf("a = %.2lf\n", a);
    printf("exponent value = %.2lf\n", j);*/

    // 4. sin function
    /*double angle; // ANGLE IN RADIANS (angle = 2.3)
    printf("Enter the angle ");
    scanf("%lf",&angle); // letter l

    double j = sin(angle); // ANGLE IN RADIANS
    printf("%.2lf", j);*/

    // Angle Conversion: The sin function requires the angle in radians.
    // The conversion from degrees to radians is done using the formula: $$\text{radians} = \text{degrees} \times \frac{\pi}{180}$$
    // M_PI: This constant is defined in <math.h> and represents the value of π (pi).
    // Output: The program calculates and prints the sine of the given angle.

    // sin (angle conversion)
    /* double angle_degrees;
     printf("Enter angle in degrees ");
     scanf("%lf", &angle_degrees);
     double pi = 3.141592653589793;

     double angle_radians = angle_degrees * (pi / 180); // CONVERT DEGREES TO RADIANS

     double sin_value = sin(angle_radians);

     printf("The sine of %.2lf is : %.2lf\n", angle_degrees, sin_value);*/

    // cos function
    /*double angle_degrees;
    printf("Enter angle in degrees ");
    scanf("%lf", &angle_degrees);
    double pi = 3.141592653589793;

    double angle_radians = angle_degrees * (pi / 180); // CONVERT DEGREES TO RADIANS

    double cos_value = cos(angle_radians);

    printf("The cosine of %.2lf degrees is : %.2lf\n", angle_degrees,cos_value);*/

    return 0;
}