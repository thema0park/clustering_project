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
    //q 일
    //m 월
    //K 연도 마지막 두자리
    //J 연도 앞 두자리
    
	////////////////////////////////////////
    int g1 = (m+1)*26/10;
    int g2 = K/4;
    int g3 = J/4;
    h = (q + g1 + K + g2 + g3 + 5*J) % 7;

	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
