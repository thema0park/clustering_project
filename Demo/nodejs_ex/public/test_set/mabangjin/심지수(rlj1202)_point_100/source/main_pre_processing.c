//심지수(rlj1202)_point_100
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

    int result = 1;

    int num = 0;

    int row, col;
    for (row = 0; row < MABANGJIN_SIZE; row++) {
        int sum = 0;
        for (col = 0; col < MABANGJIN_SIZE; col++) {
            sum += mabangjin[row][col];
        }
        
        if (num == 0) num = sum;
        else {
            if (num != sum) {
                result = 0;
            }
        }
    }

    for (col = 0; col < MABANGJIN_SIZE; col++) {
        int sum = 0;
        for (row = 0; row < MABANGJIN_SIZE; row++) {
            sum += mabangjin[row][col];
        }

        if (num != sum) {
            result = 0;
        }
    }

    int n;
    int sum;

    sum = 0;
    for (n = 0; n < MABANGJIN_SIZE; n++) {
        sum += mabangjin[n][n];
    }

    if (num != sum) {
        result = 0;
    }

    sum = 0;
    for (n = 0; n < MABANGJIN_SIZE; n++) {
        sum += mabangjin[n][MABANGJIN_SIZE - n - 1];
    }

    if (num != sum) {
        result = 0;
    }

    answer = result ? 'O' : 'X';

	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_L2i
t_T2_D1i_D2_L2int_T2_D1i_D2_L
int_T2_D2_L2int_T2_D2_D1i_A_D
i_B<_L2int_T2_D1i_D2_D1i_A_D1
_B<_A_C_FOR_D1i_B==_A_B!=_D1i
A_C_L1_C_L1_C_FOR_D1i_A_D1i_B
_L2int_T2_D1i_D2_D1i_A_D1i_B<
A_C_FOR_B!=_D1i_A_C_L1_C_FOR_
2int_T2_D2_L2int_T2_D2_D1i_A_
1i_A_D1i_B<_A_C_FOR_B!=_D1i_A
C_L1_D1i_A_D1i_A_D1i_B<_D1i_B
_D1i_B-_A_C_FOR_B!=_D1i_A_C_L
_D1c_D1c_A_D1s_E_F3_D1i_R_C_F
_1_
###############################*/
//$//
