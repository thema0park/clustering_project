#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    int i;
    if(l==3 && f!=5) out=3;
    else if(f==5 && l==3) out=4;
    if(l<3) out=l;
    else if(l>3) out=6-l;
    if(f%2==1 && gender=='W' && l>3) out++;
    else if(f%2==0 && gender=='M' && l>3) out++;
    if(f==5 && gender=='W' && l<3) out++;
    if(f==5 && gender=='M' && l>3) out++;
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}