//김진용(kpointer11)_point_0
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    char tmp[BYTE_SIZE+1]={0};
    int i;

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    
    

    for(i=BYTE_SIZE; i>=0; i--){
        if(byte[0][i]=='1'&&byte[1][i]=='1'){
            tmp[i+1]='1';
            byte[0][i]='0';
            byte[0][i]='0';
        }
        
        out[i]=byte[0][i]+byte[1][i]+tmp[i];
        
        if(out[i]>='2'){
            tmp[i+1]='1';
            out[i]=out[i]-2;
        }


    }


	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
    
    
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2char_T2_D1i_D1i_B+_D1
_D2_L2int_T2_D2_D1s_D1i_D1i_E
F3_D1i_A_D1i_B>=_D1i_D1c_B==_
1i_D1c_B==_B&&_D1i_B+_D1c_A_D
i_D1c_A_D1i_D1c_A_C_L1_D1i_D1
_B+_B+_A_D1c_B>=_D1i_B+_D1c_A
D1i_B-_A_C_L1_C_FOR_D1s_E_F3_
1i_R_C_F1_1_
###############################*/
//$//
