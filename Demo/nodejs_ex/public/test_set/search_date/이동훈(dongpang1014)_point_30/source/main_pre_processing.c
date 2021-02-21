//이동훈(dongpang1014)_point_30
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int fibo(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}


int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int inc;
    int k;
    int len;
	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    inc=fibo(fibo_n);
    len=strlen(text);

    if(len>100)
    {
        return -1;
    }
    for(k=0;k<len;k++)
    {
        if('Z'<text[k]||'A'>text[k])
        {
            return -1;
        }
    }

    for(k=0;k<len;k++)
    {
        text[k]+=inc;
        if(text[k]>'Z')
        {
            text[k]=text[k]-1+'A'-'Z';
        }
    }
    if(text[0]==NULL)
    {
        return 0;
    }
	////////////////////////////////////////
    if(fibo_n<1||fibo_n>30)
    {
        return -1;
    }

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_B==_B||_D1i_R_C_D1
_B-_E_F3_D1i_B-_E_F3_B+_R_C_L
_C_F1_L2int_T2_F2_D2_L2int_T2
D2_L2char_T2_D1i_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D2_D1s
E_F3_D1s_E_F3_E_F3_A_E_F3_A_D
i_B>_D1i_R_C_L1_D1i_A_B<_D1c_
<_D1c_B>_B||_D1i_R_C_L1_C_FOR
D1i_A_B<_A_D1c_B>_D1i_B-_D1c_
+_D1c_B-_A_C_L1_C_FOR_D1i_B==
D1i_R_C_L1_D1i_B<_D1i_B>_B||_
1i_R_C_L1_D1s_E_F3_D1i_R_C_F1
1_
###############################*/
//$//
