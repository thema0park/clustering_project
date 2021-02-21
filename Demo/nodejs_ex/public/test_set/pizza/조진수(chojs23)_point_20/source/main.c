#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <math.h>
#define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
    int count[50];
	int i;
    int k;
    int t;
	int output;
	scanf("%d", &piece_num);
    
	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    for(i=0;i<piece_num-1;i++)
    {
        for(k=1;k<piece_num-i;k++){
            if(input_data[i]>input_data[i+k]){
                t=input_data[i+k]%input_data[i];
                if(t!=0)
                count[i]++;
            }
            else if(input_data[i]<input_data[i+k]){
                t=input_data[i+k]%input_data[i];
                if(t!=0)
                count[i]++;
            }

            
        }
        if(count[i]>piece_num-1)
            output=input_data[i];
    }
    

	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}