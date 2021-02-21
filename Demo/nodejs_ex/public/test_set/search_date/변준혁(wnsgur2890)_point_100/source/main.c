#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K; // q:일 m:월 J:연도 앞 두자리 K:연도 마지막 두자리 
	int h;
    float value1=0, value2=0, value3=0;
    int val1=0, val2=0, val3=0;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);

	////////////////////////////////////////
    value1 = ( (float)((m+1)*26)/10 );
    val1 = (int)value1;
    value2 = (float)K/4;
    val2 = (int)value2;
    value3 = (float)J/4;
    val3 = (int)value3;
    
    h = (q + val1 + K + val2 + val3 + 5*J) % 7;

	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
