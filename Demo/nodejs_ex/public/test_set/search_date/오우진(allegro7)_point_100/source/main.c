#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define WEEK_DAYS 7
#define STRING_MAX 10
int gauss(double k){
    return (int)k;
}
int main()
{
	int q, m, J, K;
	int h;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);
    int m1 = gauss((double)(m+1)*26 / (double)10);
    int m2 = gauss((double)K/(double)4);
    int m3 = gauss((double)J/(double)4);
    h = (q + m1 + K + m2 + m3 + 5*J) % 7;
	////////////////////////////////////////

	////////////////////////////////////////

	printf("%s\n", week[h]);
	return 0;
}
