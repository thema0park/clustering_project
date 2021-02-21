#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int arr[MABANGJIN_SIZE][MABANGJIN_SIZE];
    int i=0, j=0;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &arr[k][l]);
	}
	////////////////////////////////////////
    const int sum = arr[0][1] + arr[0][2] + arr[0][0];
    int count = 0;
    int com = 0;
    int com2 = 0;

    for(i=0; i<3;i++){
        com = 0;
        com2 = 0;
        for(j=0; j<3; j++){
            com += arr[i][j];
            com2 += arr[j][i];

        }
        if((sum != com) || (sum != com2)){
            printf("X\n");
            return 0;
        }
        if(sum != com2){
            printf("X\n");
            return 0;
        }
    }
    if(sum != arr[0][0]+arr[1][1]+arr[2][2]){
        printf("X\n");
        return 0;
    }
    if(sum != arr[0][2] + arr[1][1] + arr[2][0]){
        printf("X\n");
        return 0;
    }
    printf("O\n");
   
	////////////////////////////////////////
	return 0;
}
