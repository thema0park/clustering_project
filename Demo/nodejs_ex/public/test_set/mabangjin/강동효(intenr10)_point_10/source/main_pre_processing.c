//강동효(intenr10)_point_10
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int i;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    if(mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1] == mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2]==mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]==mabangjin[2][0]+mabangjin[1][1]+mabangjin[0][2])
    {
     answer = 'O';
     printf("%c\n",answer);
    }
    else
    {
     answer = 'x';
     printf("%c\n",answer);
    }
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
1i_D1i_D2_L2char_T2_D2_D1i_A_
1i_B<_D1i_A_D1i_B<_D1s_E_F3_F
R_C_FOR_D1i_D1i_D1i_D1i_B+_D1
_D1i_B+_D1i_D1i_D1i_D1i_B+_D1
_D1i_B+_B==_D1i_D1i_D1i_D1i_B
_D1i_D1i_B+_B==_D1i_D1i_D1i_D
i_B+_D1i_D1i_B+_B==_D1c_A_D1s
E_F3_C_D1c_A_D1s_E_F3_C_L1_D1
_R_C_F1_1_
###############################*/
//$//
