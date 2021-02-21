#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    out=(float)((float)((b*b)/(float)4)*0.5*3.14*h)/3;


	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}