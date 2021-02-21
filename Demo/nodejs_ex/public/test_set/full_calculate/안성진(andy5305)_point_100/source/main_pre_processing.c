//안성진(andy5305)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i;
    int carry=0;
	scanf("%s %s", byte[0], byte[1]);
    for(i=0;i<8;i++)
    {
        if(((byte[0][i]!='1')&&(byte[0][i]!='0'))||((byte[1][i]!='1')&&(byte[1][i]!='0')))
        {
            printf("Input Error\n");
            return 0;
        }
    }
	////////////////////////////////////////
    for(i=7;i>=0;i--)
    {
        if(carry==0)
        {
            if(byte[0][i]==byte[1][i])
            {
                out[i]='0';
                if(byte[0][i]=='1')
                carry=1;
                else
                carry=0;
            }
            else
            {
            out[i]='1';
            }
            
        }
        else
        {
            
            if(byte[0][i]==byte[1][i])
            {
                out[i]='1';
                if(byte[0][i]=='1')
                carry=1;
                else
                carry=0;
            }
            else
            {
                out[i]='0';
                carry=1;
            }
        }
    }
    out[8]='\0';

	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D2_L2int_T2_D1
_D2_D1s_D1i_D1i_E_F3_D1i_A_D1
_B<_D1i_D1c_B!=_D1i_D1c_B!=_B
&_D1i_D1c_B!=_D1i_D1c_B!=_B&&
B||_D1s_E_F3_D1i_R_C_L1_C_FOR
D1i_A_D1i_B>=_D1i_B==_D1i_D1i
B==_D1c_A_D1i_D1c_B==_D1i_A_D
i_A_L1_C_D1c_A_C_L1_C_D1i_D1i
B==_D1c_A_D1i_D1c_B==_D1i_A_D
i_A_L1_C_D1c_A_D1i_A_C_L1_C_L
_C_FOR_D1i_D1c_A_D1s_E_F3_D1i
R_C_F1_1_
###############################*/
//$//
