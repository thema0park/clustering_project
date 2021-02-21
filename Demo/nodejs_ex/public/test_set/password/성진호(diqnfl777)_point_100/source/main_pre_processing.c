//성진호(diqnfl777)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define TEXT_MAX 100

int main()
{
	int fibo_n,i,fibo=1,lfibo=1,temp;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	for (i=2;i<fibo_n;i++){
        temp = fibo;
        fibo = temp + lfibo;
        lfibo = temp;
    }
    
    fibo = fibo%26;

    for(i=0;i<TEXT_MAX;i++){
        if(text[i]=='\0') break;
        if(text[i]>'Z'-fibo){
            text[i]= text[i]+fibo-26;
        }
        else{
            text[i]= text[i]+fibo;
        }
    }

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D2_L2int_T2_D2_L2char_
2_D1i_D2_D1s_E_F3_D1s_E_F3_D1
_A_B<_A_B+_A_A_C_FOR_D1i_B%_A
D1i_A_D1i_B<_D1c_B==_L1_D1c_B
_B>_B+_D1i_B-_A_C_B+_A_C_L1_C
FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
