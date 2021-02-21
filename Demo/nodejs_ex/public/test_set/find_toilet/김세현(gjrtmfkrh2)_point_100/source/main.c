#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if (gender == 'M' && f == 5)
    {
        if(l < 4)
        {
            out = l + 1;
        }
        else
        out = 8 - l;
    }
       if (gender == 'W' && f == 5)
    {
        if(l > 2)
        {
            out = 7 - l;
        }
        if(l == 1)
        {
            out = 3;
        }
        if(l == 2)
        {
            out == 4;
        }
        
    }
    else
    {
    if (gender == 'M' && f == 1 )
    {
        if(l < 3)
        {
            out = l + 1;
        }
        else
        out = 6 - l;
    }
        if (gender == 'M' && f == 2 )
    {
        if( l > 3)
        {
            out = 7 - l;
        }
        else
        out = l;
    }
        if (gender == 'M' && f == 3 )
    {
        if(l < 3)
        {
            out = l + 1;
        }
        else
         out = 6 - l;
    }
        if (gender == 'M' && f == 4 )
    {
        if( l > 3)
        {
            out = 7 - l;
        }
        else
        out = l;
    }
    
//////////

        if (gender == 'W' && f == 1 )
    {
        if( l > 3)
        {
            out = 7 - l;
        }
        else
        out = l;
    }
        if (gender == 'W' && f == 2 )
    {
         if(l < 3)
        {
            out = l + 1;
        }
        else
        out = 6 - l;
    }
        if (gender == 'W' && f == 3 )
    {
        if( l > 3)
        {
            out = 7 - l;
        }
        else
        out = l;
    }
        if (gender == 'W' && f == 4 )
    {
        if(l < 3)
        {
            out = l + 1;
        }
        else
        out = 6 - l;
    }
    }
	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}