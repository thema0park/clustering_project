#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int a1,a2,a3,b1,b2,b3,c1,c2;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

    a1=mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];
    a2=mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2];
    a3=mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2];
    b1=mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0];
    b2=mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1];
    b3=mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2];
    c1=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    c2=mabangjin[2][0]+mabangjin[1][1]+mabangjin[0][2];

    if(a1==a2&&a2==a3&&a3==b1&&b1==b2&&b2==b3&&b3==c1&&c1==c2){
        answer='O';
    }
    else {
        answer='X';
    }

	printf("%c\n",answer);

	return 0;
}
