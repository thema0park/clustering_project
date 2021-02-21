//권민석(pj4990)_point_30
#define _CRT_SECURE_NO_WARNINGS
   #define TEXT_MAX 100

int fib(int n){
    if (n==0 || n==1){

        return 1;
    }
    else {

        return fib(n-1)+fib(n-2);
    }


}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);
    int a=0;
	////////////////////////////////////////
    a=fib(fibo_n-1); //혹시모름;
    int i;
    int len=strlen(text);
    for (i=0;i<len;i++){
        text[i]=text[i]+a;
        if (text[i]>'Z'){
            text[i]=text[i]-('Z'-'A'+1);
        }

    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}
/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_B==_B||_D1i_R_C_D1
_B-_E_F3_D1i_B-_E_F3_B+_R_C_L
_C_F1_L2int_T2_F2_D2_L2int_T2
D2_L2char_T2_D1i_D2_D1s_E_F3_
1s_E_F3_L2int_T2_D1i_D2_D1i_B
_E_F3_A_L2int_T2_D2_L2int_T2_
_F3_D2_D1i_A_B<_B+_A_D1c_B>_D
c_D1c_B-_D1i_B+_B-_A_C_L1_C_F
R_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
