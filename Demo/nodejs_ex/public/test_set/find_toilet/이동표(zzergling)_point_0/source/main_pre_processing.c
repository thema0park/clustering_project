//이동표(zzergling)_point_0
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
    for(i=0; i<BYTE_SIZE+1; i++){
        out[i]= byte[0][i]+ byte[1][i];
        if(out[i]>=2){
            out[i]-=2;
            out[i+1] +=1;
        }
    }


	////////////////////////////////////////

    printf("%s", out);
	

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D2_D1s_D1i_D1i
E_F3_D1i_A_D1i_D1i_B+_B<_D1i_
1i_B+_A_D1i_B>=_D1i_A_D1i_B+_
1i_A_C_L1_C_FOR_D1s_E_F3_D1i_
_C_F1_1_
###############################*/
//$//
