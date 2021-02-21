//박수빈(psb1010)_point_80
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int gcd(int x, int y)
{
    if(x<y)
    {
        int tmp=x;
        x=y;
        y=tmp;
    }
    if(y==0)
    {
        return x;
    }
    else
    {
        return gcd(y,x%y);
    }
}

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

    int j;
    int k;
    int cnt;
    int pizza[PIECE_NUM_MAX]={0};
	////////////////////////////////////////
    for(i=0;i<piece_num;i++)
    {
        k=(piece_num-1)/2;
        if(gcd(input_data[i+k],input_data[i])==1)
        {
            if(gcd(input_data[i+k+1],input_data[i])!=1)
            {
            printf("%d\n",input_data[i+k]);
            }
            else
            {
                printf("%d\n",input_data[i]);
            }
            break;
        }
    }
	////////////////////////////////////////

	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_B<_L2int_T2_D2_A_A
C_L1_D1i_B==_R_C_B%_E_F3_R_C_
1_C_F1_L2int_T2_F2_D2_L2int_T
_D2_L2int_T2_D1i_D2_L2int_T2_
2_L2int_T2_D2_D1s_E_F3_D1i_A_
<_D1s_E_F3_FOR_L2int_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D1i_D1i_D2_D1i_A_B<_D1i_B-_D1
_B/_A_B+_E_F3_D1i_B==_B+_D1i_
+_E_F3_D1i_B!=_D1s_B+_E_F3_C_
1s_E_F3_C_L1_C_L1_C_FOR_D1i_R
C_F1_1_
###############################*/
//$//
