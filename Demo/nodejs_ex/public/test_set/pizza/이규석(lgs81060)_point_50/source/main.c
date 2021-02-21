#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX]={0};
    int count[49]={0};
    int bigyo;
	int i,j,k;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

    for(i=0; i < piece_num-1;i++)
    {
        for(j=i+1; j<piece_num;j++)
        {
            for(k=2;k<=input_data[i];k++)
            {
                if(input_data[i]%k==0  && input_data[j]%k==0)
                {
                    count[i]++;
                    count[j]++;
                    break;
                }
            }
        }

    }
    for(i = 0;i<piece_num;i++)
    {
        if(count[i]==0)
        {
                output = input_data[i];
                printf("%d\n", output);
                return 0;
        } 
    }
    output = input_data[2];


	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}