#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int b, h;
	int out;

	scanf("%d %d", &b, &h);

	////////////////////////////////////////
    double r=(double)b/(double)2;
    double tmp;
    out=(int)(3.14*r*r*h/3/2);
    if(out==0)
        out=1;
 
    ////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}