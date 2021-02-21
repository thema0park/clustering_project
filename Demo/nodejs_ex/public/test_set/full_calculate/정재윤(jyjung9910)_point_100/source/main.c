#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i;
    int j;
    int check;
    check=0;

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    for(i=0;i<BYTE_SIZE;i++)
    {
        if(byte[0][i]=='0' || byte[0][i]=='1' )
        {
            check++;
        }
        if(byte[1][i]=='0' || byte[1][i]=='1')
        {
            check++;
        }
    }
    if(check==16)
    {
        for(i=0;i<BYTE_SIZE;i++)
        {
            out[i] = byte[0][i] + byte[1][i] - '0';
        }
        for(i=1;i<BYTE_SIZE;i++)
        {
            for(j=1;j<BYTE_SIZE;j++)
            {
                if(out[j]=='2')
                {
                    out[j-1]++;
                    out[j]='0';
                }
                if(out[j]=='3')
                {
                    out[j-1]++;
                    out[j]='1';
                }
            }
        }
        if(out[0]=='2')
        {
            out[0]='0';
        }
        if(out[0]=='3')
        {
            out[0]='1';
        }
	    printf("%s\n", out);
    }
    else
    {
        printf("Input Error\n");
    }

	////////////////////////////////////////


	return 0;
}
