#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    
    int a=0,b=0;
    int i;
    int tmp;
    int error=0;

    for(i=0; i<=7; i++)
    {
        if(byte[0][i]!='0'&&byte[0][i]!='1') error=1;
    }

    for(i=0; i<=7; i++)
    {
        if(byte[1][i]!='0'&&byte[1][i]!='1') error=1;
    }

    if(error==1) printf("Input Error\n");
    else
    {
        tmp=1;
        for(i=7; i>=0; i--)
        {
            if(byte[0][i]=='1') a+=tmp;
            tmp=tmp*2;
        }

        tmp=1;
        for(i=7; i>=0; i--)
        {
            if(byte[1][i]=='1') b+=tmp;
            tmp=tmp*2;
        }
        int answer=a+b;
        if(answer>=256) answer-=256;
        
        for(i=7; i>=0; i--)
        {
            out[i]=answer%2+48;
            answer/=2;
        }
        out[8]='\0';

        printf("%s\n", out);
    }


	////////////////////////////////////////


	return 0;
}
