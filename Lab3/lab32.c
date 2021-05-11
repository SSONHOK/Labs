#include <stdio.h>
#include <math.h>
int main()
{
    float x, h, f;
    unsigned long int i, n;
    printf("--> h\n");
    scanf("%f", &h);
    printf("x f(x)\n");
    printf("---------------------------\n");
    n = (1.6f / h) + 0.01;
    i = 0;
    x = 0;
    do
    {
      if ((x >= 0.0f) && (x <= 0.6f))
          f = 1/(1+25*x*x);
        else
          f = (x+2*x*x*x*x)*sin(x*x);
        x = i * h;
        i = i + 1;
        printf("%f %f\n", x, f);
    }
    while (i <= n);
    return 0;
}
