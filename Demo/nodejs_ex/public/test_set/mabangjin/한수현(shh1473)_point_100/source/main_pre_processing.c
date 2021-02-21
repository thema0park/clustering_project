//한수현(shh1473)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////

    int i, j;
    int sum = 0;
    int check = 0;
    int firstSum = 0;
    for (i = 0; i < 3; ++i)
    {
        sum = 0;

        for (j = 0; j < 3; ++j)
        {
            sum += mabangjin[i][j];
        }

        if (check == 0)
        {
            firstSum = sum;
        }

        if (firstSum != sum)
        {
            printf("X\n");
            return 0;
        }
    }

    for (i = 0; i < 3; ++i)
    {
        sum = 0;
        
        for (j = 0; j < 3; ++j)
        {
            sum += mabangjin[j][i];
        }

        if (firstSum != sum)
        {
            printf("X\n");
            return 0;
        }
    }

    sum = 0;

    for (i = 0; i < 3; ++i)
    {
        sum += mabangjin[i][i];
    }

    if (firstSum != sum)
    {
        printf("X\n");
        return 0;
    }

    sum = 0;

    for (i = 0; i < 3; ++i)
    {
        sum += mabangjin[2 - i][i];
    }

    if (firstSum != sum)
    {
        printf("X\n");
        return 0;
    }

    printf("O\n");

	////////////////////////////////////////

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_D
i_A_D1i_B<_D1i_A_D1i_B<_D1s_E
F3_FOR_C_FOR_L2int_T2_D2_L2in
_T2_D2_L2int_T2_D1i_D2_L2int_
2_D1i_D2_L2int_T2_D1i_D2_D1i_
_D1i_B<_D1i_A_D1i_A_D1i_B<_A_
_FOR_D1i_B==_A_C_L1_B!=_D1s_E
F3_D1i_R_C_L1_C_FOR_D1i_A_D1i
B<_D1i_A_D1i_A_D1i_B<_A_C_FOR
B!=_D1s_E_F3_D1i_R_C_L1_C_FOR
D1i_A_D1i_A_D1i_B<_A_C_FOR_B!
_D1s_E_F3_D1i_R_C_L1_D1i_A_D1
_A_D1i_B<_D1i_B-_A_C_FOR_B!=_
1s_E_F3_D1i_R_C_L1_D1s_E_F3_D
i_R_C_F1_1_
###############################*/
//$//
