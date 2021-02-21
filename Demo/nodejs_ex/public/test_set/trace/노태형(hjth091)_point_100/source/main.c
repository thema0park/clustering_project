#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	float b, h;
	int out;

	scanf("%f %f", &b, &h);
    if (b>=1&&b<=100&&h>=1&&h<=100)
    {
        if (b!=1)
            b=(b/2);
        else 
            b=0.5;
        b=b*b;
        out=b*0.5*h*3.14;
        out=out/3;
    	printf("%d\n", out);
    }

	return 0;
}