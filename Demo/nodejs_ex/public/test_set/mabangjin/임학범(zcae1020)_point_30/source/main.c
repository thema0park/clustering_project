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
    int i,j;
    int flag=0;
    int ga=0;
    int se=0;
    int de=0;
    int deflag=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            int r;
            for(r=0;r<3;r++)
            {
                ga+=mabangjin[i][r];
            }
            for(r=0;r<3;r++)
            {
                se+=mabangjin[r][j];
            }
            if(i==0&&j==0)
            {
                for(r=0;r<3;r++)
                {
                    de+=mabangjin[i+r][j+r];
                }
                deflag=1;
            }
            if(i==0&&j==2)
            {
                for(r=0;r<3;r++)
                {
                    de+=mabangjin[i+r][j-r];
                }
                deflag=1;
            }
            if(i==2&&j==0)
            {
                for(r=0;r<3;r++)
                {
                    de+=mabangjin[i-r][j+r];
                }
                deflag=1;
            }
            if(i==2&&j==2)
            {
               for(r=0;r<3;r++)
                {
                    de+=mabangjin[i-r][j-r];
                }
                deflag=1;
            }
            if(deflag==1)
            {
                if(ga!=se||se!=de||de!=ga)
                {
                    flag=1;
                    break;
                }
            }
            else if(deflag==0)
            {
                if(ga!=se)
                {
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==1)
    {
        answer='X';
    }
    else answer='O';



	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
