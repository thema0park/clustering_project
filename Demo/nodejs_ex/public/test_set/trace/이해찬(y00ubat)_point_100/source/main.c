#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>

int main()
{
	int b, h;
	int out;
    long double hb;
    long double res;
    int i=0;
    int j=0;
    int k=0;
	scanf("%d %d", &b, &h);
    hb = (float)b/2;

    res = (hb*hb)*h*0.5*3.14*1/3;
    printf("%.0f\n",floor(res));


	return 0;
}