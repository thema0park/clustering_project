//김지훈(jh6car)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{   int i;
    int up=0;
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);
    for(i=8; i>=0; i--){
        if(up==1){
            if((byte[0][i]-'0')+(byte[1][i]-'0')==2){
                out[i]='1';
            }
            else if((byte[0][i]-'0')+(byte[1][i]-'0')==1){
                out[i]='0';

            }
            else if((byte[0][i]-'0')+(byte[1][i]-'0')==0){
                out[i]='1';
                up=0;
            }
        }
        else if((byte[0][i]-'0')+(byte[1][i]-'0')==2){
            up=1;
            out[i]='0';

        }
        else if((byte[0][i]-'0')+(byte[1][i]-'0')==1){
            out[i]='1';
        }
        else if((byte[0][i]-'0')+(byte[1][i]-'0')==0){
            out[i]='0';

        }
	////////////////////////////////////////
        if(i==0){
            if((byte[0][i]-'0')+(byte[1][i]-'0')+up==2){
                out[i]='0';

            }
            else if((byte[0][i]-'0')+(byte[1][i]-'0')+up==1){
                out[i]='1';

            }
            else if ((byte[0][i]-'0')+(byte[1][i]-'0')+up==0){
                out[i]='0';

            }

        }
    }

	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_L2char_T2_D1i_D1i
B+_D1i_D2_L2char_T2_D1i_D1i_B
_D2_D1s_D1i_D1i_E_F3_D1i_A_D1
_B>=_D1i_B==_D1i_D1c_B-_D1i_D
c_B-_B+_D1i_B==_D1c_A_C_D1i_D
c_B-_D1i_D1c_B-_B+_D1i_B==_D1
_A_C_D1i_D1c_B-_D1i_D1c_B-_B+
D1i_B==_D1c_A_D1i_A_C_L1_L1_L
_C_D1i_D1c_B-_D1i_D1c_B-_B+_D
i_B==_D1i_A_D1c_A_C_D1i_D1c_B
_D1i_D1c_B-_B+_D1i_B==_D1c_A_
_D1i_D1c_B-_D1i_D1c_B-_B+_D1i
B==_D1c_A_C_L1_L1_L1_L1_D1i_B
=_D1i_D1c_B-_D1i_D1c_B-_B+_B+
D1i_B==_D1c_A_C_D1i_D1c_B-_D1
_D1c_B-_B+_B+_D1i_B==_D1c_A_C
D1i_D1c_B-_D1i_D1c_B-_B+_B+_D
i_B==_D1c_A_C_L1_L1_L1_C_L1_C
FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
