#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int check=0,sum=0,ch_sum=0;
	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////

    answer='O';
    //가로
   for(k=0;k< MABANGJIN_SIZE;k++)
   {
       sum=0;
       for (l = 0; l < MABANGJIN_SIZE; l++)
       {
           sum+=mabangjin[k][l];
       }
       if(ch_sum==0)
       {
           ch_sum=sum;
       }
       else if(ch_sum!=sum)
       {
        answer='X';
        break;
       }
   }
    //세로
    if(answer!='X')
    {
       
        for(k=0;k< MABANGJIN_SIZE;k++)
        {
             sum=0;
            for (l = 0; l < MABANGJIN_SIZE; l++)
            {
                sum+=mabangjin[l][k];
            }
            if(ch_sum!=sum)
            {
                answer='X';
                break;
            }
        }
    }
    //대각선
    if(answer!='X')
    {   
        sum=0;
       
        for(k=0;k< MABANGJIN_SIZE;k++)
        {
            sum+=mabangjin[k][k];   
            
        }
        if(ch_sum!=sum)
         {
            answer='X';
        }
    }
    if(answer!='X')
    {   
        sum=0;
       
        for(k=0;k< MABANGJIN_SIZE;k++)
        {
            sum+=mabangjin[k][MABANGJIN_SIZE-k-1];   
            
        }
        if(ch_sum!=sum)
         {
            answer='X';
        }
    }

	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
