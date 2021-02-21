#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K;
	int h;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);
    //일 월 연도 앞 연도
	////////////////////////////////////////
    h=((q+(m+1)*26/10) + K + K/4 + J/4 +5*J)%7;
    //printf(" h : %d\n", h);
	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
