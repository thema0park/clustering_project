//노우영(nou0calmsi)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l, i=0, j=0, m=0;
	int mbj[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer='O';

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mbj[k][l]);
	}

	////////////////////////////////////////
    int sum=mbj[0][0]+mbj[0][1]+mbj[0][2], asum=0;
    for(i=0;i<3;i++){
        asum=0;
        for(j=0;j<3;j++){
            asum += mbj[i][j];
        }
        if(sum!=asum) answer='X';
    }
    for(i=0;i<3;i++){
        asum=0;
        for(j=0;j<3;j++){
            asum+=mbj[j][i];
        }
        if(sum!=asum) answer='X';
    }
    asum=0;
    asum = mbj[0][0]+mbj[1][1]+mbj[2][2];
    if(sum!=asum) answer='X';
    asum = mbj[0][2]+mbj[1][1]+mbj[2][0];
    if(sum!=asum) answer='X';
	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D2_L2int_T2_D1i_D2_L2i
t_T2_D1i_D1i_D2_L2char_T2_D1c
D2_D1i_A_D1i_B<_D1i_A_D1i_B<_
1s_E_F3_FOR_C_FOR_L2int_T2_D1
_D1i_D1i_D1i_B+_D1i_D1i_B+_D2
L2int_T2_D1i_D2_D1i_A_D1i_B<_
1i_A_D1i_A_D1i_B<_A_C_FOR_B!=
D1c_A_L1_C_FOR_D1i_A_D1i_B<_D
i_A_D1i_A_D1i_B<_A_C_FOR_B!=_
1c_A_L1_C_FOR_D1i_A_D1i_D1i_D
i_D1i_B+_D1i_D1i_B+_A_B!=_D1c
A_L1_D1i_D1i_D1i_D1i_B+_D1i_D
i_B+_A_B!=_D1c_A_L1_D1s_E_F3_
1i_R_C_F1_1_
###############################*/
//$//
