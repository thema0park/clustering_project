#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX]={0};
	int i,j;
	int output;
    
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++){
		scanf("%d", &input_data[i]);
    }

    for(i=0;i<piece_num;i++){
        for(j=i+4;j<piece_num;j++){
            if(input_data[i]%input_data[j]!=0){
                output=input_data[j];
            }
            if(input_data[j]%input_data[i]!=0){
                output=input_data[i];
            }
        }
    }

	printf("%d\n", output);
	return 0;
}