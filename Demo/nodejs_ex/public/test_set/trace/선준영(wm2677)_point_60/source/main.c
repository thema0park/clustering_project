#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int b, h;
    double out=1;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    out=0.5*3.14;
    out=out*pow((b/2),2)*h/3;
    
	////////////////////////////////////////
    int out2=(int)out;
	printf("%d\n", out2);

	return 0;
}