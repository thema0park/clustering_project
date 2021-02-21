//강동우(alsdn1360)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int i, k;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	int sum1=0, sum2=0,sum3=0,sum4=0;
    int flag = 0;
    char answer;

	for (i = 0; i < MABANGJIN_SIZE; i++)
	{
		for (k = 0; k < MABANGJIN_SIZE; k++)
			scanf("%d", &mabangjin[i][k]);
	}
    for(i=0;i<3;i++)
    {
        for(k=0;k<3;k++)
        {
            sum1 += mabangjin[i][k];
        }
    }
    for(i=0;i<3;i++)
    {
        for(k=0;k<3;k++)
        {
            sum2 += mabangjin[k][i];
        }
    }
    sum3 = mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2];
    sum4 = mabangjin[0][2] + mabangjin[1][1] + mabangjin[2][0];

    if(sum1/3 == sum2/3) flag++;
    if(sum1/3 == sum3) flag++;
    if(sum1/3 == sum4) flag++;
    if(sum2/3 == sum3) flag++;
    if(sum2/3 == sum4) flag++;
    if(sum3 == sum4) flag++;


    if(flag == 6)
    {
        answer = 'O';
    }
    else answer = 'X';

    printf("%c\n", answer);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
int_T2_D1i_D2_L2int_T2_D1i_D2
L2int_T2_D1i_D2_L2int_T2_D1i_
2_L2int_T2_D1i_D2_L2char_T2_D
_D1i_A_D1i_B<_D1i_A_D1i_B<_D1
_E_F3_FOR_C_FOR_D1i_A_D1i_B<_
1i_A_D1i_B<_A_C_FOR_C_FOR_D1i
A_D1i_B<_D1i_A_D1i_B<_A_C_FOR
C_FOR_D1i_D1i_D1i_D1i_B+_D1i_
1i_B+_A_D1i_D1i_D1i_D1i_B+_D1
_D1i_B+_A_D1i_B/_D1i_B/_B==_L
_D1i_B/_B==_L1_D1i_B/_B==_L1_
1i_B/_B==_L1_D1i_B/_B==_L1_B=
_L1_D1i_B==_D1c_A_C_D1c_A_L1_
1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
