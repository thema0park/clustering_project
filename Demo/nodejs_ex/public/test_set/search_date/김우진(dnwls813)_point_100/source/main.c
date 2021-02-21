#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int q, m, k, j,num1=0,num2=0,num3=0;
	int h;
    scanf("%d %d %d %d",&q,&m,&k,&j);
    num1=((m+1)*26)/10;
    num2=k/4;
    num3=j/4;
    h=(q+num1+k+num2+num3+5*j)%7;
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
}
