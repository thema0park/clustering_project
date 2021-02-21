#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k=0, l=0;
	int arr[3][3]={0,};
	char answer;

	for (k = 0; k < 3; k++)
	{
		for (l = 0; l < 3; l++)
			scanf("%d", &arr[k][l]);
	}

	////////////////////////////////////////
    //가로의 합 
    int sum_row[3]={0,};
    int sum_col[3]={0,};
    int sum_d[2]={0,};
    int i=0,j=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum_row[i]=arr[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum_col[i]=arr[j][i];
        }
    }

    sum_d[0]=arr[0][0]+arr[1][1]+arr[2][2];
    sum_d[1]=arr[0][2]+arr[1][1]+arr[2][0];

    if(sum_row[0]==sum_row[1]&&sum_row[1]==sum_row[2])
    {
        if(sum_col[0]==sum_col[1]&&sum_col[1]==sum_col[2])
        {
            if(sum_d[0]==sum_d[1])
            {
                if(sum_d[0]==sum_col[0]&&sum_col[0]==sum_row[0])
                {
                    answer='O';
                    
                    printf("%c\n",answer);
                }
                else
                {
                    answer='X';
                    printf("%c\n",answer);
                }
            }
        }
    }

    


   




	////////////////////////////////////////

	

	return 0;
}
