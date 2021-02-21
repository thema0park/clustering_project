#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i, c = 0;
    int error = 0;

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    for(i = 0; i < 8; i++)
    {
        if((byte[0][i] != '0' && byte[0][i] != '1') || (byte[1][i] != '0' && byte[1][i] != '1'))
        {
            error = 1;
            break;
        }
        byte[0][i] -= '0';
        byte[1][i] -= '0';
    }
    if(error)
    {
        printf("Input Error\n");
        return 0;
    }

    for(i = 7; i >= 0; i--)
    {
        out[i] = byte[0][i] + byte[1][i] + c;
        c = out[i] / 2;
        out[i] %= 2;
    }
    out[8] = 0;
    for(i = 0; i < 8; i++)
        out[i] += '0';
	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
