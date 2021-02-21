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
    int f1 = 0;
    int f2 = 0;
    int f3 = 0;

    int i;
    int t[3] = {0,};
    //가로
    for(i=0; i<3; i++){
        t[i] = mabangjin[i][0] + mabangjin[i][1] + mabangjin[i][2];
    }
    if(t[0] == t[1] && t[1] == t[2]){
        f1 = 1;
    }

    int z;
    int t1[3] = {0,};
    //세로
    for(z=0; z<3; z++){
        t1[z] = mabangjin[0][z] + mabangjin[1][z] + mabangjin[2][z];
    }
    if(t1[0] == t1[1] && t1[1] == t1[2]){
        f2 = 1;
    }

    if (f1 == 1 && f2 == 1){
        printf("O\n");
    }else{
        printf("X\n");
    }


	////////////////////////////////////////

	//printf("%c\n", &answer);

	return 0;
}
