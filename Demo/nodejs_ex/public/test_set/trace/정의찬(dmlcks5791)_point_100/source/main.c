#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;
    double bb;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    bb = b / 2.0;
    out = (int)(0.5 * 3.14 * bb * bb * h) / 3;


	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}