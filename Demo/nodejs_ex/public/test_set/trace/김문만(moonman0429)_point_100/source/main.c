#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    double b, h; scanf("%lf %lf", &b, &h);
    double out = 0.5*3.14*(b/2)*(b/2)*h*0.333333333;
    printf("%d\n", (int)out);
	return 0;
}