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
    int i;
    int sum = 0;
    for(i = 0; i<3; i++){
        sum += mabangjin[0][i];
    }
    int result = sum;
    
    int Sarr[7] = {0, };
    for(i = 0; i<3; i++){
        Sarr[0] += mabangjin[1][i];
    }
    for(i = 0; i<3; i++){
        Sarr[1] += mabangjin[2][i];
    }
    for(i = 0; i<3; i++){
        Sarr[2] += mabangjin[i][0];
    }
    for(i = 0; i<3; i++){
        Sarr[3] += mabangjin[i][1];
    }
    for(i = 0; i<3; i++){
        Sarr[4] += mabangjin[i][2];
    }
    int j = 0;
    for(i = 0; i<3; i++){
        Sarr[5] += mabangjin[i][i];
    }
    for(i = 0; i<3; i++){
        Sarr[6] += mabangjin[i][2-i];
    }

    answer = 'O';
    for(i = 0; i<7; i++){
        if(sum != Sarr[i]){
            answer = 'X';
            break;
        }
    }

	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
