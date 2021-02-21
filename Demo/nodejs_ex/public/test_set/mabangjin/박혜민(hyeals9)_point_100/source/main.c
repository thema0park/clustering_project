#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer='C';
    int result=0;
    int test=0;
    int test_2=0;
    int i;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

    for(i=0;i<3;i++)
        result+=mabangjin[i][0];

    for(k=0;k<3;k++)
    {
        for(l=0;l<3;l++)
        {
            test+=mabangjin[l][k];
        }
         if(test!=result)
            {
                answer='X';
                break;
            }
        test=0;

        for(l=0;l<3;l++)
        {
            test_2+=mabangjin[k][l];
        }
       
        if(test_2!=result)
                {
                      answer='X';
                      break;
                }
        test_2=0;

    }
    
    if(answer!='X')
    {
        if(mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]==result)
            {
                    if(mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0]==result)
                    {
                        answer='O';
                    }
            }

        if(answer!='O')
            answer='X';
    }

	printf("%c\n",answer);

	return 0;
}
