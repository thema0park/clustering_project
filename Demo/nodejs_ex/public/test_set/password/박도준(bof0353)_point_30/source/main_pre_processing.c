//박도준(bof0353)_point_30
#define _CRT_SECURE_NO_WARNINGS
  #define TEXT_MAX 100
int fibo2(int n){
    if(n==1)
    return 1;
    else if(n==2)
    return 1;
    else if(n>2)
    return fibo2(n-1)+fibo2(n-2);


}


int main()
{   int len;
	int fibo_n;
	char text[TEXT_MAX];
    int a,b,x;
	scanf("%d", &fibo_n);
	scanf("%s", text);
    char y;
    a = fibo2(fibo_n);
    len = strlen(text);
    if(len <=99){
        if('A'<= text||text <='Z'){
        for(x=0; x<len; x++){
            
           y =(text[x]+=a);
                if(y>'Z'){
                    text[x] ='A'+ (y-'Z'-1);
                }

        
            

            }
        }
    }
	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_R_D1i_B==_D1i_R_D1
_B>_D1i_B-_E_F3_D1i_B-_E_F3_B
_R_L1_L1_L1_C_F1_L2int_T2_F2_
2_L2int_T2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_L2int_T2_D2_L2in
_T2_D2_L2int_T2_D2_D1s_E_F3_D
s_E_F3_L2char_T2_D2_E_F3_A_E_
3_A_D1i_B<=_D1c_B<=_D1c_B<=_B
|_D1i_A_B<_A_A_D1c_B>_D1c_D1c
B-_D1i_B-_B+_A_C_L1_C_FOR_C_L
_C_L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
