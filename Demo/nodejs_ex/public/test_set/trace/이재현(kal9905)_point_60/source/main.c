#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;
	scanf("%d %d", &b, &h);
    float d=b/2;
    out=3.14*0.5*d*d*h/3;
	printf("%d\n", out);
}