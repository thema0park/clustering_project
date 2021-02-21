//김규환(gyuhwan)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

char inc(char a, char b, int *plus) {
    int ai = a - '0';
    int bi = b - '0';

    int valid_a = ai == 0 || ai == 1;
    int valid_b = bi == 0 || bi == 1;
    if (!(valid_a && valid_b))
        return -1;

    int sum = ai + bi + *plus;

    char result = (sum % 2) + '0';
    
    *plus = sum / 2;

    return result;
}

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int plus = 0;
    int i, idx;
    char buf;

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////

    for (i = 1; i <= 8; i++) {
        idx = BYTE_SIZE - i;
        buf = inc(byte[0][idx], byte[1][idx], &plus);
        if (buf == -1) {
            printf("Input Error\n");
            return 0;
        }

        out[idx] = buf;
    }

    out[BYTE_SIZE] = '\0';
	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2char_T2_D2_L2char_T2_D2_L2in
_T2_P1_D2_P2_L2char_T2_F2_D2_
2int_T2_D1c_B-_D2_L2int_T2_D1
_B-_D2_L2int_T2_D1i_B==_D1i_B
=_B||_D2_L2int_T2_D1i_B==_D1i
B==_B||_D2_B&&_D1i_R_L1_L2int
T2_B+_B+_D2_L2char_T2_D1i_B%_
1c_B+_D2_D1i_B/_A_R_C_F1_L2in
_T2_F2_D2_L2char_T2_D1i_D1i_B
_D1i_D2_L2char_T2_D1i_D1i_B+_
2_L2int_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2char_T2_D2_D1s_
1i_D1i_E_F3_D1i_A_D1i_B<=_D1i
B-_A_D1i_D1i_E_F3_A_D1i_B==_D
s_E_F3_D1i_R_C_L1_A_C_FOR_D1i
D1c_A_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
