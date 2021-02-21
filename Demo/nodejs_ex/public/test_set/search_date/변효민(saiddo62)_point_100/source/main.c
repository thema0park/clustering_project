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
    h=(q+((m+1)*26/10)+K+(K/4)+(J/4)+(5*J))%7;
    if(h==0) printf("Saturday\n");
    if(h==1) printf("Sunday\n");    
    if(h==2) printf("Monday\n");
    if(h==3) printf("Tuesday\n");
    if(h==4) printf("Wednesday\n");
    if(h==5) printf("Thursday\n");
    if(h==6) printf("Friday\n" );

	////////////////////////////////////////

	
	return 0;
}
