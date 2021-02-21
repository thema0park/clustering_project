#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int i, j;
    int Srow = 0;
    int Scross1 = 0;
    int Scross2 = 0; 
    int Scol = 0;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++) {
			scanf("%d", &mabangjin[k][l]);
        }
	}

	////////////////////////////////////////
    Scross1 = mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2];
    Scross2 = mabangjin[0][2] + mabangjin[1][1] + mabangjin[2][0];
    

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Srow += mabangjin[i][j];
            Scol += mabangjin[j][i];
        }
    }
    if ((Srow/3 == Scol/3) && (Scross1 == Scross2) && (Scross1 == Srow/3)) {
        printf("O\n");
    }
    else printf("X");
	////////////////////////////////////////



	return 0;
}
