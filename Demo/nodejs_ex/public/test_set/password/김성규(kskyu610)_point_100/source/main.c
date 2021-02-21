#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int i, n, m;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
    int rowSum[3];
    int columnSum[3];
    int sum[2]; 
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    
   rowSum[0] = mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2];
   rowSum[1] = mabangjin[1][0] + mabangjin[1][1] + mabangjin[1][2];
   rowSum[2] = mabangjin[2][0] + mabangjin[2][1] + mabangjin[2][2];
   columnSum[0] = mabangjin[0][0] + mabangjin[1][0] + mabangjin[2][0];
   columnSum[1] = mabangjin[0][1] + mabangjin[1][1] + mabangjin[2][1];
   columnSum[2] = mabangjin[0][2] + mabangjin[1][2] + mabangjin[2][2];
   sum[0] = mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2];
   sum[1] = mabangjin[0][2] + mabangjin[1][1] + mabangjin[2][0];
    
    if(rowSum[0] == rowSum[1]){
        if(rowSum[1] == rowSum[2])
                if(rowSum[2] == columnSum[0])
                    if(columnSum[0] == columnSum[1])
                        if(columnSum[1] == columnSum[2])
                            if(columnSum[2] == sum[0])
                                if(sum[0] == sum[1])
                                    answer = 'O';
    }
    else
        answer = 'X';
	
	printf("%c\n",answer);

	return 0;
}
