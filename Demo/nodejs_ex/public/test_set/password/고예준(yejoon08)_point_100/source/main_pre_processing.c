//고예준(yejoon08)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int i=0,k=0;
    int len=0;
    int long long f0=1; 
    int long long f1=1;
    int long long f2=0;
    int mod=0;
	scanf("%d", &fibo_n);
    scanf("%s",text);
    
    if(fibo_n<2){
        f2=1;
    }
    else if(fibo_n>=2){
        for(i=0;i<fibo_n-2;i++){
            f2=f0+f1;
            f0=f1;
            f1=f2;
        }
    }

    len=strlen(text);
    
	////////////////////////////////////////
    for(i=0;i<len;i++){
        if(text[i]>='A' && text[i]<='Z'){
            mod=f2%26;
            text[i]=text[i]+mod;
            if(text[i]>'Z'){
                text[i]=text[i]-26;
            }
        }
    }
	////////////////////////////////////////
   printf("%s\n",text);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_L2int_T2_D1i_D2_
2int_T2_D1i_D2_L2int_T2_D1i_D
_L2int_T2_D1i_D2_L2int_T2_D1i
D2_L2int_T2_D1i_D2_L2int_T2_D
i_D2_D1s_E_F3_D1s_E_F3_D1i_B<
D1i_A_C_D1i_B>=_D1i_A_D1i_B-_
<_B+_A_A_A_C_FOR_C_L1_L1_E_F3
A_D1i_A_B<_D1c_B>=_D1c_B<=_B&
_D1i_B%_A_B+_A_D1c_B>_D1i_B-_
_C_L1_C_L1_C_FOR_D1s_E_F3_D1i
R_C_F1_1_
###############################*/
//$//
