#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;
    float ans;
	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    
    out=3.14*b/2*b/2*h*1/2*1/3;
    
	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}