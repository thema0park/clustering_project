#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);
    
    
	////////////////////////////////////////
    char temp='0';
    int i;
    for(i=0;i<BYTE_SIZE;i++)
    {
        if(!(byte[0][i]=='0'||byte[0][i]=='1')||!(byte[1][i]=='0'||byte[1][i]=='1'))
        {
            printf("Input Error\n");
            return 0;
        }
            
    }
    

    
for(i=7;i>=0;i--)
    {
        if(temp=='1')
        {
            if(byte[0][i]=='1'&&byte[1][i]=='1')
            {
                out[i]='1';
                temp='1';
            }
            if(byte[0][i]=='0'&&byte[1][i]=='0')
            {
                out[i]='1';
                temp='0';
            
            }
            else if(byte[0][i]!=byte[1][i])
            {
                out[i]='0';
                temp='1';
            
            }  
        }
        else{
            if(byte[0][i]==byte[1][i])
            {
                if(byte[0][i]=='1')
                temp='1';  
                out[i]='0';
            }
            else{
                out[i]='1';  
            }                
        }
    }
    //printf("%d %d ",sum1,sum2);
	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
