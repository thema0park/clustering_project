//정수환(j3322814)_point_30
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100
#define ENGSIZE 26

int f(int n)
{
    if (n==0||n==1)
    {
        return n;
    }
    else
    {
        return f(n-1)+f(n-2);
    }
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int i;
    int temp;

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////

    for (i=0;text[i]!='\0';i++)
    {
        temp = text[i];
        if (temp + f(fibo_n)>'Z')
        {
            temp-=ENGSIZE;
        }
        text[i]=temp + f(fibo_n);
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_B==_B||_R_C_D1i_B-
E_F3_D1i_B-_E_F3_B+_R_C_L1_C_
1_L2int_T2_F2_D2_L2int_T2_D2_
2char_T2_D1i_D2_L2int_T2_D2_L
int_T2_D2_D1s_E_F3_D1s_E_F3_D
i_A_D1c_B!=_A_E_F3_B+_D1c_B>_
1i_A_C_L1_E_F3_B+_A_C_FOR_D1s
E_F3_D1i_R_C_F1_1_
###############################*/
//$//
