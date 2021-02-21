//김문만(moonman0429)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1] = {};
	char out[BYTE_SIZE+1] = {};

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    int k;
    for(k = 0; k < BYTE_SIZE; k++){
        if(!((byte[0][k] == '0' || byte[0][k] == '1') && (byte[1][k] == '0' || byte[1][k] == '1'))){
            printf("Input Error\n");
            return 0;
        }
    }
    int i;
    int j = 0;
    for(i = BYTE_SIZE-1; i>-1; i--){
        j = byte[0][i] - '0' + byte[1][i] - '0' + j;
        if(j == 3) {
            out[i] = '1';
            j = 1;
        }
        else if(j > 1){
            out[i] = '0';
            j = 1;
        }
        else{
            if(j == 1) out[i] = '1';
            if(j == 0) out[i] = '0';
            j = 0;
        }
    }
    out[BYTE_SIZE] = '\0';


	////////////////////////////////////////
    if(j>1){
        printf("1");
    }
	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_D1s_D1i_D1i_E_F3_L2int_
2_D2_D1i_A_D1i_B<_D1i_D1c_B==
D1i_D1c_B==_B||_D1i_D1c_B==_D
i_D1c_B==_B||_B&&_D1s_E_F3_D1
_R_C_L1_C_FOR_L2int_T2_D2_L2i
t_T2_D1i_D2_D1i_D1i_B-_A_D1i_
>_D1i_D1c_B-_D1i_B+_D1c_B-_B+
A_D1i_B==_D1c_A_D1i_A_C_D1i_B
_D1c_A_D1i_A_C_D1i_B==_D1c_A_
1_D1i_B==_D1c_A_L1_D1i_A_C_L1
L1_C_FOR_D1i_D1c_A_D1i_B>_D1s
E_F3_C_L1_D1s_E_F3_D1i_R_C_F1
1_
###############################*/
//$//
