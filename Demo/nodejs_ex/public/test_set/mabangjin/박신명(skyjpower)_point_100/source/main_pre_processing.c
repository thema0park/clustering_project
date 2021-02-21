//박신명(skyjpower)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l, i, j;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    answer = 'O';
    int std = 0;
    int temp_sum = 0;

    while(1){
        for(i = 0; i < MABANGJIN_SIZE; i++){
            std += mabangjin[0][i];
        }
        
        for(j = 0; j < MABANGJIN_SIZE; j++){
            int t1 = 0;
            int t2 = 0;
            for(i = 0; i < MABANGJIN_SIZE; i++){
                t1 += mabangjin[i][j];
                t2 += mabangjin[j][i];
            }
            if(t1 != std || t2 != std){
                answer = 'X';
                break;
            }
        }

        if(answer == 'X') break;
        
        // 대각선 검사
        temp_sum = 0;
        for(i = 0; i < MABANGJIN_SIZE; i++){
            temp_sum += mabangjin[i][i];
        }
        if(temp_sum != std){
            answer = 'X';
            break;
        }
        temp_sum = 0;
        for(i = 0; i < MABANGJIN_SIZE; i++){
            temp_sum += mabangjin[i][MABANGJIN_SIZE - i - 1];
        }
        if(temp_sum != std) answer = 'X';
        break;
    }

	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D1i_D1i_D2_L2char_
2_D2_D1i_A_D1i_B<_D1i_A_D1i_B
_D1s_E_F3_FOR_C_FOR_D1c_A_L2i
t_T2_D1i_D2_L2int_T2_D1i_D2_D
i_D1i_A_D1i_B<_D1i_A_C_FOR_D1
_A_D1i_B<_L2int_T2_D1i_D2_L2i
t_T2_D1i_D2_D1i_A_D1i_B<_A_A_
_FOR_B!=_B!=_B||_D1c_A_C_L1_C
FOR_D1c_B==_L1_D1i_A_D1i_A_D1
_B<_A_C_FOR_B!=_D1c_A_C_L1_D1
_A_D1i_A_D1i_B<_D1i_B-_D1i_B-
A_C_FOR_B!=_D1c_A_L1_C_W_D1s_
_F3_D1i_R_C_F1_1_
###############################*/
//$//
