//이유진(eugeneous)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100
int fib(int n);
int main()
{
	int fibo_n,i,j;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);
    
	////////////////////////////////////////
    j=fib(fibo_n);
    j=j%26;
    for(i=0;text[i]!='\0';i++)
    {
        if((text[i]+j)>'Z')
        text[i]=text[i]-26+j;
        else
        text[i]+=j;
    }

	////////////////////////////////////////
	printf("%s\n", text);
	return 0;
}
int fib(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2char_T2
D1i_D2_D1s_E_F3_D1s_E_F3_E_F3
A_D1i_B%_A_D1i_A_D1c_B!=_B+_D
c_B>_D1i_B-_B+_A_A_L1_C_FOR_D
s_E_F3_D1i_R_C_F1_L2int_T2_D2
P2_L2int_T2_F2_D2_D1i_B==_D1i
B==_B||_D1i_R_C_D1i_B-_E_F3_D
i_B-_E_F3_B+_R_C_L1_C_F1_1_
###############################*/
//$//
