//강동효(intenr10)_point_30
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int fibo(int n);

int main()
{
    int k, i;
	int fibo_n;
	char text[TEXT_MAX];
    int len = 0;
    while(text[len]!=0)
        len++;
	scanf("%d", &fibo_n);
	scanf("%s", text);
    k = fibo(fibo_n);
    for(i = 0; i < len+2; i++)
    {
      text[i] += k;
    
     if(text[i] > 'Z')
     {
       text[i] -= 26;
     }
   }
   printf("%s\n", text);
	return 0;
}
int fibo(int n)
{
    if(n == 2 || n == 1)
    return 1;

    return fibo(n-1)+fibo(n-2);
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2char_T2
D1i_D2_L2int_T2_D1i_D2_D1i_B!
_W_D1s_E_F3_D1s_E_F3_E_F3_A_D
i_A_D1i_B+_B<_A_D1c_B>_D1i_A_
_L1_C_FOR_D1s_E_F3_D1i_R_C_F1
L2int_T2_D2_P2_L2int_T2_F2_D2
D1i_B==_D1i_B==_B||_D1i_R_L1_
1i_B-_E_F3_D1i_B-_E_F3_B+_R_C
F1_1_
###############################*/
//$//
