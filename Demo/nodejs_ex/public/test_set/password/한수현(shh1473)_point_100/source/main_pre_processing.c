//한수현(shh1473)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int fibo(int f)
{
    if (f < 2) { return 1; }

    return fibo(f - 1) + fibo(f - 2);
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////

    int n = fibo(fibo_n - 1);

    n %= 26;

    int index = 0;

    while (text[index] != '\0')
    {
        text[index] += n;

        if (text[index] > 'Z')
        {
            text[index] -= 26;
        }

        if (text[index] < 'A')
        {
            text[index] += 26;
        }

        ++index;
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B<_D1i_R_C_L1_D1i_B-_E_F3_
1i_B-_E_F3_B+_R_C_F1_L2int_T2
F2_D2_L2int_T2_D2_L2char_T2_D
i_D2_D1s_E_F3_D1s_E_F3_L2int_
2_D1i_B-_E_F3_D2_D1i_A_L2int_
2_D1i_D2_D1c_B!=_A_D1c_B>_D1i
A_C_L1_D1c_B<_D1i_A_C_L1_C_W_
1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
