#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
    int save = 0;
    int ans = 0;
    int corr = 0;
	char answer = 'O';

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    for(k = 0; k < 3; k++) {
        save += mabangjin[k][0];
    }
    for(k = 1; k < 3; k++) {
        ans = 0;
        for(l = 0; l < 3; l++) {
            ans += mabangjin[k][l];
        }
        if(ans != save) {
            corr = 1;
            break;
        }
    }

    for(k = 0; k < 3; k++) {
        if(corr == 1) break;
        ans = 0;
        for(l = 0; l < 3; l++) {
            ans += mabangjin[l][k];
        }
        if(ans != save) {
            corr = 1;
            break;
        }
    }

    if(corr == 0) {
        ans = 0;
        ans = ans + mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2];
        if(ans != save) corr = 1;
    }

    if(corr == 0) {
        ans = 0;
        ans = ans + mabangjin[2][0] + mabangjin[1][1] + mabangjin[0][2];
        if(ans != save) corr = 1;
    }    
    

	////////////////////////////////////////
    if(corr == 1) answer = 'X';
	printf("%c\n",answer);

	return 0;
}
