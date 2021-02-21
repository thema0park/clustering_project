//배정현(dmcj421)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

long long fib(int a){
    long long fn, fn1, fn2, tmp;
    int i;
    fn=0;
    fn1=0; 
    fn2=1;
    for(i=0;i<a-1;i++){
        tmp=fn1;
        fn1 = fn2;
        fn = tmp;
        fn2 = fn1 + fn;
    }
    return fn2;
}

int main()
{
	int fibo_n, i;
	char text[TEXT_MAX]={0};
    long long a;

	scanf("%d\n", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    a=fib(fibo_n)%26;
    for(i=0;i<TEXT_MAX;i++){
        if(text[i]<='Z' && text[i]>='A'){
            text[i]=text[i]+a;
            if(text[i]>'Z'){
                text[i]=text[i]-26;
            }
        }

    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2long_T2_F2_D2
L2long_T2_D2_L2long_T2_D2_L2l
ng_T2_D2_L2long_T2_D2_L2int_T
_D2_D1i_A_D1i_A_D1i_A_D1i_A_D
i_B-_B<_A_A_A_B+_A_C_FOR_R_C_
1_L2int_T2_F2_D2_L2int_T2_D2_
2int_T2_D2_L2char_T2_D1i_D1i_
2_L2long_T2_D2_D1s_E_F3_D1s_E
F3_E_F3_D1i_B%_A_D1i_A_D1i_B<
D1c_B<=_D1c_B>=_B&&_B+_A_D1c_
>_D1i_B-_A_C_L1_C_L1_C_FOR_D1
_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
