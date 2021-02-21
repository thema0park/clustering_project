//정재윤(jyjung9910)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i;
    int j;
    int check;
    check=0;

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    for(i=0;i<BYTE_SIZE;i++)
    {
        if(byte[0][i]=='0' || byte[0][i]=='1' )
        {
            check++;
        }
        if(byte[1][i]=='0' || byte[1][i]=='1')
        {
            check++;
        }
    }
    if(check==16)
    {
        for(i=0;i<BYTE_SIZE;i++)
        {
            out[i] = byte[0][i] + byte[1][i] - '0';
        }
        for(i=1;i<BYTE_SIZE;i++)
        {
            for(j=1;j<BYTE_SIZE;j++)
            {
                if(out[j]=='2')
                {
                    out[j-1]++;
                    out[j]='0';
                }
                if(out[j]=='3')
                {
                    out[j-1]++;
                    out[j]='1';
                }
            }
        }
        if(out[0]=='2')
        {
            out[0]='0';
        }
        if(out[0]=='3')
        {
            out[0]='1';
        }
	    printf("%s\n", out);
    }
    else
    {
        printf("Input Error\n");
    }

	////////////////////////////////////////


	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D2_L2int_T2_D2
L2int_T2_D2_D1i_A_D1s_D1i_D1i
E_F3_D1i_A_D1i_B<_D1i_D1c_B==
D1i_D1c_B==_B||_C_L1_D1i_D1c_
==_D1i_D1c_B==_B||_C_L1_C_FOR
D1i_B==_D1i_A_D1i_B<_D1i_D1i_
+_D1c_B-_A_C_FOR_D1i_A_D1i_B<
D1i_A_D1i_B<_D1c_B==_D1i_B-_D
c_A_C_L1_D1c_B==_D1i_B-_D1c_A
C_L1_C_FOR_C_FOR_D1i_D1c_B==_
1i_D1c_A_C_L1_D1i_D1c_B==_D1i
D1c_A_C_L1_D1s_E_F3_C_D1s_E_F
_C_L1_D1i_R_C_F1_1_
###############################*/
//$//
