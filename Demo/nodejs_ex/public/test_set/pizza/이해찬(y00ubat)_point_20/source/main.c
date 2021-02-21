#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int gcd(int a,int b)
{
    int tmp=0;
    if(abs(a) > abs(b))
    {
        if(!(a % b))
            return 1;
        else{
            return 0;
        }
    }
    else{
        if(!(b % a))
            return 1;
        else{
            return 0;
        }

    }
}

int main()
{
	int piece_num=0;
	int input_data[PIECE_NUM_MAX]={0};
	int i=0,j=0;
	int output;
    int *ptr = NULL;
	scanf("%d", &piece_num);
    ptr = (int *)malloc(sizeof(int)*piece_num);
	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

    for(i=0;i<piece_num;i++)
    {
        for(j=0;j<piece_num;j++)
        {
            if(i == j)
                continue;
             ptr[i] = gcd(input_data[i],input_data[j]);
             if(ptr[i])
                break;
        }
    }

    for(i=0;i<piece_num;i++)
    {
        if(!ptr[i])
            printf("%d\n",input_data[i]);
        
    }

	////////////////////////////////////////



	////////////////////////////////////////

//	printf("%d\n", output);
	return 0;
}