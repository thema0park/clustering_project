//안성진(andy5305)_point_10
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
    int comp_a;
    int j;
    int flag=0;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    for(i=0;i<piece_num;i++)
    {
        comp_a=input_data[(i+(piece_num/2))%piece_num];
        for(j=2;j<=input_data[i];j++)
        {
            if(input_data[i]%j==0&&comp_a%j==0)
            {
            flag=1;
            break;
            }
        }
        if(flag==0)
        {
            comp_a=input_data[(i+1+(piece_num/2))%piece_num];
            for(j=2;j<=input_data[i];j++)
            {
            if(input_data[i]%j==0&&comp_a%j==0)
            {
                flag=1;
                break;
            }
            }
        }
        if(flag==0)
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
T2_D2_L2int_T2_D2_L2int_T2_D2
L2int_T2_D1i_D2_D1s_E_F3_D1i_
_B<_D1s_E_F3_FOR_D1i_A_B<_D1i
B/_B+_B%_A_D1i_A_B<=_B%_D1i_B
=_B%_D1i_B==_B&&_D1i_A_C_L1_C
FOR_D1i_B==_D1i_B+_D1i_B/_B+_
%_A_D1i_A_B<=_B%_D1i_B==_B%_D
i_B==_B&&_D1i_A_C_L1_C_FOR_C_
1_D1i_B==_A_C_L1_C_FOR_D1s_E_
3_D1i_R_C_F1_1_
###############################*/
//$//
