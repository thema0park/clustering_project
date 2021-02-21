//송선우(gbe0808)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100
int fibo(int a) {
    if(a == 1 || a == 2) {
        return 1;
    }

    int fn1, fn2 = 1;
    int fi;
    int i;
    for(i = 0; i < a - 1; i++) {
        fi = fn1 + fn2;
        fn1 = fn2;
        fn2 = fi;
    }
    return fi;

}


int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int i = 0;
    int len;

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    fibo_n = fibo(fibo_n);
    fibo_n = fibo_n % 26;
    len = strlen(text);

    for(i = 0; i < len; i++) {
        text[i] += fibo_n;
        while(text[i] >= 91) {
            text[i] -= 26;
        }
    }
	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_B==_B||_D1i_R_C_L1
L2int_T2_D2_L2int_T2_D1i_D2_L
int_T2_D2_L2int_T2_D2_D1i_A_D
i_B-_B<_B+_A_A_A_C_FOR_R_C_F1
L2int_T2_F2_D2_L2int_T2_D2_L2
har_T2_D1i_D2_L2int_T2_D1i_D2
L2int_T2_D2_D1s_E_F3_D1s_E_F3
E_F3_A_D1i_B%_A_E_F3_A_D1i_A_
<_A_D1i_B>=_D1i_A_C_W_C_FOR_D
s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
