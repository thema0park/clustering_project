#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	double out;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    out = (0.5)*3.14*((double)b/2.0)*((double)b/2.0)*(double)h/3;


	////////////////////////////////////////

	printf("%d\n", (int)out);

	return 0;
}