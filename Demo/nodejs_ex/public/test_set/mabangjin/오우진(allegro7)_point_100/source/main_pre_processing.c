//오우진(allegro7)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int constant = 0, sum = 0;
	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    // initialized constant
    for(k = 0 ; k < 1; k++){
        for(l = 0; l < MABANGJIN_SIZE; l++){
            sum += mabangjin[k][l];
        }
    }
    constant = sum;

    for(k = 0 ; k < MABANGJIN_SIZE; k++){
        sum = 0;
        for(l = 0; l < MABANGJIN_SIZE; l++){
            sum += mabangjin[k][l];
        }
        if(sum != constant)
            return printf("X\n");
        sum = 0;
        for(l = 0; l < MABANGJIN_SIZE; l++){
            sum += mabangjin[l][k];
        }
        if(sum != constant)
            return printf("X\n");
        sum = mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2];
        if(sum != constant)
            return printf("X\n");
        sum = mabangjin[0][2] + mabangjin[1][1] + mabangjin[2][0];
        if(sum != constant)
            return printf("X\n");
    }

	////////////////////////////////////////

	printf("O\n");

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_L2int_T2_D1i_D2_L2
nt_T2_D1i_D2_D1i_A_D1i_B<_D1i
A_D1i_B<_D1s_E_F3_FOR_C_FOR_D
i_A_D1i_B<_D1i_A_D1i_B<_A_C_F
R_C_FOR_A_D1i_A_D1i_B<_D1i_A_
1i_A_D1i_B<_A_C_FOR_B!=_D1s_E
F3_R_L1_D1i_A_D1i_A_D1i_B<_A_
_FOR_B!=_D1s_E_F3_R_L1_D1i_D1
_D1i_D1i_B+_D1i_D1i_B+_A_B!=_
1s_E_F3_R_L1_D1i_D1i_D1i_D1i_
+_D1i_D1i_B+_A_B!=_D1s_E_F3_R
L1_C_FOR_D1s_E_F3_D1i_R_C_F1_
_
###############################*/
//$//
