#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l,a=2,b=2,c=2,x;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
x=mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];
	////////////////////////////////////////
    int i=0;
    int y=0;
    while(i<3){
    y=0;
    y=mabangjin[i][0]+mabangjin[i][1]+mabangjin[i][2];
        if(x==y) a=1;
        else a=0;
    i++;
    }
    int n=0;
    int z=0;
    while(n<3){
    z=0;
    z=mabangjin[0][n]+mabangjin[1][n]+mabangjin[2][n];
     if(x==z) {b=1;}
        else{ b=0;}
        n++;
    }
    if((mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2])==x){ c=1;}
    else if((mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0])==x){ c=1;}
    else {c=0;}
    if(a==1&&b==1&&c==1){printf("O\n");}
    else {printf("X\n");}
	return 0;
}
