#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    if(b<1 || b>100 || h<1 || h>100)
        return 0;
    
    float t;

    t=0.5*3.14*(b/2)*(b/2)*h/3;

    out=(int)t;

	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}