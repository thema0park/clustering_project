//유대하(ulysses94)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
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
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D1i_D2_L2int_T2_D1
_D2_L2int_T2_D1i_D2_L2int_T2_
1i_D2_L2int_T2_D1i_D1i_D2_D1i
A_D1i_B<_D1i_A_D1i_B<_D1s_E_F
_C_FOR_C_FOR_D1i_D1i_D1i_D1i_
+_D1i_D1i_B+_A_D1i_D1i_D1i_D1
_B+_D1i_D1i_B+_A_D1i_A_D1i_B<
D1i_A_D1i_B<_A_A_C_FOR_C_FOR_
1i_B/_D1i_B/_B==_B==_B&&_D1i_
/_B==_B&&_D1s_E_F3_C_D1s_E_F3
L1_D1i_R_C_F1_1_
###############################*/
//$//
