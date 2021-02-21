#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////

    out=0.5*3.14*(0.5*b)*(0.5*b)*h/3.0;

	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}