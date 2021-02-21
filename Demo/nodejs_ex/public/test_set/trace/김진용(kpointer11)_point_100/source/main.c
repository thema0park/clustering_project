#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int b, h;
	int out;
    double V;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    V=0.5*3.14*((double)b/2)*((double)b/2)*h/3;
    out=(int)V;

	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}