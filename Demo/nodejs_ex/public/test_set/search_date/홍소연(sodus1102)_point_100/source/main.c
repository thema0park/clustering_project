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
    int x = ((m+1)*26)/10;
    int y = K/4;
    int z = J/4;
    h = (q+x+K+y+z+5*J) % 7;


	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
