#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;
   

	scanf("%d %d", &b, &h);

	////////////////////////////////////////

 out = (3.14/24)*b*b*h;
	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}