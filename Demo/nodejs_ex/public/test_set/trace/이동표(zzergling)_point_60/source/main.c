#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    if(b<1 || b>100 || h<1 || h>100){
    return 0; }

    out = ((b/2)*(b/2))*0.5*h*3.14/3;
    ////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}