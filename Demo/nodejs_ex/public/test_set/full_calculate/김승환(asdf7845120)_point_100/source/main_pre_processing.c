//김승환(asdf7845120)_point_100
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
    int up;
    for(i=0;i<BYTE_SIZE;i++)
    {
        if(byte[0][i] != '0' && byte[0][i] != '1')
        {
            printf("Input Error\n");
            return 0;
        } 
        if(byte[1][i] != '0' && byte[1][i] != '1')
        {
            printf("Input Error\n");
            return 0;
        } 
    }
    up = 0;
    for(i=BYTE_SIZE-1;i>=0;i--)
    {
        
        up = (byte[0][i] - '0') + (byte[1][i] - '0')+up;
        out[i] = up%2 + '0';
        up/=2;
    }
    out[BYTE_SIZE]=0;

	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_D1s_D1i_D1i_E_F3_L2int_
2_D2_L2int_T2_D2_D1i_A_D1i_B<
D1i_D1c_B!=_D1i_D1c_B!=_B&&_D
s_E_F3_D1i_R_C_L1_D1i_D1c_B!=
D1i_D1c_B!=_B&&_D1s_E_F3_D1i_
_C_L1_C_FOR_D1i_A_D1i_D1i_B-_
_D1i_B>=_D1i_D1c_B-_D1i_D1c_B
_B+_B+_A_D1i_B%_D1c_B+_A_D1i_
_C_FOR_D1i_D1i_A_D1s_E_F3_D1i
R_C_F1_1_
###############################*/
//$//
