//박현진(qokkop)_point_60
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1]={'0'};

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    int i;
    for(i=0;i<8;i++)
    {
        if(byte[0][i]!='0'&&byte[0][i]!='1')
        {
            printf("Input Error\n");
            return 0;
        }
        else if(byte[1][i]!='0'&&byte[1][i]!='1')
        {
            printf("Input Error\n");
            return 0;
        }
    }
    for(i=8;i>0;i--)
    {
        if(byte[0][i]==byte[1][i] && byte[0][i]=='0') out[i] = '0';
        else if(byte[0][i]==byte[1][i] && byte[0][i]=='1')
        {
            out[i]='0';
            if(byte[0][i-1]=='0') byte[0][i-1]='1';
            else if(byte[1][i-1]=='0') byte[1][i-1]='1';
            else if(byte[0][i-1]=='1'&& byte[1][i-1]=='1') 
            {
                byte[0][i-1]='0';
               if(byte[0][i-2]=='0') byte[0][i-2]='1';
               else if(byte[1][i-2]=='0') byte[1][i-2]='1';
            }
        }
        else if(byte[0][i]!=byte[1][i]) out[i]='1';
    }
    


	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D1c_D2_D1s_D1i_D1i_E_F3_L2
nt_T2_D2_D1i_A_D1i_B<_D1i_D1c
B!=_D1i_D1c_B!=_B&&_D1s_E_F3_
1i_R_C_D1i_D1c_B!=_D1i_D1c_B!
_B&&_D1s_E_F3_D1i_R_C_L1_L1_C
FOR_D1i_A_D1i_B>_D1i_D1i_B==_
1i_D1c_B==_B&&_D1c_A_D1i_D1i_
==_D1i_D1c_B==_B&&_D1c_A_D1i_
1i_B-_D1c_B==_D1i_D1i_B-_D1c_
_D1i_D1i_B-_D1c_B==_D1i_D1i_B
_D1c_A_D1i_D1i_B-_D1c_B==_D1i
D1i_B-_D1c_B==_B&&_D1i_D1i_B-
D1c_A_D1i_D1i_B-_D1c_B==_D1i_
1i_B-_D1c_A_D1i_D1i_B-_D1c_B=
_D1i_D1i_B-_D1c_A_L1_L1_C_L1_
1_L1_C_D1i_D1i_B!=_D1c_A_L1_L
_L1_C_FOR_D1s_E_F3_D1i_R_C_F1
1_
###############################*/
//$//
