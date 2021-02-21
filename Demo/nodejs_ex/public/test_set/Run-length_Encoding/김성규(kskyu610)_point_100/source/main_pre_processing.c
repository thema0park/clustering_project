//김성규(kskyu610)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int i, n, m;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
    int rowSum[3];
    int columnSum[3];
    int sum[2]; 
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    
   rowSum[0] = mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2];
   rowSum[1] = mabangjin[1][0] + mabangjin[1][1] + mabangjin[1][2];
   rowSum[2] = mabangjin[2][0] + mabangjin[2][1] + mabangjin[2][2];
   columnSum[0] = mabangjin[0][0] + mabangjin[1][0] + mabangjin[2][0];
   columnSum[1] = mabangjin[0][1] + mabangjin[1][1] + mabangjin[2][1];
   columnSum[2] = mabangjin[0][2] + mabangjin[1][2] + mabangjin[2][2];
   sum[0] = mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2];
   sum[1] = mabangjin[0][2] + mabangjin[1][1] + mabangjin[2][0];
    
    if(rowSum[0] == rowSum[1]){
        if(rowSum[1] == rowSum[2])
                if(rowSum[2] == columnSum[0])
                    if(columnSum[0] == columnSum[1])
                        if(columnSum[1] == columnSum[2])
                            if(columnSum[2] == sum[0])
                                if(sum[0] == sum[1])
                                    answer = 'O';
    }
    else
        answer = 'X';
	
	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D1i_D1
_D2_L2int_T2_D1i_D2_L2int_T2_
1i_D2_L2int_T2_D1i_D2_L2char_
2_D2_D1i_A_D1i_B<_D1i_A_D1i_B
_D1s_E_F3_FOR_C_FOR_D1i_D1i_D
i_D1i_D1i_B+_D1i_D1i_B+_A_D1i
D1i_D1i_D1i_D1i_B+_D1i_D1i_B+
A_D1i_D1i_D1i_D1i_D1i_B+_D1i_
1i_B+_A_D1i_D1i_D1i_D1i_D1i_B
_D1i_D1i_B+_A_D1i_D1i_D1i_D1i
D1i_B+_D1i_D1i_B+_A_D1i_D1i_D
i_D1i_D1i_B+_D1i_D1i_B+_A_D1i
D1i_D1i_D1i_D1i_B+_D1i_D1i_B+
A_D1i_D1i_D1i_D1i_D1i_B+_D1i_
1i_B+_A_D1i_D1i_B==_D1i_D1i_B
=_D1i_D1i_B==_D1i_D1i_B==_D1i
D1i_B==_D1i_D1i_B==_D1i_D1i_B
=_D1c_A_L1_L1_L1_L1_L1_L1_C_D
c_A_L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
