#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
    double out;

	scanf("%d %d",&b,&h);
    
      

    out=(b/2)*(b/2)*h/3*(3.14)/2;
	
	printf("%.lf\n", out );

	return 0;
}