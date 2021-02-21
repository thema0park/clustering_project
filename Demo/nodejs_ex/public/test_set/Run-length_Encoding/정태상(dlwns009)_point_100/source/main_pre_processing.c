//정태상(dlwns009)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int a, b;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
if(mabangjin[0][1]+mabangjin[0][2]==mabangjin[1][0]+mabangjin[2][0])
answer='O';
else
answer='X';




	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D1i_D1i_D2_L2char_
2_D2_D1i_A_D1i_B<_D1i_A_D1i_B
_D1s_E_F3_FOR_C_FOR_D1i_D1i_D
i_D1i_B+_D1i_D1i_D1i_D1i_B+_B
=_D1c_A_D1c_A_L1_D1s_E_F3_D1i
R_C_F1_1_
###############################*/
//$//
