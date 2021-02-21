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

    int m = mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2];
   
    if(mabangjin[1][0] + mabangjin[1][1] + mabangjin[1][2] == m){
         if(mabangjin[2][0] + mabangjin[2][1]+ mabangjin[2][2] == m){
            if(mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2] == m){
                printf("O\n");
            }
        }
    }
    else{
        printf("X\n");
    }
    

	////////////////////////////////////////

	return 0;
}
