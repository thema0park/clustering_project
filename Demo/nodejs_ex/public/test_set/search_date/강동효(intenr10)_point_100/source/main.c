#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q = 0;
    int m = 0;
    int J = 0;
    int K = 0;
	int h = 0;
    int i = 0;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);
    if(K == 00)
    {
      K == 0;
    }
    h = (q + (((m+1)*26)/10) + K + (K/4) + (J/4)+ (5*J))%7;
   for(i = 0; i<=WEEK_DAYS; i++)
   {
       if(h == i)
       {
           printf("%s\n", week[h]);
       }
   }
	return 0;
}
