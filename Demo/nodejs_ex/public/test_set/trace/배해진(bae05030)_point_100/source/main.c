#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
반원인 뿔 
1/2*pi*r^2*h*1/3
*/
int main()
{
	int b, h;
	long long int out;
    double out2;
	scanf("%d %d", &b, &h);
    double b2=(double)b/2;
    double h2=(double)h;
    double a=0.5;
    double c=(double)1/3;
    double pii=3.14;
    //printf("%lf",c);
    out2=(a)*(pii)*(b2)*(b2)*(h2)*(c);
    out=(1/2)*(3.14)*((double)b/2)*((double)b/2)*((double)h)*(1/3);
    //printf("%lf\n",(double)out2);
    printf("%lld\n",(long long int)out2);
	return 0;
}