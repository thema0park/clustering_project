#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int b, h;
	int out;

    scanf("%d %d", &b, &h);
    
    

	////////////////////////////////////////;

    out =  (3.14*0.5*(b/2)*(b/2)*h/3)-(3.14*0.5*(b/4)*(b/4)*h/6);
	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}

