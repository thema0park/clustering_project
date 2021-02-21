#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define BYTE_SIZE 8
#define IN_NUM 2

char inc(char a, char b, int *plus) {
    int ai = a - '0';
    int bi = b - '0';

    int valid_a = ai == 0 || ai == 1;
    int valid_b = bi == 0 || bi == 1;
    if (!(valid_a && valid_b))
        return -1;

    int sum = ai + bi + *plus;

    char result = (sum % 2) + '0';
    
    *plus = sum / 2;

    return result;
}

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int plus = 0;
    int i, idx;
    char buf;

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////

    for (i = 1; i <= 8; i++) {
        idx = BYTE_SIZE - i;
        buf = inc(byte[0][idx], byte[1][idx], &plus);
        if (buf == -1) {
            printf("Input Error\n");
            return 0;
        }

        out[idx] = buf;
    }

    out[BYTE_SIZE] = '\0';
	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
