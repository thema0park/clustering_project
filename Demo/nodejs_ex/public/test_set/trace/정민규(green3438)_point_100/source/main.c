#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    float pi = 3.14;
    float dirt;
    dirt = 0.5 * 3.14 * (b / 2.0) * (b / 2.0) * h / 3.0;
    out = dirt;
	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}