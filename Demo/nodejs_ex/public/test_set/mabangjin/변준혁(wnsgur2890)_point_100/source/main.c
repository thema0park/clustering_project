#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int sum;
    int Sum1[3] = { 0 }; // 가로
    int Sum2[3] = { 0 }; // 세로
    int Sum3[2] = { 0 }; // 대각선
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE]; // 마방진[3][3]
	char answer = 'O'; // 맞으면 O 아니면 X

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	} // 마방진 입력받음

	//////////////////////////////////////// 마방진맞는지 확인
    //가로
    for(k=0; k<3; k++){
        sum = 0;
        for(l=0; l<3; l++){
            sum += mabangjin[k][l];
        }
        Sum1[k] = sum;  
    }
    if(Sum1[0]!=Sum1[1] || Sum1[1]!=Sum1[2]) answer = 'X';

    //세로
    for(l=0; l<3; l++){
        sum = 0;
        for(k=0; k<3; k++){
            sum += mabangjin[k][l];
        }
        Sum2[k] = sum;     
    }
    if(Sum2[0]!=Sum2[1] || Sum2[1]!=Sum2[2]) answer = 'X';

    //대각선
    Sum3[0] = mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2];
    Sum3[1] = mabangjin[0][2] + mabangjin[1][1] + mabangjin[2][0];
    if(Sum3[0] != Sum3[1]) answer = 'X';
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
