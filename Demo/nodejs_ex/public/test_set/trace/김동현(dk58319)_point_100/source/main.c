#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int b, h;
	int out;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    if (h==0||b==0){ out=0;}
   
    out = (((0.5*b)*(0.5*b))*(3.14)*(0.5)*h)/3;


	////////////////////////////////////////

	printf("%d\n", out );

	return 0;
}