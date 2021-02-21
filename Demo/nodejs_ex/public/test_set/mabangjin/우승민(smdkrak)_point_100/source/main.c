#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int j;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

    int addr1=0,addr2=0,addr3=0;
    int addc1=0,addc2=0,addc3=0;
    int addx1=0,addx2=0;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////

  
        addr1 = mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];
        addr2 = mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2];
        addr3 = mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2];
        addc1 = mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0];
        addc2 = mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1];
        addc3 = mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2];

    addx1 = mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    addx2 = mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];
	////////////////////////////////////////
    if(addr1==addr2 && addr2==addr3 && addr1==addr3)
    {
        if(addc1==addc2 && addc2==addc3 && addc1==addc3 && addr1 == addc1 && addr1 == addc2 && addr1 == addc3)
        {
            if(addx1 == addx2 && addx1 == addc1 && addx2 == addc1)
            answer = 'O';
            else
            answer = 'X';
        }
        else
        answer = 'X';
    }
    else
    answer = 'X';

	printf("%c\n",answer);

	return 0;
}
