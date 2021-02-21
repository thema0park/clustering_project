#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;


			scanf("%d", &mabangjin[k][l]);
			

	
       



    if(mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2] == mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2])
    {
    printf("O");
    }
    if(mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2] == mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2])
    {
    printf("O");
    }
    if( mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0] == mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1])
    {
    printf("O");
    }
    if(mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0] == mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2])
    {
    printf("O");
    }
    if(mabangjin[0][0]+mabangjin[1][1]+mabangjin[1][2] == mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0])
    {
    printf("O");
    }	
    else
    {
	printf("X");
    }
	return 0;
}
