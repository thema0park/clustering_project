//김주현(rlawngus0814)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);
    int len=0;
    len=strlen(text);

    int f1=1,f2=0,fn=0;
    
    int Test=fibo_n;
    while(Test--)
    {
        fn=f1+f2;
        f2=f1;
        f1=fn;
    }
    //f2가 내가 원하는 피보나치 수
    int arr[TEXT_MAX]={0};
    int i=0,god=0;
    for(i=0;i<len;i++)
    {
        god=text[i]+f2;
        while(1)
        {
            if(god>90)
            {
                god=god-90;
                god=god+64;
            }
            else
                break;
        }
        arr[i]=god;
    }
    int j=0;
    for(j=0;j<len;j++)
    {
        printf("%c",(char)arr[j]);
    }
    printf("\n");


	////////////////////////////////////////



	////////////////////////////////////////

	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_D1s_E_F3_D1s_E_F
_L2int_T2_D1i_D2_E_F3_A_L2int
T2_D1i_D2_L2int_T2_D1i_D2_L2i
t_T2_D1i_D2_L2int_T2_D2_B+_A_
_A_C_W_L2int_T2_D1i_D1i_D2_L2
nt_T2_D1i_D2_L2int_T2_D1i_D2_
1i_A_B<_B+_A_D1i_D1i_B>_D1i_B
_A_D1i_B+_A_C_L1_C_W_A_C_FOR_
2int_T2_D1i_D2_D1i_A_B<_D1s_L
char_T2_E_F3_C_FOR_D1s_E_F3_D
i_R_C_F1_1_
###############################*/
//$//
