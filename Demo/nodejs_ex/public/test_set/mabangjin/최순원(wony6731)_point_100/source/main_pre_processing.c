//최순원(wony6731)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	int plus_answer = 0;
    int plus_value = 0;
    char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		scanf("%d %d %d", &mabangjin[k][0], &mabangjin[k][1], &mabangjin[k][2]);
	}

	////////////////////////////////////////
    plus_answer = mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2];
    
    // 가로 합
    for(k = 0; k < MABANGJIN_SIZE; k++)
    {
        for(l = 0; l < MABANGJIN_SIZE; l++)
        {
            plus_value = plus_value + mabangjin[k][l];
        }
        if(plus_answer != plus_value)
        {
            answer = 'X';
            printf("%c\n",answer);
            return 0;
        }
        else
            plus_value = 0;
    }
    // 세로 합
    for(l = 0; l < MABANGJIN_SIZE; l++)
    {
        for(k = 0; k < MABANGJIN_SIZE; k++)
        {
            plus_value = plus_value + mabangjin[k][l];
        }
        if(plus_answer != plus_value)
        {
            answer = 'X';
            printf("%c\n",answer);
            return 0;
        }
        else
            plus_value = 0;
    }
    // 대각선 합
    for(k = 0; k < MABANGJIN_SIZE; k++)
    {
        plus_value = plus_value + mabangjin[k][k];
    }
    if(plus_answer != plus_value)
    {
        answer = 'X';
        printf("%c\n",answer);
        return 0;
    }
    else
        plus_value = 0;
    // 대각선 합
    for(k = 0; k < MABANGJIN_SIZE; k++)
    {
        plus_value = plus_value + mabangjin[k][MABANGJIN_SIZE-(k+1)];
    }
    if(plus_answer != plus_value)
    {
        answer = 'X';
        printf("%c\n",answer);
        return 0;
    }
    else
    {
        answer = 'O';
    }
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
int_T2_D1i_D2_L2int_T2_D1i_D2
L2char_T2_D2_D1i_A_D1i_B<_D1s
D1i_D1i_D1i_E_F3_C_FOR_D1i_D1
_D1i_D1i_B+_D1i_D1i_B+_A_D1i_
_D1i_B<_D1i_A_D1i_B<_B+_A_C_F
R_B!=_D1c_A_D1s_E_F3_D1i_R_C_
1i_A_L1_C_FOR_D1i_A_D1i_B<_D1
_A_D1i_B<_B+_A_C_FOR_B!=_D1c_
_D1s_E_F3_D1i_R_C_D1i_A_L1_C_
OR_D1i_A_D1i_B<_B+_A_C_FOR_B!
_D1c_A_D1s_E_F3_D1i_R_C_D1i_A
L1_D1i_A_D1i_B<_D1i_D1i_B+_B-
B+_A_C_FOR_B!=_D1c_A_D1s_E_F3
D1i_R_C_D1c_A_C_L1_D1s_E_F3_D
i_R_C_F1_1_
###############################*/
//$//
