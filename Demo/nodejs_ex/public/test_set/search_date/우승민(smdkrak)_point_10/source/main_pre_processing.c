//우승민(smdkrak)_point_10
#define _CRT_SECURE_NO_WARNINGS
   
#define TEXT_MAX 100

int fibo(int n);

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

    int fibonnaci=0;

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////

    fibonnaci = fibo(fibo_n);
    int cnt;
    int cnt1;
    int n1;
    int n2=0;
    
    for(n1=0; n1<strlen(text);n1++)
    {
        cnt = fibonnaci % 26;

        if(text[n1]+cnt<=122)
        {
            text[n1] = text[n1]+cnt;
            if(text[n1]+cnt>122)
            text[n1]=text[n1]-(26-cnt);
        }
        else if(text[n1]+cnt>122)
        text[n1]=text[n1]-(26-cnt);
    }
	////////////////////////////////////////
	printf("%s\n", text);
	return 0;
}

int fibo(int n)
{
    if(n<=1)
    return 1;
    if(n==2)
    return 1;
    if(n>2)
    return fibo(n-2)+fibo(n-1);
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_L2int_T2_D1i_D2_
1s_E_F3_D1s_E_F3_E_F3_A_L2int
T2_D2_L2int_T2_D2_L2int_T2_D2
L2int_T2_D1i_D2_D1i_A_E_F3_B<
D1i_B%_A_B+_D1i_B<=_B+_A_B+_D
i_B>_D1i_B-_B-_A_L1_C_B+_D1i_
>_D1i_B-_B-_A_L1_L1_C_FOR_D1s
E_F3_D1i_R_C_F1_L2int_T2_D2_P
_L2int_T2_F2_D2_D1i_B<=_D1i_R
L1_D1i_B==_D1i_R_L1_D1i_B>_D1
_B-_E_F3_D1i_B-_E_F3_B+_R_L1_
_F1_1_
###############################*/
//$//
