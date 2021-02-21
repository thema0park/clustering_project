#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l, i, j;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int col[3] = {0,}, row[3]={0,}, tr[2]={0,};

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}


	////////////////////////////////////////
    for(i=0;i<MABANGJIN_SIZE;i++)
    {
        for(j=0;j<MABANGJIN_SIZE;j++)
        {
            col[i] += mabangjin[i][j];
            row[i] += mabangjin[j][i];
        }
    }
    for(i=0;i<MABANGJIN_SIZE;i++)
    {
        tr[0] += mabangjin[i][i];
    }
    for(i=0;i<MABANGJIN_SIZE;i++)
    {
        tr[1] += mabangjin[i][2-i];
    }

    answer = 'O';
    for(i=0;i<MABANGJIN_SIZE;i++)
    {
        if(col[i] != col[2-i]) answer = 'X';
        if(row[i] != row[2-i]) answer = 'X';
    }
    if(tr[0] != tr[1]) answer = 'X';

    if(answer = 'O')
    {
        for(i=0;i<MABANGJIN_SIZE;i++)
        {
            for(j=0;j<MABANGJIN_SIZE;j++)
            {
                if(col[i] != row[j]) answer = 'X';
            }
        }
    }

    if(answer = 'O')
    {
        for(i=0;i<2;i++)
        {
            for(j=0;j<MABANGJIN_SIZE;j++)
            {
                if(tr[i] != row[i]) answer = 'X';
            }
        }
    }


	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
