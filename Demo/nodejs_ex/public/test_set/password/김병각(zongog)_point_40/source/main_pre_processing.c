//김병각(zongog)_point_40
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100
int fibo(int a){
    if(a==1){
        return 1;
    }
    else if (a==2){
        return 1;
    }
    else{
        return fibo(a-1)+fibo(a-2);
    }

}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    
	scanf("%d", &fibo_n);
	scanf("%s", text);


	////////////////////////////////////////
    int i=0;
    for(i;text[i] != NULL ;i++){
        if(text[i]+fibo(fibo_n) > 90){
            text[i]=(text[i]+fibo(fibo_n))%90+64;
            if(text[i]>90){
                text[i] = text[i]%90+64;
                if(text[i]>90){
                     text[i] = text[i]%90+64;
                }
            }
        }
        else{
            text[i]=text[i]+fibo(fibo_n);
        }

    }


	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_R_C_D1i_B==_D1i_R_
_D1i_B-_E_F3_D1i_B-_E_F3_B+_R
C_L1_L1_C_F1_L2int_T2_F2_D2_L
int_T2_D2_L2char_T2_D1i_D2_D1
_E_F3_D1s_E_F3_L2int_T2_D1i_D
_B!=_E_F3_B+_D1i_B>_E_F3_B+_D
i_B%_D1i_B+_A_D1i_B>_D1i_B%_D
i_B+_A_D1i_B>_D1i_B%_D1i_B+_A
C_L1_C_L1_C_E_F3_B+_A_C_L1_C_
OR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
