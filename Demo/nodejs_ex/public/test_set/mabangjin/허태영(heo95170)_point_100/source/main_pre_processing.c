//허태영(heo95170)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int sum1[10]={0,};
    int sum2[10]={0,};
    int sum3 = 0;
    int sum4 = 0;
    int sum_tmp = 0;

    int cmp;

	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    
    for(k = 0; k < MABANGJIN_SIZE; k++) {
        for(l = 0; l < MABANGJIN_SIZE; l++) {
        sum1[k] += mabangjin[k][l];
        }
    }
    
    for(k = 0; k < MABANGJIN_SIZE; k++) {
        for(l = 0; l <MABANGJIN_SIZE; l++) {
            sum2[k] += mabangjin[l][k];
        }
    }

    for(k = 0; k < MABANGJIN_SIZE; k++) {
        sum3 += mabangjin[k][k];
    }

    for(k = 0; k < MABANGJIN_SIZE; k++) {
        sum4 += mabangjin[2 - k][2 - k];
    }

    for(k = 0; k < MABANGJIN_SIZE - 1; k++) {
        if(sum1[k] != sum1[k + 1]) {
            printf("X\n");
            return 0;
        }
        if(sum2[k] != sum2[ k + 1]) {
            printf("X\n");
            return 0;
        }

        if(sum1[k] != sum2[k]) {
            printf("X\n");
            return 0;
        }

        if(sum1[0] != sum3) {
            printf("X\n");
            return 0;
        }

        if(sum1[0] != sum4) {
            printf("X\n");
            return 0;
        }

        printf("O\n");
        return 0;

    }




	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
int_T2_D1i_D1i_D2_L2int_T2_D1
_D2_L2int_T2_D1i_D2_L2int_T2_
1i_D2_L2int_T2_D2_L2int_T2_D1
_D1i_D2_D1i_A_D1i_B<_D1i_A_D1
_B<_D1s_E_F3_FOR_C_FOR_D1i_A_
1i_B<_D1i_A_D1i_B<_A_C_FOR_C_
OR_D1i_A_D1i_B<_D1i_A_D1i_B<_
_C_FOR_C_FOR_D1i_A_D1i_B<_A_C
FOR_D1i_A_D1i_B<_D1i_B-_D1i_B
_A_C_FOR_D1i_A_D1i_D1i_B-_B<_
1i_B+_B!=_D1s_E_F3_D1i_R_C_L1
D1i_B+_B!=_D1s_E_F3_D1i_R_C_L
_B!=_D1s_E_F3_D1i_R_C_L1_D1i_
!=_D1s_E_F3_D1i_R_C_L1_D1i_B!
_D1s_E_F3_D1i_R_C_L1_D1s_E_F3
D1i_R_C_FOR_D1i_R_C_F1_1_
###############################*/
//$//
