//이현우(gusdn052299)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    int sum=mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];
    answer='O';
    for(k=0; k<MABANGJIN_SIZE; k++)
    {
        if(sum!=mabangjin[k][0]+mabangjin[k][1]+mabangjin[k][2])
        {
            answer='X';
            break;
        }
    }
    for(k=0; k<MABANGJIN_SIZE; k++)
    {
        if(sum!=mabangjin[0][k]+mabangjin[1][k]+mabangjin[2][k])
        {
            answer='X';
            break;
        }
    }
    if(sum!=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2])
        answer='X';
    if(sum!=mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0])
        answer='X';
    
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_L2i
t_T2_D1i_D1i_D1i_D1i_B+_D1i_D
i_B+_D2_D1c_A_D1i_A_D1i_B<_D1
_D1i_B+_D1i_B+_B!=_D1c_A_C_L1
C_FOR_D1i_A_D1i_B<_D1i_D1i_B+
D1i_B+_B!=_D1c_A_C_L1_C_FOR_D
i_D1i_D1i_D1i_B+_D1i_D1i_B+_B
=_D1c_A_L1_D1i_D1i_D1i_D1i_B+
D1i_D1i_B+_B!=_D1c_A_L1_D1s_E
F3_D1i_R_C_F1_1_
###############################*/
//$//
