#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	float out;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    out = 3.14*(b*b*h/24);


	////////////////////////////////////////

	printf("%.f\n", out);

	return 0;
}