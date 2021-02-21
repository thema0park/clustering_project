#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k,l,i;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE]={0};
    int sum=0, cnt=0;
    char result = 0;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    for(i=0; i<3; i++){
        sum += mabangjin[0][i];
    }
    if(sum ==(mabangjin[0][1] + mabangjin[0][2] + mabangjin[0][0])) cnt++;
    if(sum ==(mabangjin[1][1] + mabangjin[1][2] + mabangjin[1][0])) cnt++;
    if(sum ==(mabangjin[2][1] + mabangjin[2][2] + mabangjin[2][0])) cnt++;
    if(sum ==(mabangjin[1][0] + mabangjin[2][0] + mabangjin[0][0])) cnt++;
    if(sum ==(mabangjin[2][1] + mabangjin[1][1] + mabangjin[0][1])) cnt++;
    if(sum ==(mabangjin[2][2] + mabangjin[1][2] + mabangjin[0][2])) cnt++;
    if(sum ==(mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2])) cnt++;
    if(sum ==(mabangjin[0][2] + mabangjin[1][1] + mabangjin[2][0])) cnt++;
  
  
    if(cnt ==8)
    {
        result = 'O';
    }
    else{
        result = 'X';
    }
    printf("%c\n",result);
    return 0;
}
