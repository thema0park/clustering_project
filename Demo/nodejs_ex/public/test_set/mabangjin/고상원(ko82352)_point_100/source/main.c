#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int sum=0,test,flag=0;
    int x,y;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    for(k=0;k<MABANGJIN_SIZE;k++){ //가로
        for(l=0;l<MABANGJIN_SIZE;l++){
            sum+=mabangjin[k][l];
        }
        if(k==0)
            test=sum;
        else{
            if(sum!=test)
            flag=1;
        }
        sum=0;
    }
    sum=0;
    for(k=0;k<MABANGJIN_SIZE;k++){ //세로
        for(l=0;l<MABANGJIN_SIZE;l++){
            sum+=mabangjin[l][k];
        }
        if(k==0)
            test=sum;
        else{
            if(sum!=test)
            flag=1;
        }
        sum=0;
    }
    sum=0;
    x=y=0;
    for(k=0;k<MABANGJIN_SIZE;k++){
        sum+=mabangjin[x][y];
        x++;
        y++;
    }
    test=sum;
    x=MABANGJIN_SIZE-1;
    y=MABANGJIN_SIZE-1;
    sum=0;
    for(k=0;k<MABANGJIN_SIZE;k++){
        sum+=mabangjin[x][y];
        x--;
        y--;
    }
    if(sum!=test)
    flag=1;
    if(flag==0)
    answer='O';
    else
    answer='X';
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
