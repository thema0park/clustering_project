#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
    int tmp=0;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(gender=='M')
    {
        if(l>3)
        {
            if(f==1||f==3)
            {
                out=6-l;
            }
            else if(f==2||f==4)
            {
                out=7-l;
            }
            else if (f==5)
            {
                out=8-l;
            }
        }
        else if(l<3)
        {
             if(f==1||f==3)
            {
                out=l+1;
            }
            else if(f==2||f==4)
            {
                out=l;
            }
            else if (f==5)
            {
                out=l+1;
            }
        }
        else if(l==3)
        {
              out=3;
        }

    }
     if(gender=='W')
    {
        if(l>3)
        {
            if(f==1||f==3)
            {
                out=7-l;
            }
            else if(f==2||f==4)
            {
                out=6-l;
            }
            else if (f==5)
            {
                out=7-l;
            }
        }
        else if(l<3)
        {
             if(f==1||f==3)
            {
                out=l;
            }
            else if(f==2||f==4)
            {
                out=l+1;
            }
            else if (f==5)
            {
                out=l+2;
            }
        }
        else if(l==3)
        {   
            if(f!=5)
            {
                out=3;
            }
            else
            {
                out=4;
            }
              
        }
    } 
	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}