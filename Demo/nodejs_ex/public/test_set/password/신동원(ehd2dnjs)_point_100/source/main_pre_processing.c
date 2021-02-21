//신동원(ehd2dnjs)_point_100
#define _CRT_SECURE_NO_WARNINGS
   
#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];
    int i=2, j=0;
    int fibo[30]={1,1,0,};
    int num;

	scanf("%d", &fibo_n);
	scanf("%s", text);

    for(i;i<30;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    
    num=fibo[fibo_n-1];
    num=num%26;


    for(j;j<strlen(text);j++){
        text[j]=text[j]+num;
        if(text[j]>90){
            text[j]=text[j]-26;
        }
       
    
    }

	printf("%s\n", text);

	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_L2int_T2_D1i_D2_
2int_T2_D1i_D2_L2int_T2_D1i_D
i_D1i_D1i_D2_L2int_T2_D2_D1s_
_F3_D1s_E_F3_D1i_B<_D1i_B-_D1
_B-_B+_A_C_FOR_D1i_B-_A_D1i_B
_A_E_F3_B<_B+_A_D1i_B>_D1i_B-
A_C_L1_C_FOR_D1s_E_F3_D1i_R_C
F1_1_
###############################*/
//$//
