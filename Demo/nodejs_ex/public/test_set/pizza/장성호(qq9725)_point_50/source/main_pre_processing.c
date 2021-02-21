//장성호(qq9725)_point_50
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int GCD (int a, int b) {
    int tmp;
    if (b==0) return 1;
    if (a<b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (a%b == 0) return b;
    else return GCD(b, a%b);
}

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
    int tmp[PIECE_NUM_MAX];
    int cnt[PIECE_NUM_MAX] = {0};
	int i;
    int j;
	int output, a, max = 0;
    a=0;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////

    for (i = 0; i<piece_num; i++) {
        for (j = 0; j<piece_num; j++) {
            if (i == j) continue;
            if (GCD(input_data[i], input_data[j])==1) {
                cnt[i]++;
            }
        }
    }

    for (i = 0; i<piece_num; i++) {
        if (max < cnt[i]) {
            max = cnt[i];
            output = input_data[i];
        }
    }

	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_D2_D1i_B=
_D1i_R_L1_B<_A_A_A_C_L1_B%_D1
_B==_R_B%_E_F3_R_L1_C_F1_L2in
_T2_F2_D2_L2int_T2_D2_L2int_T
_D1i_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D1i_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D1i_D2_D1i_A_D1s_E
F3_D1i_A_B<_D1s_E_F3_FOR_D1i_
_B<_D1i_A_B<_B==_L1_E_F3_D1i_
==_C_L1_C_FOR_C_FOR_D1i_A_B<_
<_A_A_C_L1_C_FOR_D1s_E_F3_D1i
R_C_F1_1_
###############################*/
//$//
