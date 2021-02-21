//유대하(ulysses94)_point_0
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int fibo(int n) {
    if (n <= 1) return 1;
    else return fibo(n-2) + fibo(n-1);
}

int main()
{
	int fibo_n;
    int i = 0, j = 0;
    int sum = 0;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    
    for (i = 0; i < 100; i++) {
        sum = fibo(fibo_n - 1) + text[i];
        if ((sum >= 65 && sum <= 90) || (sum >= 97 && sum <=122)) {
        text[i] = sum;
        }
        else {
            sum = sum - 35;
            text[i] = sum;
        }
        printf("%c", text[i]);
    }

    for (i = 0; i < 100; i++) {
        if (text[i] == NULL) break;
        printf("%d\t", text);
    }
	////////////////////////////////////////

	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B<=_D1i_R_D1i_B-_E_F3_D1i_
-_E_F3_B+_R_L1_C_F1_L2int_T2_
2_D2_L2int_T2_D2_L2int_T2_D1i
D2_L2int_T2_D1i_D2_L2int_T2_D
i_D2_L2char_T2_D1i_D2_D1s_E_F
_D1s_E_F3_D1i_A_D1i_B<_D1i_B-
E_F3_B+_A_D1i_B>=_D1i_B<=_B&&
D1i_B>=_D1i_B<=_B&&_B||_A_C_D
i_B-_A_A_C_L1_D1s_E_F3_C_FOR_
1i_A_D1i_B<_B==_L1_D1s_E_F3_C
FOR_D1i_R_C_F1_1_
###############################*/
//$//
