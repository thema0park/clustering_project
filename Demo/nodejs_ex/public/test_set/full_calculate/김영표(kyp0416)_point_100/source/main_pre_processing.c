//김영표(kyp0416)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    char carry = 0;
    int i,j;

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////

    for(i = 0;i < 2; i++){
        for(j = 0; j < 8 ;j++){
            if(!(byte[i][j] == '0' || byte[i][j] == '1')){
                printf("Input Error\n");
                return 0;
            }
            byte[i][j] = byte[i][j] - '0';
        }
    }

    for(i = 7; i >= 0 ;i--){
        out[i] = byte[0][i]+byte[1][i]+carry;
        if(out[i] >= 2){
            carry = 1;
            out[i] = out[i] - 2;
        }
        else{
            carry = 0;
        }
    }
    for(i = 0;i < 8; i++){
        out[i] = out[i] + '0';
    }

	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2char_T2_D1i_D2_L2int_
2_D2_L2int_T2_D2_D1s_D1i_D1i_
_F3_D1i_A_D1i_B<_D1i_A_D1i_B<
D1c_B==_D1c_B==_B||_D1s_E_F3_
1i_R_C_L1_D1c_B-_A_C_FOR_C_FO
_D1i_A_D1i_B>=_D1i_D1i_B+_B+_
_D1i_B>=_D1i_A_D1i_B-_A_C_D1i
A_C_L1_C_FOR_D1i_A_D1i_B<_D1c
B+_A_C_FOR_D1s_E_F3_D1i_R_C_F
_1_
###############################*/
//$//
