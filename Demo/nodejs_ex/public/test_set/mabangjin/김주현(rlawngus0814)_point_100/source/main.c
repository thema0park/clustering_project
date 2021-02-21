#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

    k=0;
    l=0;
    //가로
    int R1=0,R2=0,R3=0;
    for(l=0;l<3;l++)
    {
        R1=R1+mabangjin[k][l];
    }
    k=1;
    for(l=0;l<3;l++)
    {
        R2=R2+mabangjin[k][l];
    }
    k=2;
    for(l=0;l<3;l++)
    {
        R3=R3+mabangjin[k][l];
    }
    
    //가로 판별
    if((R1!=R2)||(R2!=R3))
    {
        printf("X\n");
        return 0;
    }

    //세로
    k=0;
    l=0;

     for(l=0;l<3;l++)
    {
        R1=R1+mabangjin[l][k];
    }
    k=1;
    for(l=0;l<3;l++)
    {
        R2=R2+mabangjin[l][k];
    }
    k=2;
    for(l=0;l<3;l++)
    {
        R3=R3+mabangjin[l][k];
    }

    //세로 판별
    if((R1!=R2)||(R2!=R3))
    {
        printf("X\n");
        return 0;
    }

	////////////////////////////////////////대각선
    R1=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    R2=mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];
    
    if(R1!=R2)
    {
        printf("X\n");
        return 0;
    }

    printf("O\n");


	////////////////////////////////////////


	return 0;
}
