#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(gender == 'M')
    {
        if(f==5)
        {
            if(1+l>2+(6-l))
                out=2+(6-l);
            else
                out=1+l;
        }

        if(f==3 || f==1)
        {
            if(l<=2)
                out=l+1;
            else
                out=(6-l);
        }

        if(f==4 || f==2)
        {
            if(l>=4)
                out=(6-l)+1;
            else
                out=l;
        }
    }

    if(gender == 'W')
    {
        if(f==5)
        {
            if(2+l>1+(6-l))
                out=1+(6-l);
            else
                out=2+l;
        }
        
        if(f==4 || f==2)
        {
            if(l<=2)
                out=l+1;
            else
                out=(6-l);
        }
        
        if(f==3 || f==1)
        {
            if(l>=4)
                out=(6-l)+1;
            else
                out=l;
        }
    }
	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}