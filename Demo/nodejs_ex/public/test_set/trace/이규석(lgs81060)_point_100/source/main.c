#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;
    double gaesan;
	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    gaesan = (b/2.0)*(b/2.0)*0.5*3.14*h/3 ;
    out = (int)gaesan;

	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}