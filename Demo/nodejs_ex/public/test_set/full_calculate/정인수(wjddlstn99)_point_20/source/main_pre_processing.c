//정인수(wjddlstn99)_point_20
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i,j,k;

    scanf("%s %s", byte[0],byte[1]);

    if(byte[0][0]!= 0 || byte[0][0] != 1 || byte[1][0] != 0 || byte[1][0] != 1){
       printf("Input Error\n"); return 0;
   }
   for(i=7;i>=0;i--){
       if((byte[0][i] = byte[1][i]) && byte[0][i] != 0 && byte[1][i] != 0){
           out[i] = 0;
           out[i-1] = 1;
       }
       else if(byte[0][i] != byte[1][i]){
           out[i] = 1;
       }
   }



	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D2_L2int_T2_D2
L2int_T2_D2_D1s_D1i_D1i_E_F3_
1i_D1i_D1i_B!=_D1i_D1i_D1i_B!
_B||_D1i_D1i_D1i_B!=_B||_D1i_
1i_D1i_B!=_B||_D1s_E_F3_D1i_R
C_L1_D1i_A_D1i_B>=_D1i_D1i_A_
1i_D1i_B!=_B&&_D1i_D1i_B!=_B&
_D1i_A_D1i_B-_D1i_A_C_D1i_D1i
B!=_D1i_A_C_L1_L1_C_FOR_D1s_E
F3_D1i_R_C_F1_1_
###############################*/
//$//
