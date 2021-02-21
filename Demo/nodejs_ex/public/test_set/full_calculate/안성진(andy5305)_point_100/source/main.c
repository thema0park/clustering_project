#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i;
    int carry=0;
	scanf("%s %s", byte[0], byte[1]);
    for(i=0;i<8;i++)
    {
        if(((byte[0][i]!='1')&&(byte[0][i]!='0'))||((byte[1][i]!='1')&&(byte[1][i]!='0')))
        {
            printf("Input Error\n");
            return 0;
        }
    }
	////////////////////////////////////////
    for(i=7;i>=0;i--)
    {
        if(carry==0)
        {
            if(byte[0][i]==byte[1][i])
            {
                out[i]='0';
                if(byte[0][i]=='1')
                carry=1;
                else
                carry=0;
            }
            else
            {
            out[i]='1';
            }
            
        }
        else
        {
            
            if(byte[0][i]==byte[1][i])
            {
                out[i]='1';
                if(byte[0][i]=='1')
                carry=1;
                else
                carry=0;
            }
            else
            {
                out[i]='0';
                carry=1;
            }
        }
    }
    out[8]='\0';

	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
