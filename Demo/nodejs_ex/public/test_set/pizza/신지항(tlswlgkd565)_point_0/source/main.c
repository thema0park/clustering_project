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
    int a,b,t;
    int j;
    int flag[50];

    for(i=0;i<piece_num;i++)
    {
        for(j=i+1;j<piece_num;j++)
        {
            a=input_data[i];
            b=input_data[j];
            while(1)
            {
                if(b==0)
                    break;
                else    
                {
                    t=a%b;
                    a=b;
                    b=t;
                }
            }
            if(a>1)
                flag[i]++;
        }
    }

    for(i=0;i<piece_num;i++)
    {
        if(flag[i]==0)
        {
            output=input_data[i];
            break;
        }
    }
    
	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}