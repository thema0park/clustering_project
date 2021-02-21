//곽종덕(rkskek4068)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int a,b,i,d;
    char c = '0';
	scanf("%s %s", byte[0], byte[1]);
    for(a=0;a<8;a++){
        if(byte[0][a]!='0'&&byte[0][a]!='1'){
            b++;
        }
        if(byte[1][a]!='0'&&byte[1][a]!='1'){
            b++;
        }
    }
    if(b>0){
        printf("Input Error");
    }
    else if(b==0){
        for(i=7;i>=0;i--){
            if(byte[0][i]=='1'&&byte[1][i]=='1'){
                if(c=='1'){
                    out[i] = '1';
                }
                else if(c=='0'){
                    out[i] = '0';
                    c='1';
                }
            }
            if(byte[0][i]=='1'&&byte[1][i]=='0'){
                if(c=='1'){
                    out[i] = '0';
                }
                else if(c=='0'){
                    out[i] = '1';
                }
            }
            if(byte[0][i]=='0'&&byte[1][i]=='1'){
                if(c=='1'){
                    out[i] = '0';
                }
                else if(c=='0'){
                    out[i] = '1';
                }
            }
            if(byte[0][i]=='0'&&byte[1][i]=='0'){
                if(c=='1'){
                    out[i] = '1';
                    c='0';
                }
                else if(c=='0'){
                    out[i] = '0';
                }
            }
        }
        printf("%s\n",out);
    }
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D2_L2cha
_T2_D1c_D2_D1s_D1i_D1i_E_F3_D
i_A_D1i_B<_D1i_D1c_B!=_D1i_D1
_B!=_B&&_C_L1_D1i_D1c_B!=_D1i
D1c_B!=_B&&_C_L1_C_FOR_D1i_B>
D1s_E_F3_C_D1i_B==_D1i_A_D1i_
>=_D1i_D1c_B==_D1i_D1c_B==_B&
_D1c_B==_D1c_A_C_D1c_B==_D1c_
_D1c_A_C_L1_L1_C_L1_D1i_D1c_B
=_D1i_D1c_B==_B&&_D1c_B==_D1c
A_C_D1c_B==_D1c_A_C_L1_L1_C_L
_D1i_D1c_B==_D1i_D1c_B==_B&&_
1c_B==_D1c_A_C_D1c_B==_D1c_A_
_L1_L1_C_L1_D1i_D1c_B==_D1i_D
c_B==_B&&_D1c_B==_D1c_A_D1c_A
C_D1c_B==_D1c_A_C_L1_L1_C_L1_
_FOR_D1s_E_F3_C_L1_L1_D1i_R_C
F1_1_
###############################*/
//$//
