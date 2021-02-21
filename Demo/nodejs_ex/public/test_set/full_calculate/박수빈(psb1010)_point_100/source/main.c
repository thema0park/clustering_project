#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	int out[BYTE_SIZE+1]={0};
    int i;
	scanf("%s %s", byte[0], byte[1]);
    int wrong=0;
    for(i=7;i>=0;i--)
    {
        if((byte[0][i]!='0'&&byte[0][i]!='1')||(byte[1][i]!='0'&&byte[1][i]!='1'))
        {
            wrong=1;
            break;
        }
        out[i]+=byte[0][i]+byte[1][i]-'0'-'0';
        if(out[i]>=2||i!=0)
        {
            if(out[i]>=2)
            {
             out[i-1]++;
             out[i]-=2;
            }
        }
        else if (i==0)
        {
            if(out[0]>=2)
            {
                out[0]=0;
            }
        }
    }
    if(wrong==1)
    {
        printf("Input Error\n");
    }
    else
    {
        for(i=0;i<8;i++)
        {
            printf("%d",out[i]);
        }
        printf("\n");
    }
	return 0;
}
