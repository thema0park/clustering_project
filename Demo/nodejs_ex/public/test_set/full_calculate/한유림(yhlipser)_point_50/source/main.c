#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);

    int i;
    int cnt = 0;

    for (i = 0; i <= 7; i++) {
        if (byte[0][i] > '1') {
            cnt++;
        }
        if (byte[1][i] > '1') {
            cnt++;
        }
    }
    

    for (i = 0; i < 8; i++) {
        out[i] = byte[0][i] + byte[1][i];
        out[i] = out[i] - 48;
    }
    for (i = 1; i < 8; i++) {
        if (out[i] > '1') {
            --out[i];
            ++out[i-1];
        }
    }

    if (cnt != 0)
    printf("Input Error\n");
	else printf("%s\n", out);

	return 0;
}
