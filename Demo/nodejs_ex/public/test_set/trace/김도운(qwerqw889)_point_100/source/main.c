#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;
    int i;	   
    scanf("%d %d", &b, &h);
    double num = (double)b/2;   
    out = 0.5*3.14*num*num*h/3;
    printf("%d\n", out);
    
	return 0;
}