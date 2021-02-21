#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K;
	int h1,h;
    int M1,M2;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);

	////////////////////////////////////////

    M1= (m+1)*26;
    M2= M1/10;

    h1= q+ M2+K+ (K/4) +(J/4) + 5*J;

    h= h1%7;


	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
