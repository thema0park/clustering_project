#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K;
	int h;
    int a1=0;
    int a2=0;
    int a3=0;
	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);

	////////////////////////////////////////
    a1=(int)((m+1)*26/10);
    a2=(int)(K/4);
    a3=(int)(J/4);
    h=q+a1+K+a2+a3+5*J;
    h=h%7;


	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
