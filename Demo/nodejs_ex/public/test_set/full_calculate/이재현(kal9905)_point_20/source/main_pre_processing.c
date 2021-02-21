//이재현(kal9905)_point_20
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
    char out[BYTE_SIZE+1];

	scanf("%s %s", byte[0], byte[1]);
    int i,j;
    for(j=7;j>=0;j--)
    {
        if(byte[0][j]!=0&&byte[0][j]!=1)
        printf("Input Error\n");
        break;
        if(byte[1][j]!=0&&byte[1][j]!=1)
        printf("Input Error\n");
        break;
    }
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_D1s_D1i_D1i_E_F3_L2int_
2_D2_L2int_T2_D2_D1i_A_D1i_B>
_D1i_D1i_B!=_D1i_D1i_B!=_B&&_
1s_E_F3_L1_D1i_D1i_B!=_D1i_D1
_B!=_B&&_D1s_E_F3_L1_C_FOR_D1
_R_C_F1_1_
###############################*/
//$//
