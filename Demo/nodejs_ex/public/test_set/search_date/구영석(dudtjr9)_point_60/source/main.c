#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K;
	double h1;
    int h;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);

	////////////////////////////////////////
    h1 =  q + (double) (m+1)*26.0/10.0 + K + (double) K/4.0 + (double) J/4.0 + 5.0*J;
    h = (int) h1 % 7;


	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
