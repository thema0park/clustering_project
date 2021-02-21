//노태형(hjth091)_point_30
#define _CRT_SECURE_NO_WARNINGS
  #define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	int i;
    char b[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];

	scanf("%s %s", b[0], b[1]);
   for (i=0;i<8;i++)
    {
        out[i]=b[0][i]+b[1][i]-48; 
        if (out[i]=='2')
        {
            if (b[0][i]=='1'&&b[1][i]=='1')
            {
               if (b[0][i-1]=='1'&&b[2][i-1]=='1')
                {
                    out[i-1]='0';
                    out[i]='1';
                }
            }
            else if (b[0][i]=='1'&&b[1][i]=='0')
            {
                out[i]=0;
            }
        }
    }   
    



	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D1i_B+_D1i_D2_L2cha
_T2_D1i_D1i_B+_D2_D1s_D1i_D1i
E_F3_D1i_A_D1i_B<_D1i_D1i_B+_
1i_B-_A_D1c_B==_D1i_D1c_B==_D
i_D1c_B==_B&&_D1i_D1i_B-_D1c_
==_D1i_D1i_B-_D1c_B==_B&&_D1i
B-_D1c_A_D1c_A_C_L1_C_D1i_D1c
B==_D1i_D1c_B==_B&&_D1i_A_C_L
_L1_C_L1_C_FOR_D1s_E_F3_D1i_R
C_F1_1_
###############################*/
//$//
