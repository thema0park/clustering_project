#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int count[9]; //01234567 총 8개 비교
    int num;
	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    count[0] = mabangjin[0][0]+ mabangjin[0][1]+ mabangjin[0][2];
    count[1] = mabangjin[1][0]+ mabangjin[1][1]+ mabangjin[1][2];
    count[2] = mabangjin[2][0]+ mabangjin[2][1]+ mabangjin[2][2];
    count[3] = mabangjin[0][0]+ mabangjin[1][0]+ mabangjin[2][0];
    count[4] = mabangjin[0][1]+ mabangjin[1][1]+ mabangjin[2][1];
    count[5] = mabangjin[0][2]+ mabangjin[1][2]+ mabangjin[2][2];
    count[6] = mabangjin[0][0]+ mabangjin[1][1]+ mabangjin[2][2];
    count[7] = mabangjin[2][0]+ mabangjin[1][1]+ mabangjin[0][2];
    answer = 'X';
    num = count[0];

    if (count[1] == num && count[2] == num && count[3] == num && count[4] == num && count[5] == num && count[6] == num && count[7] == num)
    {
    answer = 'O';}
    
    
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
