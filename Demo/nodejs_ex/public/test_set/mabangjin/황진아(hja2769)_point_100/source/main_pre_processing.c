//황진아(hja2769)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    int sum_r1 = mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2];
    int sum_r2 = mabangjin[1][0] + mabangjin[1][1] + mabangjin[1][2];
    int sum_r3 = mabangjin[2][0] + mabangjin[2][1] + mabangjin[2][2];

    int sum_c1 = mabangjin[0][0] + mabangjin[1][0] + mabangjin[2][0];
    int sum_c2 = mabangjin[0][1] + mabangjin[1][1] + mabangjin[2][1];
    int sum_c3 = mabangjin[0][2] + mabangjin[1][2] + mabangjin[2][2];

    int sum_d1 = mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2];
    int sum_d2 = mabangjin[0][2] + mabangjin[1][1] + mabangjin[2][0];

    if(sum_r1 == sum_r2 && sum_r1 == sum_r3 && sum_r2 == sum_r3){
        if(sum_c1 == sum_c2 && sum_c1 == sum_c2){
            if(sum_d1 == sum_d2){
                answer = 'O';
            }
            else answer = 'X';
        }
        else answer = 'X';
    }
    else answer = 'X';

    



	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_L2i
t_T2_D1i_D1i_D1i_D1i_B+_D1i_D
i_B+_D2_L2int_T2_D1i_D1i_D1i_
1i_B+_D1i_D1i_B+_D2_L2int_T2_
1i_D1i_D1i_D1i_B+_D1i_D1i_B+_
2_L2int_T2_D1i_D1i_D1i_D1i_B+
D1i_D1i_B+_D2_L2int_T2_D1i_D1
_D1i_D1i_B+_D1i_D1i_B+_D2_L2i
t_T2_D1i_D1i_D1i_D1i_B+_D1i_D
i_B+_D2_L2int_T2_D1i_D1i_D1i_
1i_B+_D1i_D1i_B+_D2_L2int_T2_
1i_D1i_D1i_D1i_B+_D1i_D1i_B+_
2_B==_B==_B&&_B==_B&&_B==_B==
B&&_B==_D1c_A_C_D1c_A_L1_C_D1
_A_L1_C_D1c_A_L1_D1s_E_F3_D1i
R_C_F1_1_
###############################*/
//$//
