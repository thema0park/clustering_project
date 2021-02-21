#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int b;
    int h;
	int out;

	scanf("%d %d", &b,&h);

	out=(0.5)*(3.14)*((0.5)*b)*((0.5)*b)*h*(1/3);

	printf("%.0f\n",(float)out);

	return 0;
}