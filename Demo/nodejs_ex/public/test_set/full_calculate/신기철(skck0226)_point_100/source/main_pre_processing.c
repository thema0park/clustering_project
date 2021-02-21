//신기철(skck0226)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i,k=1;
	scanf("%s %s", byte[0], byte[1]);
    for(i=0;i<8;i++){
        if(byte[0][i]!='0'&&byte[0][i]!='1') k=0;
        if(byte[1][i]!='0'&&byte[1][i]!='1') k=0;
    }
	////////////////////////////////////////
    if(k==0) printf("Input Error\n"); 
    else{
        for(i=7;i>=0;i--){
            if(out[i]=='1'){
                if(byte[0][i]=='0'&&byte[1][i]=='0'){
                    out[i]='1';
                    out[i-1]='0';
                }
                else if(byte[0][i]=='0'||byte[1][i]=='0'){
                    out[i]='0';
                    out[i-1]='1';
                }
                else{
                    out[i]='1';
                    out[i-1]='1';
                }
            }
            else{
                if(byte[0][i]=='0'&&byte[1][i]=='0'){
                    out[i]='0';
                    out[i-1]='0';
                }
                else if(byte[0][i]=='0'||byte[1][i]=='0'){
                    out[i]='1';
                    out[i-1]='0';
                }
                else{
                    out[i]='0';
                    out[i-1]='1';
                }
            }
        }
        printf("%s\n", out);
    }


	////////////////////////////////////////

	

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D2_L2int_T2_D1
_D2_D1s_D1i_D1i_E_F3_D1i_A_D1
_B<_D1i_D1c_B!=_D1i_D1c_B!=_B
&_D1i_A_L1_D1i_D1c_B!=_D1i_D1
_B!=_B&&_D1i_A_L1_C_FOR_D1i_B
=_D1s_E_F3_D1i_A_D1i_B>=_D1c_
==_D1i_D1c_B==_D1i_D1c_B==_B&
_D1c_A_D1i_B-_D1c_A_C_D1i_D1c
B==_D1i_D1c_B==_B||_D1c_A_D1i
B-_D1c_A_C_D1c_A_D1i_B-_D1c_A
C_L1_L1_C_D1i_D1c_B==_D1i_D1c
B==_B&&_D1c_A_D1i_B-_D1c_A_C_
1i_D1c_B==_D1i_D1c_B==_B||_D1
_A_D1i_B-_D1c_A_C_D1c_A_D1i_B
_D1c_A_C_L1_L1_C_L1_C_FOR_D1s
E_F3_C_L1_D1i_R_C_F1_1_
###############################*/
//$//
