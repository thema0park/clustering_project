#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////

    int result = 1;

    int num = 0;

    int row, col;
    for (row = 0; row < MABANGJIN_SIZE; row++) {
        int sum = 0;
        for (col = 0; col < MABANGJIN_SIZE; col++) {
            sum += mabangjin[row][col];
        }
        
        if (num == 0) num = sum;
        else {
            if (num != sum) {
                result = 0;
            }
        }
    }

    for (col = 0; col < MABANGJIN_SIZE; col++) {
        int sum = 0;
        for (row = 0; row < MABANGJIN_SIZE; row++) {
            sum += mabangjin[row][col];
        }

        if (num != sum) {
            result = 0;
        }
    }

    int n;
    int sum;

    sum = 0;
    for (n = 0; n < MABANGJIN_SIZE; n++) {
        sum += mabangjin[n][n];
    }

    if (num != sum) {
        result = 0;
    }

    sum = 0;
    for (n = 0; n < MABANGJIN_SIZE; n++) {
        sum += mabangjin[n][MABANGJIN_SIZE - n - 1];
    }

    if (num != sum) {
        result = 0;
    }

    answer = result ? 'O' : 'X';

	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
