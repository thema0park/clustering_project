#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
    char olim[BYTE_SIZE+1];
	char out[BYTE_SIZE+1];
    int i;
	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    for(i=0;i<8;i++)
    {
        if(byte[0][i]!='1' && byte[0][i]!='0')
        {
            printf("Input Error\n");
            return 0;
        }

        if(byte[1][i]!='1'&&byte[1][i]!='0')
        {
            printf("Input Error\n");
            return 0;
        }
        
    }
    for(i=7;i>=0;i--)
    {
        if(i==7)
        {
            if(byte[0][i]!=byte[1][i])
            {
                out[i]='1';
                olim[i]='0';
            }
            
            if(byte[0][i]==byte[1][i])
            {
                out[i]='0';
                if(byte[0][1]=='1')
                    olim[i]='1';
                else
                    olim[i]='0';
            }
        }
        else
        {
            if(olim[i+1]=='0'&&byte[0][i]==byte[1][i])
            { 
                out[i]='0';
                if(byte[0][i]=='1')
                    olim[i]='1';
                else
                    olim[i]='0';
            }
            else if(olim[i+1]=='1' && byte[0][i]==byte[1][i])
            {
                out[i]='1';
                if(byte[0][i]=='1')
                    olim[i]='1';
                else
                    olim[i]='0';
            }
            else if(olim[i+1]=='0'&&byte[0][i]!=byte[1][i])
            {
                out[i]='1';
                olim[i]='0';
            } 
            else
            {
               out[i]='0';
               olim[i]='1'; 
            }
        }
    }

	////////////////////////////////////////

	for(i=0;i<8;i++)
        printf("%c",out[i]);

    printf("\n");

	return 0;
}
