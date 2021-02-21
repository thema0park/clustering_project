//박원민(satcom1600)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l, i, j, sum, result;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    result = 0;
    for(i = 0; i < MABANGJIN_SIZE; i++) {
        result += mabangjin[0][i];
    }

    for(i = 0; i < MABANGJIN_SIZE; i++) {
        sum = 0;
        for(j = 0; j < MABANGJIN_SIZE; j++) {
            sum += mabangjin[i][j];
        }
        if (sum != result) {
            printf("X\n");
            return 0;
        }
    }
    for(i = 0; i < MABANGJIN_SIZE; i++) {
        sum = 0;
        for(j = 0; j < MABANGJIN_SIZE; j++) {
            sum += mabangjin[j][i];
        }
        if (sum != result) {
            printf("X\n");
            return 0;
        }
    }

    sum = 0;
    for(i = 0; i < MABANGJIN_SIZE; i++) {
        sum += mabangjin[i][i];
    }
    if (sum != result) {
        printf("X\n");
           return 0;
    }

    sum = 0;
    for(i = 0; i < MABANGJIN_SIZE; i++) {
        sum += mabangjin[i][MABANGJIN_SIZE - i - 1];
    }
    if (sum != result) {
        printf("X\n");
           return 0;
    }

    printf("O\n");

	////////////////////////////////////////

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D2_L2i
t_T2_D1i_D1i_D2_D1i_A_D1i_B<_
1i_A_D1i_B<_D1s_E_F3_FOR_C_FO
_D1i_A_D1i_A_D1i_B<_D1i_A_C_F
R_D1i_A_D1i_B<_D1i_A_D1i_A_D1
_B<_A_C_FOR_B!=_D1s_E_F3_D1i_
_C_L1_C_FOR_D1i_A_D1i_B<_D1i_
_D1i_A_D1i_B<_A_C_FOR_B!=_D1s
E_F3_D1i_R_C_L1_C_FOR_D1i_A_D
i_A_D1i_B<_A_C_FOR_B!=_D1s_E_
3_D1i_R_C_L1_D1i_A_D1i_A_D1i_
<_D1i_B-_D1i_B-_A_C_FOR_B!=_D
s_E_F3_D1i_R_C_L1_D1s_E_F3_D1
_R_C_F1_1_
###############################*/
//$//
