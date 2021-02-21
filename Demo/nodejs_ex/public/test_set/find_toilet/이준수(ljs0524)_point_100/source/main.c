#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
    int count=0;

	scanf("%c %d %d", &gender, &f, &l);
    if(gender == 'M')
    {
        if(f == 2 || f==4)
        {
            if(l<=3)
            {
                count = l;
            }
            else if(l>3)
            {
                count = 6-l+1;
            }
        }
        else if(f==5)
        {
            if(l<=3)
            {
                count = l+1;
            }
            else if(l>3)
            {
                count = 6-l+2;
            }
        }
        else
        {
            if(l<3)
            {
               count = 1+ l; 
            }
            else if(l>=3)
            {
                count = 6-l;
            }
        }
    }
    if(gender == 'W')
    {
        if(f == 1 || f==3)
        {
            if(l<=3)
            {
                count = l;
            }
            else
            {
                count = 6-l+1;
            }
        }
        else if(f==5)
        {
            if(l<3)
            {
                count = l+2;
            }
            else if(l>=3)
            {
                count = 6-l+1;
            }
        }
        else
        {
            if(l<3)
            {
               count = 1+ l; 
            }
            else if(l>=3)
            {
                count = 6-l ;
            }
        }
    }


	printf("%d\n", count);
	return 0;
}