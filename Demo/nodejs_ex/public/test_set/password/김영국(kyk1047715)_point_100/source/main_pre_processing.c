//김영국(kyk1047715)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int fb(int i){

    if(i==1){
        return 1;
    }
    if(i==2){
        return 1;
    }
    return fb(i-1)+fb(i-2);
}

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
	char res[TEXT_MAX];
	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int key;
    // printf("%d\n",fb(fibo_n));
    key=fb(fibo_n);
    key=key%26;
    // printf("%d\n",key);
    int i=0;
    for(i=0;text[i]!='\0';i++){
        text[i]=text[i]+key;
        if(text[i]>90){
            text[i]=text[i]-90+64;
        }
    }

	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
1i_B==_D1i_R_C_L1_D1i_B==_D1i
R_C_L1_D1i_B-_E_F3_D1i_B-_E_F
_B+_R_C_F1_L2int_T2_F2_D2_L2i
t_T2_D2_L2char_T2_D1i_D2_L2ch
r_T2_D1i_D2_D1s_E_F3_D1s_E_F3
L2int_T2_D2_E_F3_A_D1i_B%_A_L
int_T2_D1i_D2_D1i_A_D1c_B!=_B
_A_D1i_B>_D1i_B-_D1i_B+_A_C_L
_C_FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
