//신상민(ssm2000)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    int i = 7, crr = 0;
    for(i=7;i>=0;i--){
        if( !('0'<=byte[0][i]&&byte[0][i]<='1') || !('0'<=byte[1][i] && byte[1][i]<='1') ){
            printf("Input Error\n");
            return 0;
        }
    }
    for(i=7;i>=0;i--){
        int a = (byte[0][i]-'0') + (byte[1][i]-'0') + crr;
        switch(a){
            case 3:
                crr = 1;
                out[i] = '1';
                break;
            case 2:
                crr = 1;
                out[i] = '0';
                break;
            case 1:
                crr = 0;
                out[i] = '1';
                break;
            case 0:
                crr = 0;
                out[i] = '0';
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
2_D1i_D2_L2int_T2_D1i_D2_D1i_
_D1i_B>=_D1c_D1i_B<=_D1i_D1c_
<=_B&&_D1c_D1i_B<=_D1i_D1c_B<
_B&&_B||_D1s_E_F3_D1i_R_C_L1_
_FOR_D1i_A_D1i_B>=_L2int_T2_D
i_D1c_B-_D1i_D1c_B-_B+_B+_D2_
1i_D1i_A_D1c_A_D1i_D1i_A_D1c_
_D1i_D1i_A_D1c_A_D1i_D1i_A_D1
_A_C_C_FOR_D1s_E_F3_D1i_R_C_F
_1_
###############################*/
//$//
