//정민규(jmingrove21)_point_30
#define _CRT_SECURE_NO_WARNINGS
  #define TEXT_MAX 100

int fibo(int n);
int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

    if(fibo_n<1||fibo_n>30)
        return 0;
    if(text=="")
        return 0;
    int j;
    int flag=0;
    for(j=0;j<strlen(text);j++){
        if(text[j]>=65&&text[j]<=90){
            continue;
        }else{
            flag=1;
        }
    }
    if(flag==1)
        return 0;
    //A=65 Z=90
	////////////////////////////////////////
    int num=fibo(fibo_n);
    num=num%27;

    int i;
    for(i=0;i<strlen(text);i++){
        text[i]=text[i]+num; 
        if(text[i]>90){
            text[i]=text[i]-26; 
        }
    }
	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}

int fibo(int n){
    if(n==1)
        return 1;
    else if(n==2)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_D1s_E_F3_D1s_E_F
_D1i_B<_D1i_B>_B||_D1i_R_L1_D
s_B==_D1i_R_L1_L2int_T2_D2_L2
nt_T2_D1i_D2_D1i_A_E_F3_B<_D1
_B>=_D1i_B<=_B&&_C_D1i_A_C_L1
C_FOR_D1i_B==_D1i_R_L1_L2int_
2_E_F3_D2_D1i_B%_A_L2int_T2_D
_D1i_A_E_F3_B<_B+_A_D1i_B>_D1
_B-_A_C_L1_C_FOR_D1s_E_F3_D1i
R_C_F1_L2int_T2_D2_P2_L2int_T
_F2_D2_D1i_B==_D1i_R_D1i_B==_
1i_R_D1i_B-_E_F3_D1i_B-_E_F3_
+_R_L1_L1_C_F1_1_
###############################*/
//$//
