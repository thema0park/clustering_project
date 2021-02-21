#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K;
    int k, j, M;
	int h;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);

    k = K/4;
    j = J/4;
    M = ((m + 1) * 26) / 10;
    h = (q + M + K + k + j + 5 * J) % 7;

	printf("%s\n", week[h]);
	return 0;
}
