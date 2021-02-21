//진선재(disto7142)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    int i;
    for(i=0;i<8;i++) out[i]='0';
    for(i=7;i>=0;i--){
        out[i]+=(byte[0][i]-'0')+(byte[1][i]-'0');
        if(out[i]=='2'){
            out[i]='0';
            out[i-1]='1';
        }
        else if(out[i]=='3'){
            out[i]='1';
            out[i-1]='1';
        }
    }



	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_D1s_D1i_D1i_E_F3_L2int_
2_D2_D1i_A_D1i_B<_D1c_A_FOR_D
i_A_D1i_B>=_D1i_D1c_B-_D1i_D1
_B-_B+_A_D1c_B==_D1c_A_D1i_B-
D1c_A_C_D1c_B==_D1c_A_D1i_B-_
1c_A_C_L1_L1_C_FOR_D1s_E_F3_D
i_R_C_F1_1_
###############################*/
//$//
