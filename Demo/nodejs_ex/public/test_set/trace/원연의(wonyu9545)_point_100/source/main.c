#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;
    float r;

	scanf("%d %d", &b, &h);
    r=b/2.0;
	////////////////////////////////////////
    out=0.5*3.14*r*r*h/3;


	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}