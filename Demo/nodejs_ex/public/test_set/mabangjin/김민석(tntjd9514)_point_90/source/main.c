#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int sum=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
    char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
/*
    for (k = 0; k < 1; k++){
        for (l = 0; l < MABANGJIN_SIZE; l++){
            sum = sum + mabangjin[k][l];
        }    
    }
    for (k = 1; k < 2; k++){
        for (l = 0; l < MABANGJIN_SIZE; l++){
            sum2 = sum2 + mabangjin[k][l];
        }    
    }

    for (k = 2; k < 3; k++){
        for (l = 0; l < MABANGJIN_SIZE; l++){
            sum3 = sum3 + mabangjin[k][l];
        }    
    }
    for (l = 0; l < 1; l++){
        for (k = 0; k < MABANGJIN_SIZE; k++){
            sum4 = sum4 + mabangjin[k][l];
        }    
    }    
    for (l = 1; l < 2; l++){
        for (k = 0; k < MABANGJIN_SIZE; k++){
            sum5 = sum5 + mabangjin[k][l];
        }    
    }
    for (l = 2; l < 3; l++){
        for (k = 0; k < MABANGJIN_SIZE; k++){
            sum6 = sum6 + mabangjin[k][l];
        }    
    }*/ 
    sum = mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];
    sum2 = mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2];
    sum3 = mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2];
    sum4 = mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0];
    sum5 = mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1];
    sum6 = mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2];
    sum7 = mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    sum8 = mabangjin[2][0]+mabangjin[1][1]+mabangjin[0][2];

    if(sum==sum2){
        if(sum2==sum3){
            if(sum3==sum4){
                if(sum4==sum5){
                    if(sum5=sum6){
                        if(sum6==sum7){
                            if(sum7==sum8){
                                answer='O';
                            }
                        }
                    }
                }
            }
        }
    }
    else{
        answer='X';
    }

    printf("%c\n", answer);

	return 0;
}
