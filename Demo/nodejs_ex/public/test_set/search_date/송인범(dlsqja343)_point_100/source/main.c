#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K;//일,월,연도 두자리,연도의 앞 두자리
	int h;
    int result1,result2,result3;
	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);
    
    
	////////////////////////////////////////
    result1=(((m+1)*26)/10);
    result2=(K/4);
    result3=(J/4);
    h=(q+result1+K+result2+result3+5*J)%7;
	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
