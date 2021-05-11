#include <stdio.h>
#include <math.h>
int main()
{
    float x, h, f, n;
    printf("--> h\n");
    scanf("%f", &h);
    printf("x                        f(x)\n");
    printf("---------------------------\n");
    n = (1.6f / h)+0.1;
    for (unsigned long int i = 0.0; i < n; i++)
    {
        x = i * h;
        if ((x >= 0.0f) && (x <= 0.6f))
            f = 1/(1+25*x*x);
        else
            f = (x+2*x*x*x*x)*sin(x*x);
        printf("%f\t %f\n", x, f);
    }
    return 0;
}
