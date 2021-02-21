//이예진(uhoo99)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int Fibo(int n)
{
    if(n==1 || n==2)
        return 1;
    return Fibo(n-1)+Fibo(n-2);
}

int main()
{
	int fibo_n,key=0;
    int i,len=0;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    key = Fibo(fibo_n);
    key=key%26;
    len=strlen(text);

    for(i=0;i<len;i++)
    {
        text[i]=text[i]+key;
        if(text[i]>'Z')
        {
            while(1)
            {
                text[i]=text[i]-'Z'+'A'-1;
                if('A'<=text[i] && text[i]<='Z')
                {
                    break;
                }
            }
        }
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_B==_B||_D1i_R_L1_D
i_B-_E_F3_D1i_B-_E_F3_B+_R_C_
1_L2int_T2_F2_D2_L2int_T2_D2_
2int_T2_D1i_D2_L2int_T2_D2_L2
nt_T2_D1i_D2_L2char_T2_D1i_D2
D1s_E_F3_D1s_E_F3_E_F3_A_D1i_
%_A_E_F3_A_D1i_A_B<_B+_A_D1c_
>_D1i_D1c_B-_D1c_B+_D1i_B-_A_
1c_B<=_D1c_B<=_B&&_C_L1_C_W_C
L1_C_FOR_D1s_E_F3_D1i_R_C_F1_
_
###############################*/
//$//
