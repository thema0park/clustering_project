#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

    //////////////////////////////////////////
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
    int i;

    for(i=0;i<MABANGJIN_SIZE;i++)
    {
    a = a + mabangjin[0][i];
    b = b + mabangjin[1][i];
    c = c + mabangjin[2][i];
    d = d + mabangjin[i][0];
    e = e + mabangjin[i][1];
    f = f + mabangjin[i][2];
    g = g + mabangjin[i][i];
    h = h + mabangjin[i][2-i];
    }

    if(a==b && a==c && a==d && a==e && a==f && a==g && a==h){
    answer = 'O';
    }
    else{
    answer ='X';
    }

    //////////////////////////////////////////


	printf("%c\n",answer);

	return 0;
}
