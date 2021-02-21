#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1]={};
    int tmp[8]={0,};
    int tmp_1[8]={0,};
    
    int k=0;
    int j=0;

	scanf("%s %s", byte[0], byte[1]);

    for(k=0;k<8;k++)
    {
        if(!((byte[0][k]=='0' || byte[0][k]=='1') && (byte[1][k]=='0' || byte[1][k]=='1')))
        {
            printf("Input Error\n");
            exit(0);
        }
    }
	////////////////////////////////////////
    for(k=0;k<8;k++)
    {
        if(byte[0][7-k]=='0'&& byte[1][7-k]=='0')
        {
            tmp[7-k]=0;
         }
           if(byte[0][7-k]=='0'&& byte[1][7-k]=='1')
        {
            tmp[7-k]=1;
         }
           if(byte[0][7-k]=='1'&& byte[1][7-k]=='0')
        {
            tmp[7-k]=1;
         }
           if(byte[0][7-k]=='1'&& byte[1][7-k]=='1')
        {
            tmp[7-k]=2;
          
         }
         
    }
  

///////////////////////////////////////
    for(k=0;k<7;k++)
    {
        if(tmp[7-k]==2)
        {
            tmp[7-k]=0;
            tmp[6-k]++;
        }
        else if(tmp[7-k]==3)
        {
            tmp[7-k]=1;
            tmp[6-k]++;
        }
    }
    if(tmp[0]==2)
    {
        tmp[0]=0;
    }
    else if(tmp[0]==3)
    {
        tmp[0]=1;
    }
    for(k=0;k<8;k++)
    {
        if(tmp[k]==0)
        {
            out[k]='0';
        }
        else
        {
            out[k]='1';
        }
    }
    

    printf("%s\n",out);

	return 0;
}
