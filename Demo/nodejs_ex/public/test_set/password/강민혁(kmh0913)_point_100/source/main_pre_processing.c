//강민혁(kmh0913)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100


int fibo(int a){
    if (a == 0) return 0;
    else if (a == 1) return 1;
    else return fibo(a-1) + fibo(a-2);
}

int main()
{
	int fibo_n;
    int num;
    int len;
    int i;
	char text[TEXT_MAX];
    int sub[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    num = fibo(fibo_n);

    len = strlen(text);

    for(i = 0; i < len ; i++){
        sub[i] = text[i];
    }

    for(i = 0; i < len ; i++){
        sub[i] = sub[i] + num;
    }

    for(i = 0; i < len ; i++){
        while(1){
            if(sub[i] > 90) sub[i] = sub[i] - 26;
            else break;
        }
    }

    for(i = 0; i < len; i++){
        text[i] = sub[i];
    }

	////////////////////////////////////////
	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_R_D1i_B==_D1i_R_D1
_B-_E_F3_D1i_B-_E_F3_B+_R_L1_
1_C_F1_L2int_T2_F2_D2_L2int_T
_D2_L2int_T2_D2_L2int_T2_D2_L
int_T2_D2_L2char_T2_D1i_D2_L2
nt_T2_D1i_D2_D1s_E_F3_D1s_E_F
_E_F3_A_E_F3_A_D1i_A_B<_A_C_F
R_D1i_A_B<_B+_A_C_FOR_D1i_A_B
_D1i_D1i_B>_D1i_B-_A_L1_C_W_C
FOR_D1i_A_B<_A_C_FOR_D1s_E_F3
D1i_R_C_F1_1_
###############################*/
//$//
