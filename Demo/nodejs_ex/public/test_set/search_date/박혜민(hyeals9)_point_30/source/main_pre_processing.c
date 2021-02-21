//박혜민(hyeals9)_point_30
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int fibo(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    return fibo(n-1)+fibo(n-2);
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int fibo_result=0;
    int len=0;
    int i=0;

	scanf("%d", &fibo_n);
	scanf("%s", text);

    len=strlen(text);
    fibo_result=fibo(fibo_n);

    for(i=0;i<len;i++)
    {
        text[i]+=fibo_result;
         
         if(text[i]>'Z')
            {
                while(!(text[i]>='A'&&text[i]<='Z'))
                    {
                        text[i]-=26;
                    }
            }
    }
	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_R_L1_D1i_B==_D1i_R
L1_D1i_B-_E_F3_D1i_B-_E_F3_B+
R_C_F1_L2int_T2_F2_D2_L2int_T
_D2_L2char_T2_D1i_D2_L2int_T2
D1i_D2_L2int_T2_D1i_D2_L2int_
2_D1i_D2_D1s_E_F3_D1s_E_F3_E_
3_A_E_F3_A_D1i_A_B<_A_D1c_B>_
1c_B>=_D1c_B<=_B&&_D1i_A_C_W_
_L1_C_FOR_D1s_E_F3_D1i_R_C_F1
1_
###############################*/
//$//
