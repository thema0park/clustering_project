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
    int i, total[8];
    for(i = 0; i < 8; i++) total[i] = 0;

    for(l = 0; l < MABANGJIN_SIZE; l++ )
    {
        total[0] += mabangjin[0][l];
    }

    for(l = 0; l < MABANGJIN_SIZE; l++ )
    {
        total[1] += mabangjin[1][l];
    }
    
    for(l = 0; l < MABANGJIN_SIZE; l++ )
    {
        total[2] += mabangjin[2][l];
    }
    
    for(k = 0; k < MABANGJIN_SIZE; k++ )
    {
        total[3] += mabangjin[k][0];
    }
    
    for(k = 0; k < MABANGJIN_SIZE; k++ )
    {
        total[4] += mabangjin[k][1];
    }
    
    for(k = 0; k < MABANGJIN_SIZE; k++ )
    {
        total[5] += mabangjin[k][2];
    }
    
    for(l = 0; l < MABANGJIN_SIZE; l++ )
    {
        total[6] += mabangjin[l][l];
    }
    
    for(l = 0; l < MABANGJIN_SIZE; l++ )
    {
        int k;
        k = 2 - l;
        total[7] += mabangjin[k][l];
    }
    int n, test;
    test = 1;
    
    for(n = 0; n < 6; n++)
    {
        if(total[n] == total[n+1]) continue;
        else {
            test--;
            break;
            }
    }
    if (test == 1) answer = 'O';
    else answer = 'X';

	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
