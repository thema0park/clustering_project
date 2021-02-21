//김규환(gyuhwan)_point_50
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i, j;
	int output;
    int cnt = 0;

    int maxIdx;
    int max = -1;

	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////

    for (i = 0; i < piece_num; i++) {
        cnt = 0;
        for (j = 0; j < piece_num; j++) {
            if (i == j) continue;

            int a = gcd(input_data[i], input_data[j]);
            if (a <= 1)
                cnt++;
        }

        if (cnt > max) {
            max = cnt;
            maxIdx = i;
        }
    }

	////////////////////////////////////////

	printf("%d\n", input_data[maxIdx]);
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_D1i_B==_R_L1_B%_E_
3_R_C_F1_L2int_T2_F2_D2_L2int
T2_D2_L2int_T2_D1i_D2_L2int_T
_D2_L2int_T2_D2_L2int_T2_D2_L
int_T2_D1i_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_D1s_E_F3_D1i_A_B<
D1s_E_F3_FOR_D1i_A_B<_D1i_A_D
i_A_B<_B==_L1_L2int_T2_E_F3_D
_D1i_B<=_L1_C_FOR_B>_A_A_C_L1
C_FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
