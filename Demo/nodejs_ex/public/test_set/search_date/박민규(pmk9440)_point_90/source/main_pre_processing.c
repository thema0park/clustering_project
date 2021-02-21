//박민규(pmk9440)_point_90
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int main()
{
    int i, len;
    int a;
	int fibo_n;
	char text[TEXT_MAX];
    char store[TEXT_MAX];
    int Fibonacci[100];

	scanf("%d", &fibo_n);
    if (fibo_n<1 || fibo_n>30)
    {
        return 0;
    }
	scanf("%s", text);

    len = strlen(text);
    if (len > 99 || len ==0) return 0;

    for (i=0 ; i<len ;i++)
    {
        if (text[i]<'A' || text[i]>'Z') return 0;
    }

    Fibonacci[0] = 1;
    Fibonacci[1] = 1;

    for (i=2 ; i<100 ; i++)
    {
        Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
    }

    for (i=0 ; i<30 ; i++)
    {
        if (Fibonacci[i] > 26) 
        {
            a= Fibonacci[i]/26;
            Fibonacci[i] = Fibonacci[i] -26*a;
        }
    }

    for (i=0 ; i<len ; i++)
    {
        store[i] = text[i] + Fibonacci[fibo_n-1];

        if (store[i] > 'Z')
        {
            store[i] = store[i] + 'A' - 'Z' -1;
        }
    }

	

	printf("%s\n", store);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2char_T2_D1i_D2_L2char_T2_
1i_D2_L2int_T2_D1i_D2_D1s_E_F
_D1i_B<_D1i_B>_B||_D1i_R_C_L1
D1s_E_F3_E_F3_A_D1i_B>_D1i_B=
_B||_D1i_R_L1_D1i_A_B<_D1c_B<
D1c_B>_B||_D1i_R_L1_C_FOR_D1i
D1i_A_D1i_D1i_A_D1i_A_D1i_B<_
1i_B-_D1i_B-_B+_A_C_FOR_D1i_A
D1i_B<_D1i_B>_D1i_B/_A_D1i_B*
B-_A_C_L1_C_FOR_D1i_A_B<_D1i_
-_B+_A_D1c_B>_D1c_B+_D1c_B-_D
i_B-_A_C_L1_C_FOR_D1s_E_F3_D1
_R_C_F1_1_
###############################*/
//$//
