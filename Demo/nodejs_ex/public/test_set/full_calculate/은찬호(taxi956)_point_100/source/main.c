#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
    int out;

	scanf("%d %d", &b, &h);

    out = ( 0.5 * (float)(b*0.5) * (float)(b*0.5) * (float)h * (float)3.14 ) /3 ;
	

	printf("%d\n", out);

	return 0;
}