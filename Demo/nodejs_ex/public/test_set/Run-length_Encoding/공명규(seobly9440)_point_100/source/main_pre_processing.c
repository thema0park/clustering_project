//공명규(seobly9440)_point_100
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
    int i, total[8];
    for(i = 0; i < 8; i++) total[i] = 0;

    for(l = 0; l < MABANGJIN_SIZE; l++ )
    {
        total[0] += mabangjin[0][l];
    }

    for(l = 0; l < MABANGJIN_SIZE; l++ )
    {
        total[1] += mabangjin[1][l];
    }
    
    for(l = 0; l < MABANGJIN_SIZE; l++ )
    {
        total[2] += mabangjin[2][l];
    }
    
    for(k = 0; k < MABANGJIN_SIZE; k++ )
    {
        total[3] += mabangjin[k][0];
    }
    
    for(k = 0; k < MABANGJIN_SIZE; k++ )
    {
        total[4] += mabangjin[k][1];
    }
    
    for(k = 0; k < MABANGJIN_SIZE; k++ )
    {
        total[5] += mabangjin[k][2];
    }
    
    for(l = 0; l < MABANGJIN_SIZE; l++ )
    {
        total[6] += mabangjin[l][l];
    }
    
    for(l = 0; l < MABANGJIN_SIZE; l++ )
    {
        int k;
        k = 2 - l;
        total[7] += mabangjin[k][l];
    }
    int n, test;
    test = 1;
    
    for(n = 0; n < 6; n++)
    {
        if(total[n] == total[n+1]) continue;
        else {
            test--;
            break;
            }
    }
    if (test == 1) answer = 'O';
    else answer = 'X';

	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_L2i
t_T2_D2_L2int_T2_D1i_D2_D1i_A
D1i_B<_D1i_A_FOR_D1i_A_D1i_B<
D1i_D1i_A_C_FOR_D1i_A_D1i_B<_
1i_D1i_A_C_FOR_D1i_A_D1i_B<_D
i_D1i_A_C_FOR_D1i_A_D1i_B<_D1
_D1i_A_C_FOR_D1i_A_D1i_B<_D1i
D1i_A_C_FOR_D1i_A_D1i_B<_D1i_
1i_A_C_FOR_D1i_A_D1i_B<_D1i_A
C_FOR_D1i_A_D1i_B<_L2int_T2_D
_D1i_B-_A_D1i_A_C_FOR_L2int_T
_D2_L2int_T2_D2_D1i_A_D1i_A_D
i_B<_D1i_B+_B==_C_L1_C_FOR_D1
_B==_D1c_A_D1c_A_L1_D1s_E_F3_
1i_R_C_F1_1_
###############################*/
//$//
