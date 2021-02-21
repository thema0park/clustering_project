#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
    
    int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0;
    int count=0;
	

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    
    
        for(l=0;l<MABANGJIN_SIZE;l++)
        {
            sum1+=mabangjin[0][l];
            sum2+=mabangjin[1][l];
            sum3+=mabangjin[2][l];
            sum4+=mabangjin[l][0];
            sum5+=mabangjin[l][1];
            sum6+=mabangjin[l][2];
            sum7+=mabangjin[l][l];
            sum8+=mabangjin[l][2-l];     //02 11 20
        }
        if(sum1==sum2 && sum1==sum3 && sum1==sum4 && sum1==sum5 && sum1==sum6 && sum1==sum7 && sum1==sum8)
        {
            printf("O\n");
        }

        else
        {
            printf("X\n");
        }

        
    

	////////////////////////////////////////



	////////////////////////////////////////


	return 0;
}
