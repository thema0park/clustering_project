#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l,i;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int first=0,sec=0,third=0,first_y=0,sec_y=0,third_y=0,cross1=0,cross2=0;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    for(i=0; i<3; i++)
    {
        first+=mabangjin[0][i];
    
        sec+=mabangjin[1][i];

        third+=mabangjin[2][i];
///////@@@@@@@@@@@@@@@@@@
        first_y+=mabangjin[i][0];

        sec_y+=mabangjin[i][1];

        third_y+=mabangjin[i][2];

        cross1+=mabangjin[i][i];
    }
    cross2=mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];
	////////////////////////////////////////

    if(first==sec && sec==third && first_y==sec_y && sec_y==third_y && cross1 == cross2)
    {
            answer='O';
    }
    else
    
    {
        answer='X';
    }
	printf("%c\n",answer);

	return 0;
}
