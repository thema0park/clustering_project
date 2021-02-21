#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3


int main()
{
	int k, l, hap = 0, fhap=0, i, j;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer = 'O';

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
		    scanf("%d", &mabangjin[k][l]);
	}
    fhap = mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2];

	////////////////////////////////////////
    
    for(i = 1; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            hap += mabangjin[i][j];
        }
        if(hap != fhap) {
            answer = 'X';
            break;
        }
        else hap = 0;
    }
    if(answer == 'O') {
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                hap += mabangjin[j][i];
            }
            if(hap != fhap) {
                answer = 'X';
                break;
            }
            else hap = 0;
        }
    }

    if(answer == 'O') {
        for(i = 0; i < 3; i++) {
            hap += mabangjin[i][i];
        }
        if(hap != fhap) {
            answer = 'X';
        }
        else hap = 0;
        if(answer == 'O') {
            for(i = 0; i < 3; i++) {
                hap += mabangjin[i][2-i];
            }
            if(hap != fhap) {
                answer = 'X';
            }
        }
    }

	////////////////////////////////////////
    
	printf("%c\n",answer);

	return 0;
}
