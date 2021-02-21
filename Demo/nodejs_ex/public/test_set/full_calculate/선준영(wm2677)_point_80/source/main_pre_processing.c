//선준영(wm2677)_point_80
#define _CRT_SECURE_NO_WARNINGS
   #define BYTE_SIZE 8
#define IN_NUM 2



int D2B(int n){
    
}


int main()
{
	char byte[IN_NUM][BYTE_SIZE];
	int out[BYTE_SIZE];

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    int i;
    int num1=0;
    int num2=0;
    for(i=7;i>=0;i--){
        num1=num1 + (byte[0][i]=='1'?1:0)*pow(2.0,7-i);   
    }
    for(i=7;i>=0;i--){
        num2=num2 + (byte[1][i]=='1'?1:0)*pow(2.0,7-i);
    }

    int num=num1+num2;
    int a;
    int b=0;
    for(i=0;i<8;i++){
        a=num%2;
        num=num/2;
        out[i]=a;
    }


	////////////////////////////////////////
    for(i=7;i>=0;i--){
        printf("%d",out[i]);
    }
    printf("\n");
	

	return 0;
}
/*########code signature#########
2int_T2_D2_P2_L2int_T2_F2_D2_
_F1_L2int_T2_F2_D2_L2char_T2_
1i_D1i_D2_L2int_T2_D1i_D2_D1s
D1i_D1i_E_F3_L2int_T2_D2_L2in
_T2_D1i_D2_L2int_T2_D1i_D2_D1
_A_D1i_B>=_D1i_D1c_B==_D1i_D1
_D1d_D1i_B-_E_F3_B*_B+_A_C_FO
_D1i_A_D1i_B>=_D1i_D1c_B==_D1
_D1i_D1d_D1i_B-_E_F3_B*_B+_A_
_FOR_L2int_T2_B+_D2_L2int_T2_
2_L2int_T2_D1i_D2_D1i_A_D1i_B
_D1i_B%_A_D1i_B/_A_A_C_FOR_D1
_A_D1i_B>=_D1s_E_F3_C_FOR_D1s
E_F3_D1i_R_C_F1_1_
###############################*/
//$//
