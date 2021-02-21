#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    int prime[PIECE_NUM_MAX];
    /*
    int j=0;
    int k=0;
    int l=0;
    int point=0;
    int 
    for (;k<piece_num;k++){
        for (;j<input_data[k];j++){
            if (inout_data[k]%j==0)
                point++;
        }
        if (point==0){
            prime[l]=input_data[k];                //소수이면 prime 배열에 순서대로 저장
            l++;
        }
    }
    */


    output=input_data[0];



	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}