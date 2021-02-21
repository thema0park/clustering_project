#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    float result;
    result = (float)b*(float)b/24.0*(float)h*3.14;
    out = (int)result;



	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}