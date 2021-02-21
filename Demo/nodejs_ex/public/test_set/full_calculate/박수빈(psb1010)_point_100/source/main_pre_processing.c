//박수빈(psb1010)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	int out[BYTE_SIZE+1]={0};
    int i;
	scanf("%s %s", byte[0], byte[1]);
    int wrong=0;
    for(i=7;i>=0;i--)
    {
        if((byte[0][i]!='0'&&byte[0][i]!='1')||(byte[1][i]!='0'&&byte[1][i]!='1'))
        {
            wrong=1;
            break;
        }
        out[i]+=byte[0][i]+byte[1][i]-'0'-'0';
        if(out[i]>=2||i!=0)
        {
            if(out[i]>=2)
            {
             out[i-1]++;
             out[i]-=2;
            }
        }
        else if (i==0)
        {
            if(out[0]>=2)
            {
                out[0]=0;
            }
        }
    }
    if(wrong==1)
    {
        printf("Input Error\n");
    }
    else
    {
        for(i=0;i<8;i++)
        {
            printf("%d",out[i]);
        }
        printf("\n");
    }
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2int_T2_D1i_D1i_
+_D1i_D2_L2int_T2_D2_D1s_D1i_
1i_E_F3_L2int_T2_D1i_D2_D1i_A
D1i_B>=_D1i_D1c_B!=_D1i_D1c_B
=_B&&_D1i_D1c_B!=_D1i_D1c_B!=
B&&_B||_D1i_A_C_L1_D1i_D1i_B+
D1c_B-_D1c_B-_A_D1i_B>=_D1i_B
=_B||_D1i_B>=_D1i_B-_D1i_A_C_
1_C_D1i_B==_D1i_D1i_B>=_D1i_D
i_A_C_L1_C_L1_L1_C_FOR_D1i_B=
_D1s_E_F3_C_D1i_A_D1i_B<_D1s_
_F3_C_FOR_D1s_E_F3_C_L1_D1i_R
C_F1_1_
###############################*/
//$//
