#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;
   
	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    out = 0.5 * 3.14 * ((float)b/2) * ((float)b/2) * (float)h * ((float)1/3);


	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}