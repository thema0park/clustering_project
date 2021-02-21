//오우진(allegro7)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100
int fibonacci(int n){
    if( n == 0 || n == 1)
        return 1;
    return fibonacci(n-2) + fibonacci(n-1);
}
char alpha['Z'-'A'] = {0,};
char pick(int n, char k){
    int i;
    for( i = 0; i < n; i++){
        k++;
        if(k > 'Z')
            k = 'A';
    }
    return k;
}
int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int c,i;
    int k = 0;
    int size = 'A'-'Z';
    for(i = 0; i < size; i++){
        alpha[i] = 'A' + i;
    }
	scanf("%d", &fibo_n);
	scanf("%s", text);
    c = fibonacci(fibo_n-1);
	////////////////////////////////////////
    for(i = 0; i < strlen(text); i++){
        text[i] = pick(c, text[i]);
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_B==_B||_D1i_R_L1_D
i_B-_E_F3_D1i_B-_E_F3_B+_R_C_
1_L2char_T2_D1c_D1c_B-_D1i_D2
L2int_T2_D2_L2char_T2_D2_P2_L
char_T2_F2_D2_L2int_T2_D2_D1i
A_B<_D1c_B>_D1c_A_L1_C_FOR_R_
_F1_L2int_T2_F2_D2_L2int_T2_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_L
int_T2_D1c_D1c_B-_D2_D1i_A_B<
D1c_B+_A_C_FOR_D1s_E_F3_D1s_E
F3_D1i_B-_E_F3_A_D1i_A_E_F3_B
_E_F3_A_C_FOR_D1s_E_F3_D1i_R_
_F1_1_
###############################*/
//$//
