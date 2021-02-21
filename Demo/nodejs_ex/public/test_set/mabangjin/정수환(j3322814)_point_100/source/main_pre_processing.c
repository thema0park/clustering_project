//정수환(j3322814)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int re[8];

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    
    re[6] = mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    re[7] = mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];

	////////////////////////////////////////
    for (k = 0; k < MABANGJIN_SIZE; k++)
	{
        re[k] = mabangjin[0][k]+mabangjin[1][k]+mabangjin[2][k];
	}
    for (k = 0; k < MABANGJIN_SIZE; k++)
	{
        re[k+3] = mabangjin[k][0]+mabangjin[k][1]+mabangjin[k][2];
	}

    if (re[0]==re[1]&&re[2]==re[3]&&re[4]==re[5]&&re[6]==re[7])
    {
        answer = 'O';
    }
    else answer = 'X';


	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_L2int_T2_D1i_D2_D1
_A_D1i_B<_D1i_A_D1i_B<_D1s_E_
3_FOR_C_FOR_D1i_D1i_D1i_D1i_D
i_B+_D1i_D1i_B+_A_D1i_D1i_D1i
D1i_D1i_B+_D1i_D1i_B+_A_D1i_A
D1i_B<_D1i_D1i_B+_D1i_B+_A_C_
OR_D1i_A_D1i_B<_D1i_B+_D1i_D1
_B+_D1i_B+_A_C_FOR_D1i_D1i_B=
_D1i_D1i_B==_B&&_D1i_D1i_B==_
&&_D1i_D1i_B==_B&&_D1c_A_C_D1
_A_L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
