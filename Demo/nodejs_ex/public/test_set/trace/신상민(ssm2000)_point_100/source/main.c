#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////

    out = (int)(0.5*3.14*((double)b/2.0)*((double)b/2.0)*(double)h*1.0/3.0);

	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}