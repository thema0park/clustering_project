#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1] = {0};

    int i;
    int n;
	scanf("%s %s", byte[0], byte[1]);
	////////////////////////////////////////

    for (i = 0; i<BYTE_SIZE; i++) {
        if (byte[0][i] == '0') byte[0][i] = 0;
        else if (byte[0][i] == '1') byte[0][i] = 1;
        else {
            printf("Input Error\n");
            return 0;
        }
        if (byte[1][i] == '0') byte[1][i] = 0;
        else if (byte[1][i] == '1') byte[1][i] = 1;
        else {
            printf("Input Error\n");
            return 0;
        }
    }

    for (i = 0; i<BYTE_SIZE; i++) out[i] = byte[0][i] + byte[1][i];
    for (i = BYTE_SIZE-1; i>=0; i--) {
        if (i == 0) {
            if (out[i] == 2) out[i] = 0;
            if (out[i] == 3) out[i] = 1;
            continue;
        }

        switch (out[i]) {
            case 2 : out[i] = 0; out[i-1]++; break;
            case 3 : out[i] = 1; out[i-1]++; break;
            default : break;
        }
    }
    for (i = 0; i<BYTE_SIZE; i++) printf("%d", out[i]);
    printf("\n");
	return 0;
}
