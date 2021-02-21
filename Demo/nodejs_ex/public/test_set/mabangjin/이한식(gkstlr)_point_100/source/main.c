#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int sum1=0;
    int sum2=0;
    int sum3=0;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++){
			scanf("%d", &mabangjin[k][l]);

        sum1+=mabangjin[0][l];
        sum2+=mabangjin[k][0];
        sum3+=mabangjin[k][l];
        
        } 
	}

	////////////////////////////////////////
    
            
if(sum1==sum2 && sum2==sum3)
    answer='O';
else
     answer='X';


	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
