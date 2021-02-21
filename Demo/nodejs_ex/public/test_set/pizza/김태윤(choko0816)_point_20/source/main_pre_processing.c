//김태윤(choko0816)_point_20
#define _CRT_SECURE_NO_WARNINGS

 #define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i,j;
	int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    for(i=0;i<piece_num;i++)
    {
        for(j=i+1;j<piece_num;j++)
        {
           if(input_data[i]%input_data[j]!=0)
            output=input_data[i];
        }
    }

	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_L2int_T2_D2_L2int
T2_D2_L2int_T2_D2_D1s_E_F3_D1
_A_B<_D1s_E_F3_FOR_D1i_A_B<_D
i_B+_A_B<_B%_D1i_B!=_A_L1_C_F
R_C_FOR_D1s_E_F3_D1i_R_C_F1_1

###############################*/
//$//
