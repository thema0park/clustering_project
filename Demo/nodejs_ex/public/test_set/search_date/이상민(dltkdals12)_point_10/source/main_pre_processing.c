//이상민(dltkdals12)_point_10
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int fibo(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 1;
    }
    else if(n==3)
    {
        return 2;
    }

    return fibo(n-1)+fibo(n-2);
}




int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

    int fibo_result=fibo(fibo_n);

    int i=0;

    for(i=0;i<strlen(text);i++)
    {
        text[i]+=fibo_result;
        if(text[i]>'Z')
        {
            text[i]=text[i]-'Z'+fibo_result;
        }
    }

    

    

	////////////////////////////////////////

    



	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_R_C_D1i_B==_D1i_R_
_D1i_B==_D1i_R_C_L1_L1_L1_D1i
B-_E_F3_D1i_B-_E_F3_B+_R_C_F1
L2int_T2_F2_D2_L2int_T2_D2_L2
har_T2_D1i_D2_D1s_E_F3_D1s_E_
3_L2int_T2_E_F3_D2_L2int_T2_D
i_D2_D1i_A_E_F3_B<_A_D1c_B>_D
c_B-_B+_A_C_L1_C_FOR_D1s_E_F3
D1i_R_C_F1_1_
###############################*/
//$//
