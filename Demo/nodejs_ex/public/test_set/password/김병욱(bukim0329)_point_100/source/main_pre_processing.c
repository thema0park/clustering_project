//김병욱(bukim0329)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

long long fibo(int num){
    long long answer = 0;
    int i;
    long long tmp1 = 1;
    long long tmp2 = 1;
    if(num == 1 || num == 2){
        answer = 1;
    }
    for(i = 0; i < num - 2; i++){
        answer = tmp1 + tmp2;
        tmp1 = tmp2;
        tmp2 = answer;
    }
    return answer;
}
int main()
{
	int fibo_n, i;
    long long num;
	char text[TEXT_MAX];
    int text_len;
	scanf("%d", &fibo_n);
	scanf("%s", text);
    text_len = strlen(text);
	////////////////////////////////////////
    num = fibo(fibo_n);
    for(i = 0; i < text_len; i++){
        text[i] += num % 26;
        if(text[i] > 'Z'){
            text[i] = text[i] - 'Z' + 'A' - 1;
        }
    }


	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2long_T2_F2_D2
L2long_T2_D1i_D2_L2int_T2_D2_
2long_T2_D1i_D2_L2long_T2_D1i
D2_D1i_B==_D1i_B==_B||_D1i_A_
_L1_D1i_A_D1i_B-_B<_B+_A_A_A_
_FOR_R_C_F1_L2int_T2_F2_D2_L2
nt_T2_D2_L2int_T2_D2_L2long_T
_D2_L2char_T2_D1i_D2_L2int_T2
D2_D1s_E_F3_D1s_E_F3_E_F3_A_E
F3_A_D1i_A_B<_D1i_B%_A_D1c_B>
D1c_B-_D1c_B+_D1i_B-_A_C_L1_C
FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
