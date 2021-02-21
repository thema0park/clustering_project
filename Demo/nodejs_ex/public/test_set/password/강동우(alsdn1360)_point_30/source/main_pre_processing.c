//강동우(alsdn1360)_point_30
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int a=1, b=1;
    int c=0;
    int i;
    int len;

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////

    if (fibo_n <1 && fibo_n >30)
    {
        return 0;
    }

    for (i=2;i<fibo_n;i++)
    {
        c = a+b;
        a=b;
        b=c;
    }

    if(fibo_n == 1)
    {
        c=1;
    }
    if(fibo_n == 2)
    {
        c=1;
    }

    len = strlen(text);

    if(len == 0) return 0;
    
    for(i=0;i<len;i++)
    {
        if(text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] += c % 25;
            if(text[i] > 'Z')
            {
                text[i] -= 26;
            }
        }
    }


	////////////////////////////////////////

	printf("%s\n", text);

	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_L2int_T2_D1i_D2_
2int_T2_D1i_D2_L2int_T2_D1i_D
_L2int_T2_D2_L2int_T2_D2_D1s_
_F3_D1s_E_F3_D1i_B<_D1i_B>_B&
_D1i_R_C_L1_D1i_A_B<_B+_A_A_A
C_FOR_D1i_B==_D1i_A_C_L1_D1i_
==_D1i_A_C_L1_E_F3_A_D1i_B==_
1i_R_L1_D1i_A_B<_D1c_B>=_D1c_
<=_B&&_D1i_B%_A_D1c_B>_D1i_A_
_L1_C_L1_C_FOR_D1s_E_F3_D1i_R
C_F1_1_
###############################*/
//$//
