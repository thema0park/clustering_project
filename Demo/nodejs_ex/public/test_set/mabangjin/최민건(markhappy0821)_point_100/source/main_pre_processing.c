//최민건(markhappy0821)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int i = 0, j = 0;
    int sum1= 0, sum2 = 0, sum3 = 0;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
   sum1 = mabangjin[0][0] + mabangjin[1][0]+mabangjin[2][0];
   sum2 = mabangjin[0][0]+ mabangjin[0][1]+ mabangjin[0][2];
   sum3 = mabangjin[0][0]+ mabangjin[1][1]+ mabangjin[2][2];
   if (sum1 == sum2&&sum2 == sum3 && sum1 == sum3){
       answer = 'O';
   }
   else {
       answer = 'X';
   }
	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D2_L2int_T2_D1i_D2_L2i
t_T2_D1i_D2_L2int_T2_D1i_D2_L
int_T2_D1i_D1i_D2_L2char_T2_D
_D1i_A_D1i_B<_D1i_A_D1i_B<_D1
_E_F3_FOR_C_FOR_D1i_D1i_D1i_D
i_B+_D1i_D1i_B+_A_D1i_D1i_D1i
D1i_B+_D1i_D1i_B+_A_D1i_D1i_D
i_D1i_B+_D1i_D1i_B+_A_B==_B==
B&&_B==_B&&_D1c_A_C_D1c_A_C_L
_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
