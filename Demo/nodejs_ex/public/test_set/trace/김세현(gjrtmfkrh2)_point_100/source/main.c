#include <stdio.h>

int main()
{
    double b, h, result;
    scanf("%lf %lf", &b, &h);
    result = (b/2) * (b/2) * h * 3.14 * 0.5 * 0.3333333333333333333;
    printf("%d\n", (int)(result));

    return 0;
}