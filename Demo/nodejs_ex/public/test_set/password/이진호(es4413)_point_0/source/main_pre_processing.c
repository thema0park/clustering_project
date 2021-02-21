//이진호(es4413)_point_0
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int fibo(int n);

int main()
{
	int fibo_n;
    int i;
	char text[TEXT_MAX];
    int t=0;

    char *ptrtext = text;
	scanf("%d", &fibo_n);
	scanf("%s", text);
    
    t = fibo(fibo_n);
    
	////////////////////////////////////////
    for(i = 0; i < strlen(text);i++)
    {
        text[i] = text[i] + t;
        if (text[i]>'Z') text[i] - 26;
    }
	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}

int fibo(int n)
{
    fibo(1) == 1; fibo(2) == 1;

    return fibo(n-1)+ fibo(n-2);
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2char_T2_D1i_D2_L2in
_T2_D1i_D2_L2char_T2_P1_D2_D1
_E_F3_D1s_E_F3_E_F3_A_D1i_A_E
F3_B<_B+_A_D1c_B>_D1i_B-_L1_C
FOR_D1s_E_F3_D1i_R_C_F1_L2int
T2_D2_P2_L2int_T2_F2_D2_D1i_E
F3_D1i_B==_D1i_E_F3_D1i_B==_D
i_B-_E_F3_D1i_B-_E_F3_B+_R_C_
1_1_
###############################*/
//$//
