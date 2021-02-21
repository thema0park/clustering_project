//조재현(whwogus)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int count[9]; //01234567 총 8개 비교
    int num;
	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    count[0] = mabangjin[0][0]+ mabangjin[0][1]+ mabangjin[0][2];
    count[1] = mabangjin[1][0]+ mabangjin[1][1]+ mabangjin[1][2];
    count[2] = mabangjin[2][0]+ mabangjin[2][1]+ mabangjin[2][2];
    count[3] = mabangjin[0][0]+ mabangjin[1][0]+ mabangjin[2][0];
    count[4] = mabangjin[0][1]+ mabangjin[1][1]+ mabangjin[2][1];
    count[5] = mabangjin[0][2]+ mabangjin[1][2]+ mabangjin[2][2];
    count[6] = mabangjin[0][0]+ mabangjin[1][1]+ mabangjin[2][2];
    count[7] = mabangjin[2][0]+ mabangjin[1][1]+ mabangjin[0][2];
    answer = 'X';
    num = count[0];

    if (count[1] == num && count[2] == num && count[3] == num && count[4] == num && count[5] == num && count[6] == num && count[7] == num)
    {
    answer = 'O';}
    
    
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_L2int_T2_D1i_D2_L2
nt_T2_D2_D1i_A_D1i_B<_D1i_A_D
i_B<_D1s_E_F3_FOR_C_FOR_D1i_D
i_D1i_D1i_D1i_B+_D1i_D1i_B+_A
D1i_D1i_D1i_D1i_D1i_B+_D1i_D1
_B+_A_D1i_D1i_D1i_D1i_D1i_B+_
1i_D1i_B+_A_D1i_D1i_D1i_D1i_D
i_B+_D1i_D1i_B+_A_D1i_D1i_D1i
D1i_D1i_B+_D1i_D1i_B+_A_D1i_D
i_D1i_D1i_D1i_B+_D1i_D1i_B+_A
D1i_D1i_D1i_D1i_D1i_B+_D1i_D1
_B+_A_D1i_D1i_D1i_D1i_D1i_B+_
1i_D1i_B+_A_D1c_A_D1i_A_D1i_B
=_D1i_B==_B&&_D1i_B==_B&&_D1i
B==_B&&_D1i_B==_B&&_D1i_B==_B
&_D1i_B==_B&&_D1c_A_C_L1_D1s_
_F3_D1i_R_C_F1_1_
###############################*/
//$//
