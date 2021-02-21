//박민규(pmk9440)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
    int a[8] = { 0 };
	int k, l;
    int count=0;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

    for (l=0 ; l<MABANGJIN_SIZE ; l++)
    {
        a[0] += mabangjin[0][l];
        a[1] += mabangjin[1][l];
        a[2] += mabangjin[2][l];
    }

    for (l=0 ; l<MABANGJIN_SIZE ; l++)
    {
        a[3] += mabangjin[l][0];
        a[4] += mabangjin[l][1];
        a[5] += mabangjin[l][2];
    }
    a[6] = mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2];
    a[7] = mabangjin[2][0] + mabangjin[1][1] + mabangjin[0][2];

    for (l=1 ; l<=7 ; l++)
    {
        if (a[0] == a[l]) count++;
    }
    if (count==7) answer = 'O';
    else answer = 'X';
    
	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D1i_D1
_D2_L2int_T2_D2_L2int_T2_D2_L
int_T2_D1i_D2_L2int_T2_D1i_D1
_D2_L2char_T2_D2_D1i_A_D1i_B<
D1i_A_D1i_B<_D1s_E_F3_FOR_C_F
R_D1i_A_D1i_B<_D1i_D1i_A_D1i_
1i_A_D1i_D1i_A_C_FOR_D1i_A_D1
_B<_D1i_D1i_A_D1i_D1i_A_D1i_D
i_A_C_FOR_D1i_D1i_D1i_D1i_D1i
B+_D1i_D1i_B+_A_D1i_D1i_D1i_D
i_D1i_B+_D1i_D1i_B+_A_D1i_A_D
i_B<=_D1i_B==_L1_C_FOR_D1i_B=
_D1c_A_D1c_A_L1_D1s_E_F3_D1i_
_C_F1_1_
###############################*/
//$//
