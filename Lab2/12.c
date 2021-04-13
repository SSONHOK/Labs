#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    printf (" Enter x {3.15 < x} -> ");
    scanf ("%lf", &x);
    if (x > 3.15)
    {
        double y = - log(x + 2)-log(x - 2);
        double z = sqrt(3 * y - y * y * y);
        printf("y(x)=%lf\nz(y) = %lf\n", y, z);
    }
    else
        printf("x value is incorrect!\n");
    return 0;
}
