//홍소연(sodus1102)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l, i, j;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int col[3] = {0,}, row[3]={0,}, tr[2]={0,};

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}


	////////////////////////////////////////
    for(i=0;i<MABANGJIN_SIZE;i++)
    {
        for(j=0;j<MABANGJIN_SIZE;j++)
        {
            col[i] += mabangjin[i][j];
            row[i] += mabangjin[j][i];
        }
    }
    for(i=0;i<MABANGJIN_SIZE;i++)
    {
        tr[0] += mabangjin[i][i];
    }
    for(i=0;i<MABANGJIN_SIZE;i++)
    {
        tr[1] += mabangjin[i][2-i];
    }

    answer = 'O';
    for(i=0;i<MABANGJIN_SIZE;i++)
    {
        if(col[i] != col[2-i]) answer = 'X';
        if(row[i] != row[2-i]) answer = 'X';
    }
    if(tr[0] != tr[1]) answer = 'X';

    if(answer = 'O')
    {
        for(i=0;i<MABANGJIN_SIZE;i++)
        {
            for(j=0;j<MABANGJIN_SIZE;j++)
            {
                if(col[i] != row[j]) answer = 'X';
            }
        }
    }

    if(answer = 'O')
    {
        for(i=0;i<2;i++)
        {
            for(j=0;j<MABANGJIN_SIZE;j++)
            {
                if(tr[i] != row[i]) answer = 'X';
            }
        }
    }


	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D1i_D1i_D2_L2char_
2_D2_L2int_T2_D1i_D1i_D2_L2in
_T2_D1i_D1i_D2_L2int_T2_D1i_D
i_D2_D1i_A_D1i_B<_D1i_A_D1i_B
_D1s_E_F3_FOR_C_FOR_D1i_A_D1i
B<_D1i_A_D1i_B<_A_A_C_FOR_C_F
R_D1i_A_D1i_B<_D1i_A_C_FOR_D1
_A_D1i_B<_D1i_D1i_B-_A_C_FOR_
1c_A_D1i_A_D1i_B<_D1i_B-_B!=_
1c_A_L1_D1i_B-_B!=_D1c_A_L1_C
FOR_D1i_D1i_B!=_D1c_A_L1_D1c_
_D1i_A_D1i_B<_D1i_A_D1i_B<_B!
_D1c_A_L1_C_FOR_C_FOR_C_L1_D1
_A_D1i_A_D1i_B<_D1i_A_D1i_B<_
!=_D1c_A_L1_C_FOR_C_FOR_C_L1_
1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
