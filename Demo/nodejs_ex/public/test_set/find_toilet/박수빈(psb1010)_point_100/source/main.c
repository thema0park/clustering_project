#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);
        int ans=100;
        int i;
	////////////////////////////////////////
    if(gender=='M')
    // 성별이 남자일 경우
    {
        int x[4]={1,2,3,4};
        int y[4]={6,0,6,0};
        for(i=0;i<4;i++)
        {
            if(abs(f-x[i])+abs(l-y[i])<ans)
            {
                ans=abs(f-x[i])+abs(l-y[i]);
            }
        }
        printf("%d\n",ans);
    }
    else
    {
        int x[4]={1,2,3,4};
        int y[4]={0,6,0,6};
        int ans=100;
        for(i=0;i<4;i++)
        {
            if(abs(f-x[i])+abs(l-y[i])<ans)
            {
                ans=abs(f-x[i])+abs(l-y[i]);
            }
        }
        printf("%d\n",ans);
    }
}