#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 3.14

int main()
{
	int b, h;
	int out;
    float r;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    r=b*0.5;
out=0.5*r*r*h*PI/3;


	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}