#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define WEEK_DAYS 7
#define STRING_MAX 10

char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

void calculate(int q, int m, int J, int K);

// year : JK
int main()
{
	int q, m, J, K;
	int h;

	scanf("%d %d %d %d", &q, &m, &K, &J);

	////////////////////////////////////////
    calculate(q, m, J, K);
	////////////////////////////////////////

	return 0;
}

void calculate(int q, int m, int J, int K)
{
    int a, b, c, h;
    
    a = ((m+1)*26)/10;
    b = K/4;
    c = J/4;
    h = (q + a + K + b + c + 5*J) % 7;

    printf("%s\n", week[h]);

    return;
}