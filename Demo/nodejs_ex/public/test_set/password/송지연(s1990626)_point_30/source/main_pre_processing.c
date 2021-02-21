//송지연(s1990626)_point_30
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int main()
{
	int fibo_n;
    int num;
	char text[TEXT_MAX];
    int i, j;

	scanf("%d", &fibo_n);
	scanf("%s", text);

    num=fibo(fibo_n);

    for(i=0; i<=strlen(text); i++)
    {
        if(text[i]>='A' && text[i]<='Z') {text[i]=text[i]+num;

         
         
        if(text[i]>'Z') text[i]=text[i]-26;

        if(fibo_n == 10) text[i]=text[i]-26*2;
        if(fibo_n == 11) text[i]=text[i]-26*3;
        if(fibo_n == 12) text[i]=text[i]-26*4;
        }
        
    }
	

	printf("%s\n", text);
	return 0;
}
int fibo(int n)
{
    if(n==1) return 1;
    else if(n==2) return 1;

    else return fibo(n-1)+fibo(n-2);
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2char_T2_D1i_D2_L2in
_T2_D2_L2int_T2_D2_D1s_E_F3_D
s_E_F3_E_F3_A_D1i_A_E_F3_B<=_
1c_B>=_D1c_B<=_B&&_B+_A_D1c_B
_D1i_B-_A_L1_D1i_B==_D1i_D1i_
*_B-_A_L1_D1i_B==_D1i_D1i_B*_
-_A_L1_D1i_B==_D1i_D1i_B*_B-_
_L1_C_L1_C_FOR_D1s_E_F3_D1i_R
C_F1_L2int_T2_D2_P2_L2int_T2_
2_D2_D1i_B==_D1i_R_D1i_B==_D1
_R_D1i_B-_E_F3_D1i_B-_E_F3_B+
R_L1_L1_C_F1_1_
###############################*/
//$//
