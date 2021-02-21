//신지항(tlswlgkd565)_point_0
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    int a,b,t;
    int j;
    int flag[50];

    for(i=0;i<piece_num;i++)
    {
        for(j=i+1;j<piece_num;j++)
        {
            a=input_data[i];
            b=input_data[j];
            while(1)
            {
                if(b==0)
                    break;
                else    
                {
                    t=a%b;
                    a=b;
                    b=t;
                }
            }
            if(a>1)
                flag[i]++;
        }
    }

    for(i=0;i<piece_num;i++)
    {
        if(flag[i]==0)
        {
            output=input_data[i];
            break;
        }
    }
    
	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_L2int_T2_D2_L2int
T2_D2_D1s_E_F3_D1i_A_B<_D1s_E
F3_FOR_L2int_T2_D2_L2int_T2_D
_L2int_T2_D2_L2int_T2_D2_L2in
_T2_D1i_D2_D1i_A_B<_D1i_B+_A_
<_A_A_D1i_D1i_B==_B%_A_A_A_C_
1_C_W_D1i_B>_L1_C_FOR_C_FOR_D
i_A_B<_D1i_B==_A_C_L1_C_FOR_D
s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
