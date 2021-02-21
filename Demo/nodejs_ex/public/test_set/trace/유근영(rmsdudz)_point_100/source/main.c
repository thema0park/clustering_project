#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define pi 3.14
int main()
{
	double r, v;
    double b, h;
    
    scanf("%lf %lf", &b, &h);
    r=b/2;
    v = 0.5*pi*r*r*h*1/3;

    printf("%d\n", (int)v);
    
	return 0;
}