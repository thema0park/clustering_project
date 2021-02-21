#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int gcd(int x, int y)
{
    if(x<y)
    {
        int tmp=x;
        x=y;
        y=tmp;
    }
    if(y==0)
    {
        return x;
    }
    else
    {
        return gcd(y,x%y);
    }
}

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

    int j;
    int k;
    int cnt;
    int pizza[PIECE_NUM_MAX]={0};
	////////////////////////////////////////
    for(i=0;i<piece_num;i++)
    {
        k=(piece_num-1)/2;
        if(gcd(input_data[i+k],input_data[i])==1)
        {
            if(gcd(input_data[i+k+1],input_data[i])!=1)
            {
            printf("%d\n",input_data[i+k]);
            }
            else
            {
                printf("%d\n",input_data[i]);
            }
            break;
        }
    }
	////////////////////////////////////////

	return 0;
}