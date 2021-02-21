//김민석(rjwltps57)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int farr[30] = {0, };


int fibo(int n){
    if(farr[n] != 0){
        return farr[n];
    }else{
        if(n == 1 || n == 2){
            farr[n] = 1;
            return 1;
        }else{
            farr[n] = fibo(n-1)+fibo(n-2);
            return farr[n];
        }
    }
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////

    int i;
    
    for(i = 0; i<strlen(text); i++){
        int cnt = 0;
        cnt = fibo(fibo_n)/26;
        text[i] = text[i] + fibo(fibo_n) - 26*cnt;
        if(text[i] > 90){
            text[i] -= 26;
        }
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D1i_D1i_D2_L2int_T2_D
_P2_L2int_T2_F2_D2_D1i_B!=_R_
_D1i_B==_D1i_B==_B||_D1i_A_D1
_R_C_D1i_B-_E_F3_D1i_B-_E_F3_
+_A_R_C_L1_C_L1_C_F1_L2int_T2
F2_D2_L2int_T2_D2_L2char_T2_D
i_D2_D1s_E_F3_D1s_E_F3_L2int_
2_D2_D1i_A_E_F3_B<_L2int_T2_D
i_D2_E_F3_D1i_B/_A_E_F3_B+_D1
_B*_B-_A_D1i_B>_D1i_A_C_L1_C_
OR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
