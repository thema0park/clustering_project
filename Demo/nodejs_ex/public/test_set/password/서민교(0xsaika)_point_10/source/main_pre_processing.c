//서민교(0xsaika)_point_10
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int n = 0;

int fibo(int num){
        if(num == 0) return 0;
        else if(num == 1) return 1;
        else return fibo(num-1) + fibo(num-2);
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX] = {0,};

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int a,i,j = 0;
    a = fibo(fibo_n);
    
    for (i=0; i<TEXT_MAX; i++){
        int sex = 0x61;
        if(text[i] == 0){
            break;
        }
        if(text[i] + a > 90){
            text[i] = sex + ((text[i]) - 90);
        }else{
            text[i] = text[i] + a;
        }
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D1i_D2_L2int_T2_D2_P2
L2int_T2_F2_D2_D1i_B==_D1i_R_
1i_B==_D1i_R_D1i_B-_E_F3_D1i_
-_E_F3_B+_R_L1_L1_C_F1_L2int_
2_F2_D2_L2int_T2_D2_L2char_T2
D1i_D1i_D2_D1s_E_F3_D1s_E_F3_
2int_T2_D2_L2int_T2_D2_L2int_
2_D1i_D2_E_F3_A_D1i_A_D1i_B<_
2int_T2_D1i_D2_D1i_B==_C_L1_B
_D1i_B>_D1i_B-_B+_A_C_B+_A_C_
1_C_FOR_D1s_E_F3_D1i_R_C_F1_1

###############################*/
//$//
