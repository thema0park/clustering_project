#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(gender=='M')
    {
        if(f==5)
        {
            if(l<=3)
            {
                printf("%d\n",l+1);
            }
            else
            {
                printf("%d\n",8-l);
            }
        }
        else
        {
            if(f%2==1)
            {
                if(l<3)
                {
                    printf("%d\n",l+1);
                }
                else
                {
                    printf("%d\n",6-l);
                }
            }
            else
            {
                if(l<=3)
                {
                    printf("%d\n",l);
                }
                else{
                    printf("%d\n",7-l);
                }
            }
        }
    }
    else
    {
        if(f==5)
        {
            if(l<3)
            {
                printf("%d\n",l+2);
            }
            else
            {
                printf("%d\n",7-l);
            }
        }
        else
        {
            if(f%2==1)
            {
                if(l<=3)
                {
                    printf("%d\n",l);
                }
                else
                {
                    printf("%d\n",7-l);
                }
            }
            else
            {
                if(l<3)
                {
                    printf("%d\n",l+1);
                }
                else{
                    printf("%d\n",6-l);
                }
            }
        }
    }
	////////////////////////////////////////
	return 0;
}