#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int i,j;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    for(k=0;k<3;k++)
    {
        if(k==0)
        i=mabangjin[k][0]+mabangjin[k][1]+mabangjin[k][2];
        else
        {
            if(i==mabangjin[k][0]+mabangjin[k][1]+mabangjin[k][2])
            {
                continue;
            }
            else
            {answer='X';
            break;
            }
        }
    }
    if(answer!='X')
    {
        for(k=0;k<3;k++)
    {
        if(i==mabangjin[0][k]+mabangjin[1][k]+mabangjin[2][k])
            {
                continue;
            }
            else
            {answer='X';
            break;
            }    
    }
    }
    if(answer!='X')
    {
    
        if((i==mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2])&&(i==mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0]))
            {
                answer='O';
            }
            else
            {answer='X';}    
    
    }

	////////////////////////////////////////



	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
