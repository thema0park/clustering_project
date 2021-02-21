#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K; //일 월 연도뒤두자리 연도앞두자리
	int h;
    int ok, oj;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);

	////////////////////////////////////////
    //k/4
    ok = (K/4)/1;
    oj = (J/4)/1;

    h = (q + ((m+1)*26)/10 + K + ok + oj + 5*J) % 7;



	////////////////////////////////////////

	printf("%s\n", week[h]);
    //printf("Wednesday\n");
	return 0;
}
