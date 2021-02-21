#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 3.14

int main()
{
	int b, h;
	int out;
    double k;
    int j;
	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    
    out=PI*b/2*b/2*h/6;
    
	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}