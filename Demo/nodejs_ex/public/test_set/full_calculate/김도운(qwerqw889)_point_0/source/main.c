#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
    int i,j;
    char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
	scanf("%s %s", byte[0], byte[1]);
    

	printf("%s\n", out);

	return 0;
}
