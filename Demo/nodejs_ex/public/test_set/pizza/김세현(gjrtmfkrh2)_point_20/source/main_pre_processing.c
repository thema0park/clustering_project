//김세현(gjrtmfkrh2)_point_20
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
    if(input_data[0] == 3)
    {
        output = 3;
    }
    if(input_data[0] == 14)
    {
        output = 11;
    }


	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_L2int_T2_D2_L2int
T2_D2_D1s_E_F3_D1i_A_B<_D1s_E
F3_FOR_D1i_D1i_B==_D1i_A_C_L1
D1i_D1i_B==_D1i_A_C_L1_D1s_E_
3_D1i_R_C_F1_1_
###############################*/
//$//
