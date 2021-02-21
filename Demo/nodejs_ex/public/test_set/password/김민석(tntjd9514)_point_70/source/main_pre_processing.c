//김민석(tntjd9514)_point_70
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int fibo(int n){
    if (n==1){
        return 1;
    }
    else if(n==2){
        return 1;
    }
    else{
        return fibo(n-2)+fibo(n-1);
    }
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int aa,i;

	scanf("%d", &fibo_n);
	scanf("%s", text);

	aa = fibo(fibo_n);

    for(i=0; i<strlen(text); i++){
        text[i] = text[i] + aa;
        while(!(text[i]<=90 && text[i]>=65)){
            text[i] = text[i] - 26;
        }
    }
    printf("%s\n", text);
    
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_R_C_D1i_B==_D1i_R_
_D1i_B-_E_F3_D1i_B-_E_F3_B+_R
C_L1_L1_C_F1_L2int_T2_F2_D2_L
int_T2_D2_L2char_T2_D1i_D2_L2
nt_T2_D2_L2int_T2_D2_D1s_E_F3
D1s_E_F3_E_F3_A_D1i_A_E_F3_B<
B+_A_D1i_B<=_D1i_B>=_B&&_D1i_
-_A_C_W_C_FOR_D1s_E_F3_D1i_R_
_F1_1_
###############################*/
//$//
