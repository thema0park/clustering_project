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

	////////////////////////////////////////
    answer='O';

    int i;
    int a,b,c;
    a=b=c=0;

    for (i=0;i<3;i++){ 
        a=a+mabangjin[i][0];
        b=b+mabangjin[0][i];
        c=c+mabangjin[i][i];
    }
    //printf("%d %d %d", a, b, c);
    if (a==b && b==c & c==a){
        answer='O';
    }
    else{ answer='X'; }

	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
