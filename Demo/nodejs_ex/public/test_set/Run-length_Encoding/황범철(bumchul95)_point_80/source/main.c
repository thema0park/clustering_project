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
    int i, j;
    //가로
    int left[3] = {0,0,0};
    int ss[3] = {0,0,0};
    int cen[3] = {0,0,0};
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++){
            left[i] += mabangjin[i][j];
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++){
            ss[i] += mabangjin[j][i];        
        }
    }
    for(i = 0; i < 3; i++)
    {
        cen[0] += mabangjin[i][i];
    }
    cen[1] = mabangjin[2][0] + mabangjin[1][1] + mabangjin[0][2];
    int ans = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0;k< 2; k++){
                if((left[i] == cen[k]) && (left[i] == ss[j])){
                    answer = 'O';
                    break;
                }
                else{
                    answer = 'X';
                }
            }
            if(answer = 'O')
                break;
        }
        if(answer = 'O')
            break;
    }
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
