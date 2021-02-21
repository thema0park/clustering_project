//정민규(green3438)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE + 1];

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    int i, up = 0;
    out[BYTE_SIZE] = '\0';
    for (i = 1; i < BYTE_SIZE + 1; i++){
        //printf("i: %d\n", BYTE_SIZE - i);
        if (up == 1){
            if ((byte[0][BYTE_SIZE - i] == '0') && (byte[1][BYTE_SIZE - i] == '0')) {
                out[BYTE_SIZE - i] = '1';
                up = 0;
            }
            else if ((byte[0][BYTE_SIZE - i] == '1') && (byte[1][BYTE_SIZE - i] == '1')){
                out[BYTE_SIZE - i] = '1';
                up = 1;
            }
            else {
                out[BYTE_SIZE - i] = '0';
                up = 1;
            }
        }
        else {
            if ((byte[0][BYTE_SIZE - i] == '1') && (byte[1][BYTE_SIZE - i] == '1')){
                out[BYTE_SIZE - i] = '0';
                up = 1;
            }
            else if ((byte[0][BYTE_SIZE - i] == '0') && (byte[1][BYTE_SIZE - i] == '0')) {
                out[BYTE_SIZE - i] = '0';
                up = 0;
            }
            else {
                out[BYTE_SIZE - i] = '1';
                up = 0;
            }
        }
    }


	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_D1s_D1i_D1i_E_F3_L2int_
2_D2_L2int_T2_D1i_D2_D1i_D1c_
_D1i_A_D1i_D1i_B+_B<_D1i_B==_
1i_D1i_B-_D1c_B==_D1i_D1i_B-_
1c_B==_B&&_D1i_B-_D1c_A_D1i_A
C_D1i_D1i_B-_D1c_B==_D1i_D1i_
-_D1c_B==_B&&_D1i_B-_D1c_A_D1
_A_C_D1i_B-_D1c_A_D1i_A_C_L1_
1_C_D1i_D1i_B-_D1c_B==_D1i_D1
_B-_D1c_B==_B&&_D1i_B-_D1c_A_
1i_A_C_D1i_D1i_B-_D1c_B==_D1i
D1i_B-_D1c_B==_B&&_D1i_B-_D1c
A_D1i_A_C_D1i_B-_D1c_A_D1i_A_
_L1_L1_C_L1_C_FOR_D1s_E_F3_D1
_R_C_F1_1_
###############################*/
//$//
