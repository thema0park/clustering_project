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
        if(l==3)
        {
            if(f==5)
                out=4;
            else
                out=3;
        }
        else if(l==1||l==2)
        {
            if(f==5)
                out=l+1;
            else if(f==4||f==2)
                out=l;
            else if(f==3||f==1)
                out=l+1;
        }
        else if(l==4||l==5)
        {
            if(f==5)
                out=8-l;
            else if(f==4||f==2)
                out=7-l;
            else if(f==3||f==1)
                out=6-l;
        }
    }
    else if(gender=='W')
    {
        if(l==3)
        {
            if(f==5)
                out=4;
            else
                out=3;
        }
        else if(l==1||l==2)
        {
            if(f==5)
                out=2+l;
            else if(f==4||f==2)
                out=1+l;
            else if(f==3||f==1)
                out=l;
        }
        else if(l==4||l==5)
        {
            if(f==5)
                out=7-l;
            else if(f==4||f==2)
                out=6-l;
            else if(f==3||f==1)
                out=7-l;
        }
    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}