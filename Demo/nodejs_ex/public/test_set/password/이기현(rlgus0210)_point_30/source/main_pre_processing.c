//이기현(rlgus0210)_point_30
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100


int main()
{
	int fibo_n;
	char textt[TEXT_MAX];
    int fibo[30];
    int i,temp;
    fibo[1] = 1;
    fibo[2] = 1;
    int length=0;
    i=0;
    
	scanf("%d", &fibo_n);
	scanf("%s", textt);

	////////////////////////////////////////
    while(textt[i]!=NULL){
        length++;
        i++;
    }

    for(i=3; i<=fibo_n; i++){
            fibo[i] = fibo[i-1]+fibo[i-2];
        }

    temp = fibo[fibo_n];
    
    for(i = 0; i<length; i++){
        textt[i] = textt[i] + temp;
        if(textt[i]>'Z'){
            textt[i] = textt[i] - 26;
        }

    }
	////////////////////////////////////////

	printf("%s\n", textt);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_L2int_T2_D1i_D2_
2int_T2_D2_L2int_T2_D2_D1i_D1
_A_D1i_D1i_A_L2int_T2_D1i_D2_
1i_A_D1s_E_F3_D1s_E_F3_B!=_C_
_D1i_A_B<=_D1i_B-_D1i_B-_B+_A
C_FOR_A_D1i_A_B<_B+_A_D1c_B>_
1i_B-_A_C_L1_C_FOR_D1s_E_F3_D
i_R_C_F1_1_
###############################*/
//$//
