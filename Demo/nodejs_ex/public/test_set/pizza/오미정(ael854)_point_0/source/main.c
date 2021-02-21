#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int gcd(int x, int y)
{
    int k;
    if(x%k==0 && y%k==0)
        return k;
}
int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
	scanf("%d", &piece_num);
    if(piece_num >= 3 && piece_num <= 49 && piece_num%2 == 1)
	{
        for (i = 1; i <= piece_num; i++)
		{
            scanf("%d", &input_data[i]);
           if(gcd(input_data[i], input_data[i+piece_num/2+1])<=1)
            {
              output = input_data[i+piece_num/2+1];
            }
	
    }
	printf("%d\n", output);
    
	return 0;
}
}