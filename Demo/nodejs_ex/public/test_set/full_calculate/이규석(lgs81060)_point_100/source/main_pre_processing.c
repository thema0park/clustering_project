//이규석(lgs81060)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
    char olim[BYTE_SIZE+1];
	char out[BYTE_SIZE+1];
    int i;
	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    for(i=0;i<8;i++)
    {
        if(byte[0][i]!='1' && byte[0][i]!='0')
        {
            printf("Input Error\n");
            return 0;
        }

        if(byte[1][i]!='1'&&byte[1][i]!='0')
        {
            printf("Input Error\n");
            return 0;
        }
        
    }
    for(i=7;i>=0;i--)
    {
        if(i==7)
        {
            if(byte[0][i]!=byte[1][i])
            {
                out[i]='1';
                olim[i]='0';
            }
            
            if(byte[0][i]==byte[1][i])
            {
                out[i]='0';
                if(byte[0][1]=='1')
                    olim[i]='1';
                else
                    olim[i]='0';
            }
        }
        else
        {
            if(olim[i+1]=='0'&&byte[0][i]==byte[1][i])
            { 
                out[i]='0';
                if(byte[0][i]=='1')
                    olim[i]='1';
                else
                    olim[i]='0';
            }
            else if(olim[i+1]=='1' && byte[0][i]==byte[1][i])
            {
                out[i]='1';
                if(byte[0][i]=='1')
                    olim[i]='1';
                else
                    olim[i]='0';
            }
            else if(olim[i+1]=='0'&&byte[0][i]!=byte[1][i])
            {
                out[i]='1';
                olim[i]='0';
            } 
            else
            {
               out[i]='0';
               olim[i]='1'; 
            }
        }
    }

	////////////////////////////////////////

	for(i=0;i<8;i++)
        printf("%c",out[i]);

    printf("\n");

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2char_T2_D1i_D1i_B+_D2
L2int_T2_D2_D1s_D1i_D1i_E_F3_
1i_A_D1i_B<_D1i_D1c_B!=_D1i_D
c_B!=_B&&_D1s_E_F3_D1i_R_C_L1
D1i_D1c_B!=_D1i_D1c_B!=_B&&_D
s_E_F3_D1i_R_C_L1_C_FOR_D1i_A
D1i_B>=_D1i_B==_D1i_D1i_B!=_D
c_A_D1c_A_C_L1_D1i_D1i_B==_D1
_A_D1i_D1i_D1c_B==_D1c_A_D1c_
_L1_C_L1_C_D1i_B+_D1c_B==_D1i
D1i_B==_B&&_D1c_A_D1i_D1c_B==
D1c_A_D1c_A_L1_C_D1i_B+_D1c_B
=_D1i_D1i_B==_B&&_D1c_A_D1i_D
c_B==_D1c_A_D1c_A_L1_C_D1i_B+
D1c_B==_D1i_D1i_B!=_B&&_D1c_A
D1c_A_C_D1c_A_D1c_A_C_L1_L1_L
_C_L1_C_FOR_D1i_A_D1i_B<_D1s_
_F3_FOR_D1s_E_F3_D1i_R_C_F1_1

###############################*/
//$//
