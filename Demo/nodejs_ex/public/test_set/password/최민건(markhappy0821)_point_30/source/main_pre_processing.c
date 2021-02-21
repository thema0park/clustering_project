//최민건(markhappy0821)_point_30
#define _CRT_SECURE_NO_WARNINGS
  #define TEXT_MAX 100
int fibo (int fibo_n) {
    if(fibo_n == 0 || fibo_n == 1) {
        return fibo_n;
    }
    return (fibo(fibo_n-1)+fibo(fibo_n-2));
}

int main()
{
	int fibo_n = 0;
    int i = 0;
    int number = 0;
    int temp = 0;
	char text[TEXT_MAX] = {0, };

	scanf("%d", &fibo_n);
	scanf("%s", text);
    number = fibo(fibo_n);
	for(i = 0; i < strlen(text); i++) {
        
        if (text[i]+number >'Z') {
         text[i] = (text[i] + number-90)+64;

        }
        else {
        text[i] = text[i]+number;
        }
    }

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_B==_B||_R_C_L1_D1i
B-_E_F3_D1i_B-_E_F3_B+_R_C_F1
L2int_T2_F2_D2_L2int_T2_D1i_D
_L2int_T2_D1i_D2_L2int_T2_D1i
D2_L2int_T2_D1i_D2_L2char_T2_
1i_D1i_D2_D1s_E_F3_D1s_E_F3_E
F3_A_D1i_A_E_F3_B<_B+_D1c_B>_
+_D1i_B-_D1i_B+_A_C_B+_A_C_L1
C_FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
