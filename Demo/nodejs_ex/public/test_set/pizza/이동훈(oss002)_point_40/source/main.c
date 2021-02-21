#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int GCD(a,b) {
    int temp;
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a%b == 0)
        return b;
    else
        return GCD(b,a%b);
}

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i,j;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    output = input_data[0];


    for (i = 0; i < piece_num-1; i++) {
        for (j = i + 1; j < piece_num; j++) {
            if(GCD(input_data[i],input_data[j]) == 1) {
                output = input_data[i];
            }
        }
    }




	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}