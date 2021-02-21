//이성규(lsg9706)_point_30
#define _CRT_SECURE_NO_WARNINGS
  
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    char temp[BYTE_SIZE]={0};
    int i=0,j=0,k=0;

	scanf("%s %s", byte[0], byte[1]);
  
	////////////////////////////////////////
   
    for(i;i<BYTE_SIZE;i++){
        if (byte[0][i]+byte[1][i]=='0'+'0'){
            out[i]='0';
        }
        else if (byte[0][i]+byte[1][i]=='1'+'0'){
            out[i]='1';
        }
        else{
            out[i]='0';
            temp[i-1]='1';
        }
    }
    for(k;k<7;k++){
        for(i;i<7;i++){
            if(out[i]+temp[i]=='0'+'0'){
                out[i]='0';
            }
            else if(out[i]+temp[i]=='1'+'0'){
                out[i]='1';
            }
            if(out[i]+temp[i]=='1'+'1'){
                out[i]='0';
                temp[i-1]='1';
            }
        }
    }
	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2char_T2_D1i_D1i_D2_L2
nt_T2_D1i_D2_L2int_T2_D1i_D2_
2int_T2_D1i_D2_D1s_D1i_D1i_E_
3_D1i_B<_D1i_D1i_B+_D1c_D1c_B
_B==_D1c_A_C_D1i_D1i_B+_D1c_D
c_B+_B==_D1c_A_C_D1c_A_D1i_B-
D1c_A_C_L1_L1_C_FOR_D1i_B<_D1
_B<_B+_D1c_D1c_B+_B==_D1c_A_C
B+_D1c_D1c_B+_B==_D1c_A_C_L1_
1_B+_D1c_D1c_B+_B==_D1c_A_D1i
B-_D1c_A_C_L1_C_FOR_C_FOR_D1s
E_F3_D1i_R_C_F1_1_
###############################*/
//$//
