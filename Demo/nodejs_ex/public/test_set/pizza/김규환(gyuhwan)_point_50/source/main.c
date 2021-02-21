#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i, j;
	int output;
    int cnt = 0;

    int maxIdx;
    int max = -1;

	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////

    for (i = 0; i < piece_num; i++) {
        cnt = 0;
        for (j = 0; j < piece_num; j++) {
            if (i == j) continue;

            int a = gcd(input_data[i], input_data[j]);
            if (a <= 1)
                cnt++;
        }

        if (cnt > max) {
            max = cnt;
            maxIdx = i;
        }
    }

	////////////////////////////////////////

	printf("%d\n", input_data[maxIdx]);
	return 0;
}