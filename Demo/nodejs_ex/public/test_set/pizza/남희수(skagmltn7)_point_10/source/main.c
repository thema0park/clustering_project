#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
	int gcd;
    scanf("%d", &piece_num);
    if((piece_num >= 3) && (piece_num <= 49)&&(piece_num % 2 != 0)){
	    for (i = 0; i < piece_num; i++)
		    scanf("%d", &input_data[i]);
	////////////////////////////////////////
    


	////////////////////////////////////////

	printf("3\n",output);
    }
	return 0;
}