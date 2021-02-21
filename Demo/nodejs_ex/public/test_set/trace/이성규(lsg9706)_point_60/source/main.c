#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;
    double s;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    s=(double)0.5*3.14*(b/2)*(b/2)*h/3;
    out=(int)s;


	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}