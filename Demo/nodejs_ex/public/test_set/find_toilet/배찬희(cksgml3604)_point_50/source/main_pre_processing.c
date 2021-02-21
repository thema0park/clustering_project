//배찬희(cksgml3604)_point_50
#define _CRT_SECURE_NO_WARNINGS
 #define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i;

	scanf("%s %s", byte[0], byte[1]);

	//지정된 입력 외의 문자가 입력되면 "Input Error"를 출력한다.
    for (i=0;i<8;i++){
        
        if (byte[0][i] > '1') {
            printf("Input Error\n", i);
            return 0;
        }
        if (byte[1][i] > '1') {
            printf("Input Error\n", i);
            return 0;
        }

    }

    // 더하기
    for (i=7;i>=0;i--){
        
        //out[i] = byte[0][i] + byte[1][i];
        if (byte[0][i] < '1'){
            if ( byte[1][i] < '1'){
                out[i] = byte[0][i]; //00
                //printf ("a");
            }
            else {
                out[i] = byte[1][i]; //01
                //printf ("b");
            }
        }
        else{
            if ( byte[1][i] < '1') {
                out[i] = byte[0][i]; //10
                //printf ("c");
            }
            else{
                out[i] = (byte[0][i] + 1); //11//21
                //printf ("d");
            }
        }
        
        if (out[i] > '1'){//0,1이 아닐때
            //printf ("x");
            if (out[i] >'2') {
                //printf ("y");
                out[i] = '1';
                byte[0][i-1] += 1;
            }
            else{
                out[i] = '0';
                //printf ("z");
                byte[0][i+1] += 1;
            }
        
        }
    }
    //왼쪽 첫 번째 비트에서 발생되는 자리 올림은 무시한다.
    if (out[0]>'0'){
        out[i] = '0';
    }
	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D2_D1s_D1i_D1i
E_F3_D1i_A_D1i_B<_D1i_D1c_B>_
1s_E_F3_D1i_R_C_L1_D1i_D1c_B>
D1s_E_F3_D1i_R_C_L1_C_FOR_D1i
A_D1i_B>=_D1i_D1c_B<_D1i_D1c_
<_D1i_A_C_D1i_A_C_L1_C_D1i_D1
_B<_D1i_A_C_D1i_D1i_B+_A_C_L1
C_L1_D1c_B>_D1c_B>_D1c_A_D1i_
1i_B-_D1i_A_C_D1c_A_D1i_D1i_B
_D1i_A_C_L1_C_L1_C_FOR_D1i_D1
_B>_D1c_A_C_L1_D1s_E_F3_D1i_R
C_F1_1_
###############################*/
//$//
