//박신명(skyjpower)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100
#define DP_SIZE 32
#define ALPA_SIZE 26

int fibonacci(int n, int dp[]){
    if(n == 1 || n == 2) return 1;
    if(dp[n]) return dp[n];

    return dp[n] = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
}

int main()
{
	int fibo_n, i;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int dp[DP_SIZE] = {0,};
    int plus_num = fibonacci(fibo_n, dp);
    plus_num %= ALPA_SIZE;

    for(i = 0; i < strlen(text); i++){
        text[i] = (text[i] + plus_num);
        if(text[i]  > 'Z'){
            text[i] -= ALPA_SIZE;
        }
    }
    
	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_D1i_B==_D1i_B==_B|
_D1i_R_L1_R_L1_D1i_B-_E_F3_D1
_B-_E_F3_B+_A_R_C_F1_L2int_T2
F2_D2_L2int_T2_D2_L2int_T2_D2
L2char_T2_D1i_D2_D1s_E_F3_D1s
E_F3_L2int_T2_D1i_D1i_D2_L2in
_T2_E_F3_D2_D1i_A_D1i_A_E_F3_
<_B+_A_D1c_B>_D1i_A_C_L1_C_FO
_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
