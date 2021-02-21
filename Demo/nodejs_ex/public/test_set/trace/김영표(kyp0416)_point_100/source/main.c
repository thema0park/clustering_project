#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define PI 3.14

int main()
{
	int b, h;
    double r, h_d, result;
	int out;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////

    r = (double)b/2;
    h_d = (double)h;
    out = (0.5*3.14*r*r*h_d/3);
	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}