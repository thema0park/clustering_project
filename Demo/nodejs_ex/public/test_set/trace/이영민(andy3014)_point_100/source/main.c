#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//반원뿔 높이 6m 지름 50m 
int main()
{
	int b, h;
	int out;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    double V;
    V=3.14*b/2*b/2*h/3/2;
    out=V;

	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}