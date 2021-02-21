//한유림(yhlipser)_point_50
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);

    int i;
    int cnt = 0;

    for (i = 0; i <= 7; i++) {
        if (byte[0][i] > '1') {
            cnt++;
        }
        if (byte[1][i] > '1') {
            cnt++;
        }
    }
    

    for (i = 0; i < 8; i++) {
        out[i] = byte[0][i] + byte[1][i];
        out[i] = out[i] - 48;
    }
    for (i = 1; i < 8; i++) {
        if (out[i] > '1') {
            --out[i];
            ++out[i-1];
        }
    }

    if (cnt != 0)
    printf("Input Error\n");
	else printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_D1s_D1i_D1i_E_F3_L2int_
2_D2_L2int_T2_D1i_D2_D1i_A_D1
_B<=_D1i_D1c_B>_C_L1_D1i_D1c_
>_C_L1_C_FOR_D1i_A_D1i_B<_D1i
D1i_B+_A_D1i_B-_A_C_FOR_D1i_A
D1i_B<_D1c_B>_D1i_B-_C_L1_C_F
R_D1i_B!=_D1s_E_F3_D1s_E_F3_L
_D1i_R_C_F1_1_
###############################*/
//$//
