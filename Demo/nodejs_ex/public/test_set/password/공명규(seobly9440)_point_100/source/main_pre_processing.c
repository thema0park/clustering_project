//공명규(seobly9440)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int main()
{
	int fibo_n, size;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int fibo1, fibo2, temp;
    fibo1 = fibo2 = 1;
    for(fibo_n -= 2; fibo_n > 0; fibo_n--)
    {
        temp = fibo2;
        fibo2 += fibo1;
        fibo1 = temp;
    }
    size = fibo2 % 26;
    int i;
    for(i = 0; i < strlen(text); i++){
        text[i] += size;
        if(text[i] > 90) text[i] -= 26;
    }


	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2char_T2_D1i_D2_D1s_
_F3_D1s_E_F3_L2int_T2_D2_L2in
_T2_D2_L2int_T2_D2_D1i_A_A_D1
_A_D1i_B>_A_A_A_C_FOR_D1i_B%_
_L2int_T2_D2_D1i_A_E_F3_B<_A_
1i_B>_D1i_A_L1_C_FOR_D1s_E_F3
D1i_R_C_F1_1_
###############################*/
//$//
