#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l, i=0, j=0, m=0;
	int mbj[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer='O';

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mbj[k][l]);
	}

	////////////////////////////////////////
    int sum=mbj[0][0]+mbj[0][1]+mbj[0][2], asum=0;
    for(i=0;i<3;i++){
        asum=0;
        for(j=0;j<3;j++){
            asum += mbj[i][j];
        }
        if(sum!=asum) answer='X';
    }
    for(i=0;i<3;i++){
        asum=0;
        for(j=0;j<3;j++){
            asum+=mbj[j][i];
        }
        if(sum!=asum) answer='X';
    }
    asum=0;
    asum = mbj[0][0]+mbj[1][1]+mbj[2][2];
    if(sum!=asum) answer='X';
    asum = mbj[0][2]+mbj[1][1]+mbj[2][0];
    if(sum!=asum) answer='X';
	printf("%c\n",answer);

	return 0;
}
