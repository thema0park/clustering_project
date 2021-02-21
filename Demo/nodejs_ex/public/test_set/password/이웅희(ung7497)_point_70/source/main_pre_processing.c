//이웅희(ung7497)_point_70
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int main()
{
	int fibo_n, fibonacci[30] = {0}, i, j,len = 0,n=0;
	char text[TEXT_MAX];
    fibonacci[0] = 1;
    fibonacci[1] = 1;
	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    for(i = 0; i < fibo_n; i++){
        fibonacci [i+2] = fibonacci[i] + fibonacci[i+1];
    }
    if(fibonacci[fibo_n-1] > 26){
        while(fibonacci[fibo_n - 1] > 26){
            fibonacci[fibo_n -1 ] -= 26;
        }
    }
    while(text[n] != '\0'){            // input 길이 구하기
        n++;
        len++;
    }
    for(j = 0; j < len; j++){
        text[j] += fibonacci[fibo_n - 1];
        if(text[j] > 'Z')
            text[j] -= 26;
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D1i_D2_L2int_T2_D2_L
int_T2_D2_L2int_T2_D1i_D2_L2i
t_T2_D1i_D2_L2char_T2_D1i_D2_
1i_D1i_A_D1i_D1i_A_D1s_E_F3_D
s_E_F3_D1i_A_B<_D1i_B+_D1i_B+
B+_A_C_FOR_D1i_B-_D1i_B>_D1i_
-_D1i_B>_D1i_B-_D1i_A_C_W_C_L
_D1c_B!=_C_W_D1i_A_B<_D1i_B-_
_D1c_B>_D1i_A_L1_C_FOR_D1s_E_
3_D1i_R_C_F1_1_
###############################*/
//$//
