#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    int t0,t1,c;
    int n=0;

    for(c=7;c>=0;c--)
    {
        if(byte[0][c]=='0')
            t0=0;
        else if(byte[0][c]=='1')
            t0=1;
        
        if(byte[1][c]=='0')
            t1=0;
        else if(byte[1][c]=='1')
            t1=1;
        
        if(t0+t1+n==0)
        {
            out[c]='0';
            n=0;
        }
        else if(t0+t1+n==1)
        {
            out[c]='1';
            n=0;
        }
        else if(t0+t1+n==2)
        {
            out[c]='0';
            n=1;
        }
        else if(t0+t1+n==3)
        {    
            out[c]='1';
            n=1;
        }
    }
    out[8]=NULL;
	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
