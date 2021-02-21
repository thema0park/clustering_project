#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	float b; float h;
	float out;
    int out2;
    float r;
	scanf("%f %f", &b, &h);
    r=b/2;
    out=((r*r)*3.14*h)/6;
    out2=out;
	printf("%d\n", out2);

	return 0;
}