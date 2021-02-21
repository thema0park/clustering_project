//목대희(mok9550)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

long long fibo(int i);

int main()
{
	int fibo_n;
	char text[TEXT_MAX], i;
    long long plus;

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    plus = fibo(fibo_n);
    while(plus > 26) {
        plus = plus % 26;
    }
    for(i = 0; i < strlen(text); i++) {
        text[i] += plus;
        while(text[i] > 'Z') {
            text[i] -= 26;
        }
    }


	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}

long long fibo(int i) {
    if(i==1) return 1;
    else if(i == 2) return 1;
    else return fibo(i-1) + fibo(i-2);
}/*########code signature#########
2int_T2_D2_P2_L2long_T2_F2_D2
L2int_T2_F2_D2_L2int_T2_D2_L2
har_T2_D1i_D2_L2char_T2_D2_L2
ong_T2_D2_D1s_E_F3_D1s_E_F3_E
F3_A_D1i_B>_D1i_B%_A_C_W_D1i_
_E_F3_B<_A_D1c_B>_D1i_A_C_W_C
FOR_D1s_E_F3_D1i_R_C_F1_L2int
T2_D2_P2_L2long_T2_F2_D2_D1i_
==_D1i_R_D1i_B==_D1i_R_D1i_B-
E_F3_D1i_B-_E_F3_B+_R_L1_L1_C
F1_1_
###############################*/
//$//
