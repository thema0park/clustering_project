#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

#define WEEK_DAYS 7
#define STRING_MAX 10
int main()
{
	int q, m, J, K;
	int h;

	char week[WEEK_DAYS][STRING_MAX] = { "Saturday", "Sunday" , "Monday", "Tuesday","Wednesday", "Thursday", "Friday" };

	scanf("%d %d %d %d", &q, &m, &K, &J);

	////////////////////////////////////////

    h = (int)((q + floor((double)((m+1)*26)/10) + K + floor((double)(K/4))+floor((double)(J/4)) + 5 * J)) % 7 ;

    if (h==0)
    {
        printf("Saturday\n");
    }
    else if (h==1)
    {
        printf("Sunday\n");
    }
    else if (h==2)
    {
        printf("Monday\n");
    }
    else if (h==3)
    {
        printf("Tuesday\n");
    }
    else if (h==4)
    {
        printf("Wednesday\n");
    }
    else if (h==5)
    {
        printf("Thursday\n");
    }
    else if (h==6)
    {
        printf("Friday\n");
    }




	////////////////////////////////////////

//	printf("%s\n", week[h]);
	return 0;
}
