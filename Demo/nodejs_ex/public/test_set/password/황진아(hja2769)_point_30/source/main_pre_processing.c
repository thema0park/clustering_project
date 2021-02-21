//황진아(hja2769)_point_30
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int fibo(int n){
    if(n<=2) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int num, num2, i;

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////

    num = fibo(fibo_n);
    num2 = num/26+1;

    for(i = 0; i < strlen(text); i++){
        text[i] = text[i] + num;
        if(text[i]>'Z') text[i] -= 26*num2;
        if(text[i]>'z') text[i] -= 26*num2;
    }



	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B<=_D1i_R_L1_D1i_B-_E_F3_D
i_B-_E_F3_B+_R_C_F1_L2int_T2_
2_D2_L2int_T2_D2_L2char_T2_D1
_D2_L2int_T2_D2_L2int_T2_D2_L
int_T2_D2_D1s_E_F3_D1s_E_F3_E
F3_A_D1i_B/_D1i_B+_A_D1i_A_E_
3_B<_B+_A_D1c_B>_D1i_B*_A_L1_
1c_B>_D1i_B*_A_L1_C_FOR_D1s_E
F3_D1i_R_C_F1_1_
###############################*/
//$//
