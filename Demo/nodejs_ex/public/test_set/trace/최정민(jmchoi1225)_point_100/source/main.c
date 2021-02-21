#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define PI 3.14

int main()
{
	int b, h;
	int out;
    float tmp;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    tmp = (0.125)*PI*(b)*(b)*h*(0.3333333333);
    out = tmp;

	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}