//이동훈(oss002)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    char fake[BYTE_SIZE+1];
    fake[7] = '0';
    int i;
    int j;

    int up;




    while(1) {
        up = 0;
        for (i = 7; i > -1; i--) {
            if ((int)byte[0][i] + (int)byte[1][i] - 96 == 0) {
                out[i] = '0';
                fake[i-1] = '0';
            }
            else if ((int)byte[0][i] + (int)byte[1][i] - 96 == 1) {
                out[i] = '1';
                fake[i-1] = '0';
            }
            else if((int)byte[0][i] + (int)byte[1][i] -96 == 2) {
                out[i] = '0';
                if (i != 0) { 
                    fake[i-1] = '1';
                }
                up = 1;
            }
            
        }

        //printf("%s %s\n", out,fake);

        if(up == 0) {
            break;
        }
        if(up == 1) {
            for(j = 0; j <8; j++) {
                byte[0][j] = out[j];
                byte[1][j] = fake[j];
            }
        }

        //printf("%s %s\n", byte[0],byte[1]);

    }

    


	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_D1s_D1i_D1i_E_F3_L2char
T2_D1i_D1i_B+_D2_D1i_D1c_A_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1i_D1i_A_D1i_A_D1i_B>_L2i
t_T2_D1i_L2int_T2_D1i_B+_D1i_
-_D1i_B==_D1c_A_D1i_B-_D1c_A_
_L2int_T2_D1i_L2int_T2_D1i_B+
D1i_B-_D1i_B==_D1c_A_D1i_B-_D
c_A_C_L2int_T2_D1i_L2int_T2_D
i_B+_D1i_B-_D1i_B==_D1c_A_D1i
B!=_D1i_B-_D1c_A_C_L1_D1i_A_C
L1_L1_L1_C_FOR_D1i_B==_C_L1_D
i_B==_D1i_A_D1i_B<_D1i_A_D1i_
_C_FOR_C_L1_C_W_D1s_E_F3_D1i_
_C_F1_1_
###############################*/
//$//
