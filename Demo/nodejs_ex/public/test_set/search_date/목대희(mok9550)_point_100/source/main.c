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

	////////////////////////////////////////
    h = q;
    h += ((m+1) * 26)/10;
    h += K;
    h += K/4;
    h += J /4;
    h += 5 * J;
    h %= 7;


	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
