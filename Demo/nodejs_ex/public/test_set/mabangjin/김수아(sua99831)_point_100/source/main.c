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

    int i=0, result1 = 0, result2 = 0, result3 = 0, result4 = 0, result5 = 0, result6=0, result7=0, result8=0;
    for(i=0; i<3; i++){
        result1 +=mabangjin[0][i];
    }
    for(i=0; i<3; i++){
        result2 +=mabangjin[1][i];
    }
    for(i=0; i<3; i++){
        result3 +=mabangjin[2][i];
    }
    for(i=0; i<3; i++){
        result4 +=mabangjin[i][0];
    }
    for(i=0; i<3; i++){
        result5 += mabangjin[i][1];
    }
    for(i=0; i<3; i++){
        result6 += mabangjin[i][2];
    }
    result7 = mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2];
    result8 = mabangjin[0][2] + mabangjin[1][1] + mabangjin[2][0];
    int j=0;
	int arr[7] = {result1, result2, result3, result4, result5, result6, result7, result8};
    
    if(arr[i++] == arr[0]) printf("O\n");
    else printf("X\n");

	return 0;
}
