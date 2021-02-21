#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    int l1,l2;
    if(gender=='M')
    {
        if(f==1||f==3)
        {
            l1=6-l;
            l2=1+l-0;
            if(l1>l2) out=l2;
            else out=l1;
        }
        else if(f==2||f==4)
        {
            l1=l-0;
            l2=1+6-l;
            if(l1>l2) out=l2;
            else out=l1;
        }
        else if(f==5)
        {
            l1=1+l-0;
            l2=2+6-l;
            if(l1>l2) out=l2;
            else out=l1;
        }
    }
    else if(gender=='W')
    {
        if(f==2||f==4)
        {
            l1=6-l;
            l2=1+l-0;
            if(l1>l2) out=l2;
            else out=l1;
        }
        else if(f==1||f==3)
        {
            l1=l-0;
            l2=1+6-l;
            if(l1>l2) out=l2;
            else out=l1;
        }
        else if(f==5)
        {
            l1=1+6-l-0;
            l2=2+l-0;
            if(l1>l2) out=l2;
            else out=l1;
        }
    }


	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}