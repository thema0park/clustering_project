#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
    int a[8] = { 0 };
	int k, l;
    int count=0;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

    for (l=0 ; l<MABANGJIN_SIZE ; l++)
    {
        a[0] += mabangjin[0][l];
        a[1] += mabangjin[1][l];
        a[2] += mabangjin[2][l];
    }

    for (l=0 ; l<MABANGJIN_SIZE ; l++)
    {
        a[3] += mabangjin[l][0];
        a[4] += mabangjin[l][1];
        a[5] += mabangjin[l][2];
    }
    a[6] = mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2];
    a[7] = mabangjin[2][0] + mabangjin[1][1] + mabangjin[0][2];

    for (l=1 ; l<=7 ; l++)
    {
        if (a[0] == a[l]) count++;
    }
    if (count==7) answer = 'O';
    else answer = 'X';
    
	printf("%c\n",answer);

	return 0;
}
