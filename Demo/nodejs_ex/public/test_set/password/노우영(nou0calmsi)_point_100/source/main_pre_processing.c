//노우영(nou0calmsi)_point_100
#define _CRT_SECURE_NO_WARNINGS
  #define TEXT_MAX 100
int dp[31]={0};
int fib(int n){
    if(n==1){
        return dp[n]=1;
    }
    else if(n==2){
        return dp[n]=1;
    }
    else if(dp[n]>0) return dp[n];
    return dp[n]=fib(n-1)+fib(n-2);
}
int main()
{
	int fibo_n, len, plus,i=0,u;
	char text[TEXT_MAX];
    char change[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	scanf("%d", &fibo_n);
    plus=fib(fibo_n);
	scanf("%s", text);
    len=strlen(text);
    for(i=0;i<len;i++){
        u=(text[i]-'A'+plus)%26;
        text[i]=change[u];
    }
    printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D1i_D1i_D2_L2int_T2_D
_P2_L2int_T2_F2_D2_D1i_B==_D1
_A_R_C_D1i_B==_D1i_A_R_C_D1i_
>_R_L1_L1_L1_D1i_B-_E_F3_D1i_
-_E_F3_B+_A_R_C_F1_L2int_T2_F
_D2_L2int_T2_D2_L2int_T2_D2_L
int_T2_D2_L2int_T2_D1i_D2_L2i
t_T2_D2_L2char_T2_D1i_D2_L2ch
r_T2_D1i_D1s_D2_D1s_E_F3_E_F3
A_D1s_E_F3_E_F3_A_D1i_A_B<_D1
_B-_B+_D1i_B%_A_A_C_FOR_D1s_E
F3_D1i_R_C_F1_1_
###############################*/
//$//
