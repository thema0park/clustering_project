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
    int a,b,c=1,sum;
    for(a=0;a<MABANGJIN_SIZE;a++)
    {sum=0;
        for(b=0;b<MABANGJIN_SIZE;b++)
        {
           sum= sum+mabangjin[a][b];
        }
     if(sum!=15)
     {
        c=0;
        break;
     }
    }
    for(a=0;a<MABANGJIN_SIZE;a++)
    {sum=0;
        for(b=0;b<MABANGJIN_SIZE;b++)
        {
           sum= sum+mabangjin[b][a];
        }
     if(sum!=15)
     {
        c=0;
        break;
     }
    }
    sum = 0;
    for(a=0;a<MABANGJIN_SIZE;a++)
    {
        for(b=0;b<MABANGJIN_SIZE;b++)
        {
           sum= sum+mabangjin[b][a];
        }
    }
    if(sum!=45)
    {
        c=0;
    }
    if(mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0]!=15)
    {
        c=0;
    }
    if(mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]!=15)
    {
        c=0;
    }
    if(c==0)
    {
        answer='X';
    }
    else if(c==1)
    {
        answer='O';
    }

	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
