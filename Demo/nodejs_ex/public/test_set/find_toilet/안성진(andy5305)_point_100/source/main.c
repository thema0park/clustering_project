#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;
    int i,j;
    int Man[5][7];
    int Wom[5][7];
	scanf("%c %d %d", &gender, &f, &l);
    if(gender=='M')
    {
        if((f-1)==0||(f-1)==2)
        {
            if(l<3)
            out = l+1;
            else
            out = 6-l;
        }
        else if((f-1)==1||(f-1)==3)
        {
            if(l<4)
            out = l;
            else
            out = 7-l;
        }
        else if(f==5)
        {
            if(l<4)
            out=l+1;
            else
            out=8-l;
        }
    }
    else if(gender=='W')
    {
        if((f-1)==1||(f-1)==3)
        {
            if(l<3)
            out = l+1;
            else
            out = 6-l;
        }
        else if((f-1)==0||(f-1)==2)
        {
            if(l<4)
            out = l;
            else
            out = 7-l;
        }
        else if(f==5)
        {
            if(l<3)
            out=l+2;
            else
            out=7-l;
        }
    }
	////////////////////////////////////////


	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}