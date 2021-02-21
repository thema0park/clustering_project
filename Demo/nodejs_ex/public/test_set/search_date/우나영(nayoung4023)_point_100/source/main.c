#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, j, k;
	int h;
    float h1,h2,h3;
    int h11,h22,h33;

	//char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &k, &j);

	////////////////////////////////////////
    h1=((m+1.0)*26.0)/10.0;
    h2=k/4.0;
    h3=j/4.0;
    h11=h1;
    h22=h2;
    h33=h3;
    h=(q+h11+k+h22+h33+(5*j))%7;
    if(h==0)
    {
        printf("Saturday\n");
    }
    else if(h==1)
    {
        printf("Sunday\n");
    }
    else if(h==2)
    {
        printf("Monday\n");
    }
    else if(h==3)
    {
        printf("Tuesday\n");
    }
    else if(h==4)
    {
        printf("Wednesday\n");
    }
    else if(h==5)
    {
        printf("Thursday\n");
    }
    else if(h==6)
    {
        printf("Friday\n");
    }

	////////////////////////////////////////

	//printf("%s\n", week[h]);
	return 0;
}
