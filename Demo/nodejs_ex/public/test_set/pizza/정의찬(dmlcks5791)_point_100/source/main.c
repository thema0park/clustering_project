#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define PIECE_NUM_MAX 50

int gcd(int a, int b)
{
    int ret;

    if(b == 0)
        return a;
    ret = gcd(b, a % b);
    return ret;
}

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i, j;
	int output;
    int jump;
    int cur, next;
    int flag;
	scanf(" %d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf(" %d", &input_data[i]);

	////////////////////////////////////////
    jump = piece_num / 2;

    for(i = 0; i < piece_num; i++)
    {
        flag = 1;
        for(j = 1; j < jump && flag; j++)
        {
            cur = (i + j) % piece_num;
            next = (cur + jump) % piece_num;
            if(gcd(input_data[cur], input_data[next]) == 1)
                flag = 0;
        }
        if(flag)
        {
            output = input_data[i];
            break;
        }
    }
	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}