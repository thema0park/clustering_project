#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l,case1,case2,case3,case4;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    for(k=0;k<3;k++)
    {
        case1=mabangjin[k][0]+mabangjin[k][1]+mabangjin[k][2];
    }
    for(l=0;l<3;l++)
    {
        case2=mabangjin[0][l]+mabangjin[1][l]+mabangjin[2][l];
    }
    case3=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    case4=mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];

	////////////////////////////////////////
    if((case1==case2)&&(case2==case3)&&(case3==case4))
    {
        answer='O';
    }
    else
    {
        answer='X';
    }
	printf("%c\n",answer);

	return 0;
}
