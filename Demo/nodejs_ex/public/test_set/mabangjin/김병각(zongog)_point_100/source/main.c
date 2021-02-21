#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    //3*3 입력
	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    int rowsum[3]={0};
    int colsum[3]={0};
    
	////////////////////////////////////////
    //대각선
    int temp_one = mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    int temp_two = mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];

    for(k=0;k<MABANGJIN_SIZE;k++){
        for(l=0;l<MABANGJIN_SIZE;l++){
            rowsum[k]+=mabangjin[k][l];
        }//각각 가로줄 합
        for(l=0;l<MABANGJIN_SIZE;l++){
            colsum[k]+=mabangjin[l][k];
        }//각각 세로줄합
    }


    for(k=0;k<MABANGJIN_SIZE;k++){
        for(l=0;l<MABANGJIN_SIZE;l++){
            if(rowsum[k]!=colsum[l]){
                answer = 'X';
            }
            else{
                if(rowsum[l]!=temp_one){
                    answer = 'X';
                }
                else if(rowsum[l]!=temp_two){
                    answer = 'X';
                }
                else{
                    answer ='O';
                }
            }
        }
    }


	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
