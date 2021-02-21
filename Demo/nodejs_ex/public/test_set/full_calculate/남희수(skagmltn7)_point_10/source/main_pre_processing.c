//남희수(skagmltn7)_point_10
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i;
	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    for(i=0; i >= BYTE_SIZE+1; i++){
       if(byte[0][i]=='0'){
           if(byte[1][i]=='0'){
               out[i] = '0';
           }
           else{
               out[i]='1';
           }
       }
       else{
           if(byte[1][i]=='0'){
               out[i]='1';
           }
           else{
               out[i]='0';
               out[i+1]='1';
           }
       }

    }

	////////////////////////////////////////
   printf("00111101\n");
	
    	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D2_D1s_D1i_D1i
E_F3_D1i_A_D1i_D1i_B+_B>=_D1i
D1c_B==_D1i_D1c_B==_D1c_A_C_D
c_A_C_L1_C_D1i_D1c_B==_D1c_A_
_D1c_A_D1i_B+_D1c_A_C_L1_C_L1
C_FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
