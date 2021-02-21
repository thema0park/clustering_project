#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	int i;
    char b[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", b[0], b[1]);
   for (i=0;i<8;i++)
    {
        out[i]=b[0][i]+b[1][i]-48; 
        if (out[i]=='2')
        {
            if (b[0][i]=='1'&&b[1][i]=='1')
            {
               if (b[0][i-1]=='1'&&b[2][i-1]=='1')
                {
                    out[i-1]='0';
                    out[i]='1';
                }
            }
            else if (b[0][i]=='1'&&b[1][i]=='0')
            {
                out[i]=0;
            }
        }
    }   
    



	printf("%s\n", out);

	return 0;
}
