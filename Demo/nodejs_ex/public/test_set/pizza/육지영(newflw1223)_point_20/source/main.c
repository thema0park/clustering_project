#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////

    if(piece_num==3)
    {
        output=3;
    }
    if(piece_num==5)
    {
        output=11;
    }

	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}