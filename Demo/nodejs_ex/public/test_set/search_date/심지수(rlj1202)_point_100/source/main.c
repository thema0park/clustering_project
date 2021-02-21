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

    h = 0;

    h += q;
    h += (int) ((float) (m + 1) * 2.6);
    h += K;
    h += (int) ((float) K / 4.0);
    h += (int) ((float) J / 4.0);
    h += 5 * J;
    h %= 7;

	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
