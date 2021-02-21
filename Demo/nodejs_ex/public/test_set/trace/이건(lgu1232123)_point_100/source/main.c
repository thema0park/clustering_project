#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;
    float v;

	scanf("%d %d", &b, &h);
    
	////////////////////////////////////////
    out =0.5 * 3.14 * b/2*b/2 * h * 1/3;


	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}