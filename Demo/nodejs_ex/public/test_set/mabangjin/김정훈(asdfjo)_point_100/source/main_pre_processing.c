//김정훈(asdfjo)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int sum1 , sum2 ,sum3 ,sum4 ,sum5,sum6,sum7,sum8;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

    sum1 = mabangjin[0][0]+ mabangjin[0][1]+ mabangjin[0][2];
    sum2 = mabangjin[1][0]+ mabangjin[1][1]+ mabangjin[1][2];
    sum3 = mabangjin[2][0]+ mabangjin[2][1]+ mabangjin[2][2];
    sum4 = mabangjin[0][0]+ mabangjin[1][0]+ mabangjin[2][0];
    sum5 = mabangjin[0][1]+ mabangjin[1][1]+ mabangjin[2][1];
    sum6 = mabangjin[0][2]+ mabangjin[1][2]+ mabangjin[2][2];
    sum7 = mabangjin[0][0]+ mabangjin[1][1]+ mabangjin[2][2];
    sum8 = mabangjin[0][2]+ mabangjin[1][1]+ mabangjin[2][0];

    if((sum1 == sum2)&&(sum2 == sum3)&&(sum3 == sum4)&&(sum4 == sum5)&&(sum5 == sum6)&&(sum6 == sum7)&&(sum7 == sum8))
    answer = 'O';
    else
    answer = 'X';

    

	////////////////////////////////////////



	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D1i_D1
_D2_L2char_T2_D2_D1i_A_D1i_B<
D1i_A_D1i_B<_D1s_E_F3_FOR_C_F
R_D1i_D1i_D1i_D1i_B+_D1i_D1i_
+_A_D1i_D1i_D1i_D1i_B+_D1i_D1
_B+_A_D1i_D1i_D1i_D1i_B+_D1i_
1i_B+_A_D1i_D1i_D1i_D1i_B+_D1
_D1i_B+_A_D1i_D1i_D1i_D1i_B+_
1i_D1i_B+_A_D1i_D1i_D1i_D1i_B
_D1i_D1i_B+_A_D1i_D1i_D1i_D1i
B+_D1i_D1i_B+_A_D1i_D1i_D1i_D
i_B+_D1i_D1i_B+_A_B==_B==_B&&
B==_B&&_B==_B&&_B==_B&&_B==_B
&_B==_B&&_D1c_A_D1c_A_L1_D1s_
_F3_D1i_R_C_F1_1_
###############################*/
//$//
