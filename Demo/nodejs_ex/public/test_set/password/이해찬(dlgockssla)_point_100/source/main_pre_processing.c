//이해찬(dlgockssla)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int i=0;
	scanf("%d", &fibo_n);
	scanf("%s", text);
    int len = strlen(text);
	////////////////////////////////////////
    int result = fib(fibo_n);
    for(i=0; i<len; i++){
        text[i] = (text[i] + result - 'A') % ('z'-'a'+1) +'A';
        // if((text[i] + result) > 'Z')
        //     text[i] = text[i] + result -('z'-'a' + 1);
        // else
        //     text[i] = text[i] + result;
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_R_L1_D1i_B==_D1i_R
L1_D1i_B-_E_F3_D1i_B-_E_F3_B+
R_C_F1_L2int_T2_F2_D2_L2int_T
_D2_L2char_T2_D1i_D2_L2int_T2
D1i_D2_D1s_E_F3_D1s_E_F3_L2in
_T2_E_F3_D2_L2int_T2_E_F3_D2_
1i_A_B<_B+_D1c_B-_D1c_D1c_B-_
1i_B+_B%_D1c_B+_A_C_FOR_D1s_E
F3_D1i_R_C_F1_1_
###############################*/
//$//
