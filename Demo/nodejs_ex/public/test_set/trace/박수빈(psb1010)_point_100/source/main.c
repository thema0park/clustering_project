#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    double t;
    t=b*b*h*314/2400;
    out=(int)t;
	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}