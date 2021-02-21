//심지수(rlj1202)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int i;
    int len = strlen(text);

    int a = 1;
    int b = 1;
    while (--fibo_n) {
        int c = a + b;
        a = b;
        b = c;
    }

    int add = a;

    for (i = 0; i < len; i++) {
        int offset = text[i] - 'A';
        offset += add;
        offset %= 'Z' - 'A' + 1;
        text[i] = 'A' + offset;
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_D1s_E_F3_D1s_E_F
_L2int_T2_D2_L2int_T2_E_F3_D2
L2int_T2_D1i_D2_L2int_T2_D1i_
2_L2int_T2_B+_D2_A_A_C_W_L2in
_T2_D2_D1i_A_B<_L2int_T2_D1c_
-_D2_A_D1c_D1c_B-_D1i_B+_A_D1
_B+_A_C_FOR_D1s_E_F3_D1i_R_C_
1_1_
###############################*/
//$//
