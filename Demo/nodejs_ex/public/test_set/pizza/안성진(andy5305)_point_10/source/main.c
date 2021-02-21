#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
    int comp_a;
    int j;
    int flag=0;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    for(i=0;i<piece_num;i++)
    {
        comp_a=input_data[(i+(piece_num/2))%piece_num];
        for(j=2;j<=input_data[i];j++)
        {
            if(input_data[i]%j==0&&comp_a%j==0)
            {
            flag=1;
            break;
            }
        }
        if(flag==0)
        {
            comp_a=input_data[(i+1+(piece_num/2))%piece_num];
            for(j=2;j<=input_data[i];j++)
            {
            if(input_data[i]%j==0&&comp_a%j==0)
            {
                flag=1;
                break;
            }
            }
        }
        if(flag==0)
        {
        output=input_data[i];
        break;
        }
    }


	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}