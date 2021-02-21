#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out=0;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(l==3)
    {
        if(f!=5) out = 3;
        else out=4;
    }

    else if(gender=='M')
    {
        if(l==4)
        {
            if(f==3||f==1) out = 2;
            else if(f==2||f==4) out = 3;
            else if(f==5) out = 4;
        }
        else if(l==5)
        {
            if(f==3||f==1) out = 1;
            else if(f==2||f==4) out = 2;
            else if(f==5) out = 3;
        }
        else if(l==1)
        {
            if(f==2||f==4) out = 1;
            else out =2;
        }
        else if(l==2)
        {
            if(f==3||f==1) out = 3;
            else if (f==2||f==4) out = 2;
            else if(f==5) out = 3;
        }
    }
    else if(gender=='W')
    {
        if(l==4)
        {
            if(f==2||f==4) out = 2;
            else out = 3;
        }
        else if(l==2)
        {
            if(f==3||f==1) out = 2;
            else if(f==2||f==4) out = 3;
            else if(f==5) out = 4;
        }
        else if(l==5)
        {
            if(f==2||f==4) out = 1;
            else out =2;
        }
        else if(l==1)
        {
            if(f==3||f==1) out = 1;
            else if(f==2||f==4) out = 2;
            else if(f==5) out = 3;
        }
    }
	////////////////////////////////////////

	printf("%d\n", out);

	return 0;
}