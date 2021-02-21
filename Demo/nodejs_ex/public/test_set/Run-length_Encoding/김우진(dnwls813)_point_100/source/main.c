#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, i;
    int sum1[3]={0},sum2[3]={0},sum3=0,sum4=0,cnt=0;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (i = 0; i < MABANGJIN_SIZE; i++)
	{
		for (k = 0; k < MABANGJIN_SIZE; k++)
		{
            scanf("%d", &mabangjin[i][k]);
        }
	}
    for (i = 0; i < MABANGJIN_SIZE; i++)
	{
		for(k=0;k<MABANGJIN_SIZE;k++)
        {
            sum1[i]+=mabangjin[i][k];
        }
	}
    for(k=0;k<MABANGJIN_SIZE;k++)
    {
        for(i=0;i<MABANGJIN_SIZE;i++)
            sum2[k]+=mabangjin[i][k];
    }
    sum3=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    sum4=mabangjin[2][0]+mabangjin[1][1]+mabangjin[0][2];
    if(sum1[0]==sum1[1])
    cnt++;
    if(sum1[0]==sum1[2])
    cnt++;
    if(sum1[0]==sum1[1])
    cnt++;
    if(sum2[0]==sum2[1])
    cnt++;
    if(sum2[0]==sum2[2])
    cnt++;
    if(sum1[0]==sum2[0])
    cnt++;
    if(sum1[0]==sum3)
    cnt++;
    if(sum3==sum4)
    cnt++;
    if(cnt==8)
        answer='O';
    else
        answer='X';
	printf("%c\n",answer);
	return 0;
}
