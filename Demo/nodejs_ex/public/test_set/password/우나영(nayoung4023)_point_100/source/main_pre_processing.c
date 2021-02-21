//우나영(nayoung4023)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int main()
{
	int fibo_n,result=0;
    int i,j,len;
	char text[TEXT_MAX];
    int fibo[100]={0};
    int fib;
    int k;

	scanf("%d", &fibo_n);
	scanf("%s", text);
	////////////////////////////////////////
    fibo[1]=1;
    fibo[2]=1;
    if(fibo_n==1||fibo_n==2)
    {
        result=1;
    }
    else
    {
        for(i=3;i<=fibo_n;i++)
        {
            fibo[i]=fibo[i-1]+fibo[i-2];
        }
        result=fibo[fibo_n];
    }

    len=strlen(text);

    //printf("%d",'A');
    if(result>26)
    {
        result=result%26;
    }

    for(i=0;i<len;i++)
    {
        if(text[i]>='A'&&text[i]<='Z')
        {
            text[i]=text[i]+result;
            if(text[i]>'Z')
            {
                text[i]=text[i]-26;
            }
        }
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_L2int_T2_D2_L2int
T2_D2_L2int_T2_D2_L2char_T2_D
i_D2_L2int_T2_D1i_D1i_D2_L2in
_T2_D2_L2int_T2_D2_D1s_E_F3_D
s_E_F3_D1i_D1i_A_D1i_D1i_A_D1
_B==_D1i_B==_B||_D1i_A_C_D1i_
_B<=_D1i_B-_D1i_B-_B+_A_C_FOR
A_C_L1_E_F3_A_D1i_B>_D1i_B%_A
C_L1_D1i_A_B<_D1c_B>=_D1c_B<=
B&&_B+_A_D1c_B>_D1i_B-_A_C_L1
C_L1_C_FOR_D1s_E_F3_D1i_R_C_F
_1_
###############################*/
//$//
