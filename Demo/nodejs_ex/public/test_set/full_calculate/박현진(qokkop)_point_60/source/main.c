#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1]={'0'};

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    int i;
    for(i=0;i<8;i++)
    {
        if(byte[0][i]!='0'&&byte[0][i]!='1')
        {
            printf("Input Error\n");
            return 0;
        }
        else if(byte[1][i]!='0'&&byte[1][i]!='1')
        {
            printf("Input Error\n");
            return 0;
        }
    }
    for(i=8;i>0;i--)
    {
        if(byte[0][i]==byte[1][i] && byte[0][i]=='0') out[i] = '0';
        else if(byte[0][i]==byte[1][i] && byte[0][i]=='1')
        {
            out[i]='0';
            if(byte[0][i-1]=='0') byte[0][i-1]='1';
            else if(byte[1][i-1]=='0') byte[1][i-1]='1';
            else if(byte[0][i-1]=='1'&& byte[1][i-1]=='1') 
            {
                byte[0][i-1]='0';
               if(byte[0][i-2]=='0') byte[0][i-2]='1';
               else if(byte[1][i-2]=='0') byte[1][i-2]='1';
            }
        }
        else if(byte[0][i]!=byte[1][i]) out[i]='1';
    }
    


	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
