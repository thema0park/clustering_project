#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int i, j;
    int A, val;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    answer='O';
	////////////////////////////////////////
    A=mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];

    for(i=0;i<3;i++){
        val=0;
        for(j=0;j<3;j++){
            val+=mabangjin[i][j];
        }
        
        if(val!=A){
            printf("X\n");
            return 0;
        }
    }

    for(i=0;i<3;i++){
        val=0;
        for(j=0;j<3;j++){
            val+=mabangjin[j][i];
        }
        
        if(val!=A){
            printf("X\n");
            return 0;
        }
    }

    val=0;
    for(i=0;i<3;i++){
       val+=mabangjin[i][i];
    }
    if(val!=A){
            printf("X\n");
            return 0;
     }
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
