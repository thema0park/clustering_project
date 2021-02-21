//이현우(gusdn052299)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int fibo(int n)
{
    if(n==1 || n==2) {return 1;}
    else if(n>2) {return fibo(n-1)+fibo(n-2);}
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int k;
    for(k=0; text[k]!='\0'; k++)
    {
        text[k]+=fibo(fibo_n)%26;
        if(text[k]>90)
        {
            text[k]=text[k]-26;
        }
    }

	////////////////////////////////////////
	printf("%s\n", text);
	return 0;
}
/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_B==_B||_D1i_R_C_D1
_B>_D1i_B-_E_F3_D1i_B-_E_F3_B
_R_C_L1_L1_C_F1_L2int_T2_F2_D
_L2int_T2_D2_L2char_T2_D1i_D2
D1s_E_F3_D1s_E_F3_L2int_T2_D2
D1i_A_D1c_B!=_E_F3_D1i_B%_A_D
i_B>_D1i_B-_A_C_L1_C_FOR_D1s_
_F3_D1i_R_C_F1_1_
###############################*/
//$//
