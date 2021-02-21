//송인범(dlsqja343)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100
int fibo(int n);
int main()
{
	int fibo_n;
    long long result;
    int i,c;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    result=fibo(fibo_n);
    result=result%26; 
  for(i=0;i<strlen(text);i++)
    {
        text[i]=text[i]+result;
        if(text[i]>'Z')
        {
         text[i]=text[i]-26;   
        }
      
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}
int fibo(int n)
{
 
   if(n==1)
   {
       return 1;
   }
   if(n==2)
   {
       return 1;
   }
    return fibo(n-1)+fibo(n-2); 
}
/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
2int_T2_F2_D2_L2int_T2_D2_L2l
ng_T2_D2_L2int_T2_D2_L2int_T2
D2_L2char_T2_D1i_D2_D1s_E_F3_
1s_E_F3_E_F3_A_D1i_B%_A_D1i_A
E_F3_B<_B+_A_D1c_B>_D1i_B-_A_
_L1_C_FOR_D1s_E_F3_D1i_R_C_F1
L2int_T2_D2_P2_L2int_T2_F2_D2
D1i_B==_D1i_R_C_L1_D1i_B==_D1
_R_C_L1_D1i_B-_E_F3_D1i_B-_E_
3_B+_R_C_F1_1_
###############################*/
//$//
