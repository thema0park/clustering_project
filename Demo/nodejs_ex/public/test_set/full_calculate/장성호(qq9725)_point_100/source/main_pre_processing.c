//장성호(qq9725)_point_100
#define _CRT_SECURE_NO_WARNINGS
  #define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1] = {0};

    int i;
    int n;
	scanf("%s %s", byte[0], byte[1]);
	////////////////////////////////////////

    for (i = 0; i<BYTE_SIZE; i++) {
        if (byte[0][i] == '0') byte[0][i] = 0;
        else if (byte[0][i] == '1') byte[0][i] = 1;
        else {
            printf("Input Error\n");
            return 0;
        }
        if (byte[1][i] == '0') byte[1][i] = 0;
        else if (byte[1][i] == '1') byte[1][i] = 1;
        else {
            printf("Input Error\n");
            return 0;
        }
    }

    for (i = 0; i<BYTE_SIZE; i++) out[i] = byte[0][i] + byte[1][i];
    for (i = BYTE_SIZE-1; i>=0; i--) {
        if (i == 0) {
            if (out[i] == 2) out[i] = 0;
            if (out[i] == 3) out[i] = 1;
            continue;
        }

        switch (out[i]) {
            case 2 : out[i] = 0; out[i-1]++; break;
            case 3 : out[i] = 1; out[i-1]++; break;
            default : break;
        }
    }
    for (i = 0; i<BYTE_SIZE; i++) printf("%d", out[i]);
    printf("\n");
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D1i_D2_L2int_T2_D2_L2int_T
_D2_D1s_D1i_D1i_E_F3_D1i_A_D1
_B<_D1i_D1c_B==_D1i_D1i_A_D1i
D1c_B==_D1i_D1i_A_D1s_E_F3_D1
_R_C_L1_L1_D1i_D1c_B==_D1i_D1
_A_D1i_D1c_B==_D1i_D1i_A_D1s_
_F3_D1i_R_C_L1_L1_C_FOR_D1i_A
D1i_B<_D1i_D1i_B+_A_FOR_D1i_D
i_B-_A_D1i_B>=_D1i_B==_D1i_B=
_D1i_A_L1_D1i_B==_D1i_A_L1_C_
1_D1i_D1i_A_D1i_B-_D1i_D1i_A_
1i_B-_C_C_FOR_D1i_A_D1i_B<_D1
_E_F3_FOR_D1s_E_F3_D1i_R_C_F1
1_
###############################*/
//$//
