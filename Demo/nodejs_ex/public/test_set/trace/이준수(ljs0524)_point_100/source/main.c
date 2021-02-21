#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int r,h;
	int vol;

	scanf("%d %d", &r, &h);
    vol = 3.14*r*r*h/24;
    printf("%d\n", vol);

	return 0;
}