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

    int row[3]={0,0,0};
    int col[3]={0,0,0};
    int di[2]={0,0};
    int i,j=0;
    for(i=0;i<MABANGJIN_SIZE;i++){
        for(j=0;j<MABANGJIN_SIZE;j++){
            row[i]+=mabangjin[i][j];
        }
    }
    for(i=0;i<MABANGJIN_SIZE;i++){
        for(j=0;j<MABANGJIN_SIZE;j++){
            col[i]+=mabangjin[j][i];
        }
    }
    di[0]=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    di[1]=mabangjin[2][0]+mabangjin[1][1]+mabangjin[0][2];
  
    if(di[0]==di[1]&&di[0]==row[0]&&row[0]==row[1]&&row[1]==row[2]&&col[0]==di[0]&&col[0]==col[1]&&col[1]==col[2])
        answer='O';
    else
        answer='X';


	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
