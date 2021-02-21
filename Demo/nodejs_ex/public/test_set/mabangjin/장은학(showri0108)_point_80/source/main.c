#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
    int i,j;
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE]; // 3*3 행렬
	int answer = 0;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]); // 입력
	}
    
    //j = mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];

    //for(i = 0; i < 3; i++)
    //{
        if((mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2]) == (mabangjin[1][0] + mabangjin[1][1] + mabangjin[1][2]) && (mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2]) == (mabangjin[2][0] + mabangjin[2][1] + mabangjin[2][2]) && (mabangjin[1][0] + mabangjin[1][1] + mabangjin[1][2]) == (mabangjin[2][0] + mabangjin[2][1] + mabangjin[2][2]))
            if((mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0]) == (mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1]) && (mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0]) == (mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2]) && (mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2]) == (mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1]))
                if((mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]) == (mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0]) && (mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2]) == (mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]) && (mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0]) == (mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]))
                            answer++;
    //}

    if(answer = 1)
         printf("O\n");
    else
        printf("X");    

	return 0;
}
//if(((mabangjin[i][0] + mabangjin[i][1]+ mabangjin[i][2]) == j) && ((mabangjin[0][i]+mabangjin[1][i]+mabangjin[2][i]) == j) && ((mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]) == j) && ((mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0]) == j))
//if((mabangjin[i][0] + mabangjin[i][1]+ mabangjin[i][2]) == (mabangjin[0][i]+mabangjin[1][i]+mabangjin[2][i]) == (mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]) == (mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0]))