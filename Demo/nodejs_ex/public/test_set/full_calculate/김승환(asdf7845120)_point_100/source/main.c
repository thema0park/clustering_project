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
    int i;
    int up;
    for(i=0;i<BYTE_SIZE;i++)
    {
        if(byte[0][i] != '0' && byte[0][i] != '1')
        {
            printf("Input Error\n");
            return 0;
        } 
        if(byte[1][i] != '0' && byte[1][i] != '1')
        {
            printf("Input Error\n");
            return 0;
        } 
    }
    up = 0;
    for(i=BYTE_SIZE-1;i>=0;i--)
    {
        
        up = (byte[0][i] - '0') + (byte[1][i] - '0')+up;
        out[i] = up%2 + '0';
        up/=2;
    }
    out[BYTE_SIZE]=0;

	printf("%s\n", out);

	return 0;
}
