#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int tmp1=0;
    int tmp2=0;
    int tmp3=0;
    int tmp4=0;
    int tmp5=0;
    int tmp6=0;
    int tmp7=0;
    int tmp8=0;

    
	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    
	//////////////////////////////////////// 
    /*
    for (k = 0; k < MABANGJIN_SIZE; k++)
    {
        scanf("%d %d %d", &mabangjin[k][0],&mabangjin[k][1],&mabangjin[k][2]);
    }
    */
    tmp1=mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];
    tmp2=mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2];
    tmp3=mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2];

    tmp4=mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0];
    tmp5=mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1];
    tmp6=mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2];

    tmp7=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    tmp8=mabangjin[2][0]+mabangjin[1][1]+mabangjin[0][2];
    /*
    printf("%d ",tmp1);
    printf("%d ",tmp2);
    printf("%d ",tmp3);
    printf("%d ",tmp4);
    printf("%d ",tmp5);
    printf("%d ",tmp6);
    printf("%d ",tmp7);
    printf("%d ",tmp8);
    */
    if (tmp1==tmp2 && tmp3==tmp4 && tmp5==tmp6 && tmp7==tmp8) answer='O';
    else answer = 'X';
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
