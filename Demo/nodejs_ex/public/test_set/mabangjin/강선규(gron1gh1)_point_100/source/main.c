#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int check = 0;
    int sum = 0;
	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    
	////////////////////////////////////////
    answer = 'O';
    check = 0;
    for(k = 0;k<3;k++)
    {
        sum = 0;
        for(l = 0;l<3;l++)
        {
            sum+=mabangjin[k][l];
            
        }
       // printf("%d %d\n",check ,sum);
        if(check != sum && check)
            answer = 'X';
        check = sum;
    }

    for(k = 0;k<3;k++)
    {
        sum = 0;
        for(l = 0;l<3;l++)
        {
            sum+=mabangjin[l][k];
            
        }
        //printf("%d %d\n",check ,sum);
        if(check != sum && check)
            answer = 'X';
        check = sum;
    }

    
    sum = 0;
    for(k = 0;k<3;k++)
        sum+=mabangjin[k][k];
    if(check != sum  && check) 
        answer = 'X';
    check = sum;
    sum = 0;
    for(k = 2;k>=0;k--)
        sum+=mabangjin[k][k];
    if(check != sum  && check)
        answer = 'X';
        
	////////////////////////////////////////
    
	printf("%c\n",answer);

	return 0;
}
