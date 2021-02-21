#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
    char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);
    int i,j;
    for(j=7;j>=0;j--)
    {
        if(byte[0][j]!=0&&byte[0][j]!=1)
        printf("Input Error\n");
        break;
        if(byte[1][j]!=0&&byte[1][j]!=1)
        printf("Input Error\n");
        break;
    }
	return 0;
}
