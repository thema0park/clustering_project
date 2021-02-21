//최은지(chldmswl0203)_point_0
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i;
    int j;
    int s;
	scanf("%s %s", byte[0], byte[1]);
    for(i=7;i>=0;i++) {
        if(byte[1][i]==0 && byte[2][i]==0 || byte[1][i]==1 && byte[2][i]==0 || byte[1][i]==0 && byte[2][i]==1) {
            byte[0][i]=0;
            for(j=7;j>=0;j++) {
                if(byte[1][j]==0 && byte[2][j]==0) {
                    out[j]=0;
                }
                if(byte[1][i]==1 && byte[2][i]==0 || byte[1][i]==0 && byte[2][i]==1) {
                    out[j]=1;
                }
            }
        }
        if(byte[1][i]==1 && byte[2][i]==1) {
            byte[0][i]=1;
            
        }
        else {
            printf("Input Error");
        }
    }

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D2_L2int_T2_D2
L2int_T2_D2_D1s_D1i_D1i_E_F3_
1i_A_D1i_B>=_D1i_D1i_B==_D1i_
1i_B==_B&&_D1i_D1i_B==_D1i_D1
_B==_B&&_B||_D1i_D1i_B==_D1i_
1i_B==_B&&_B||_D1i_D1i_A_D1i_
_D1i_B>=_D1i_D1i_B==_D1i_D1i_
==_B&&_D1i_A_C_L1_D1i_D1i_B==
D1i_D1i_B==_B&&_D1i_D1i_B==_D
i_D1i_B==_B&&_B||_D1i_A_C_L1_
_FOR_C_L1_D1i_D1i_B==_D1i_D1i
B==_B&&_D1i_D1i_A_C_D1s_E_F3_
_L1_C_FOR_D1i_R_C_F1_1_
###############################*/
//$//
