#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int GCD (int a, int b) {
    int tmp;
    if (b==0) return 1;
    if (a<b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (a%b == 0) return b;
    else return GCD(b, a%b);
}

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
    int tmp[PIECE_NUM_MAX];
    int cnt[PIECE_NUM_MAX] = {0};
	int i;
    int j;
	int output, a, max = 0;
    a=0;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////

    for (i = 0; i<piece_num; i++) {
        for (j = 0; j<piece_num; j++) {
            if (i == j) continue;
            if (GCD(input_data[i], input_data[j])==1) {
                cnt[i]++;
            }
        }
    }

    for (i = 0; i<piece_num; i++) {
        if (max < cnt[i]) {
            max = cnt[i];
            output = input_data[i];
        }
    }

	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}