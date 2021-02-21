#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
    int j,temp;
	scanf("%d", &piece_num); //피자조각갯수

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]); //각 피자에 적힌 수

	////////////////////////////////////////
    

	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}
// 1 보다 큰 최대공약수 