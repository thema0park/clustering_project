#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int a, b, c, d, e, f, g, h;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	
 a=(mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2]);
 b=(mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2]);
 c=(mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2]);
 d=(mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0]);
 e=(mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1]);
 f=(mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2]);
 g=(mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0]);
 h=(mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]);


if(a==b&& b==c && c==d&& d==e && e==f && f==g && g==h) {answer='O';}
 else {answer='X';}






	printf("%c\n",answer);

	return 0;
}
