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
    int sum=mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];
    answer='O';
    for(k=0; k<MABANGJIN_SIZE; k++)
    {
        if(sum!=mabangjin[k][0]+mabangjin[k][1]+mabangjin[k][2])
        {
            answer='X';
            break;
        }
    }
    for(k=0; k<MABANGJIN_SIZE; k++)
    {
        if(sum!=mabangjin[0][k]+mabangjin[1][k]+mabangjin[2][k])
        {
            answer='X';
            break;
        }
    }
    if(sum!=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2])
        answer='X';
    if(sum!=mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0])
        answer='X';
    
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
