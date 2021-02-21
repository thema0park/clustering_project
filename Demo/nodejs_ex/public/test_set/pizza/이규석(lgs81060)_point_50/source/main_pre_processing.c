//이규석(lgs81060)_point_50
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX]={0};
    int count[49]={0};
    int bigyo;
	int i,j,k;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

    for(i=0; i < piece_num-1;i++)
    {
        for(j=i+1; j<piece_num;j++)
        {
            for(k=2;k<=input_data[i];k++)
            {
                if(input_data[i]%k==0  && input_data[j]%k==0)
                {
                    count[i]++;
                    count[j]++;
                    break;
                }
            }
        }

    }
    for(i = 0;i<piece_num;i++)
    {
        if(count[i]==0)
        {
                output = input_data[i];
                printf("%d\n", output);
                return 0;
        } 
    }
    output = input_data[2];


	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D1i_D2_L2int_T2_D1i_
1i_D2_L2int_T2_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D2_L2int
T2_D2_D1s_E_F3_D1i_A_B<_D1s_E
F3_FOR_D1i_A_D1i_B-_B<_D1i_B+
A_B<_D1i_A_B<=_B%_D1i_B==_B%_
1i_B==_B&&_C_L1_C_FOR_C_FOR_C
FOR_D1i_A_B<_D1i_B==_A_D1s_E_
3_D1i_R_C_L1_C_FOR_D1i_A_D1s_
_F3_D1i_R_C_F1_1_
###############################*/
//$//
