//구영석(dudtjr9)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int fib(int num);

int main()
{
	int fibo_n, num=0;
    int i, len;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    num = fib(fibo_n) % 26;
    len=strlen(text);

    for(i=0; i<len;i++){
        text[i] = text[i]+num;
        
        if(text[i]>'Z') text[i] = text[i]-26;
    }



	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}

int fib(int num){
    if(num<=2) return 1;
    else return fib(num-1) + fib(num-2);
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_L2int_T2_D2_L2int
T2_D2_L2char_T2_D1i_D2_D1s_E_
3_D1s_E_F3_E_F3_D1i_B%_A_E_F3
A_D1i_A_B<_B+_A_D1c_B>_D1i_B-
A_L1_C_FOR_D1s_E_F3_D1i_R_C_F
_L2int_T2_D2_P2_L2int_T2_F2_D
_D1i_B<=_D1i_R_D1i_B-_E_F3_D1
_B-_E_F3_B+_R_L1_C_F1_1_
###############################*/
//$//
