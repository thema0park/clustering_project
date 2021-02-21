//오원석(ows710)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l,case1,case2,case3,case4;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    for(k=0;k<3;k++)
    {
        case1=mabangjin[k][0]+mabangjin[k][1]+mabangjin[k][2];
    }
    for(l=0;l<3;l++)
    {
        case2=mabangjin[0][l]+mabangjin[1][l]+mabangjin[2][l];
    }
    case3=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    case4=mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];

	////////////////////////////////////////
    if((case1==case2)&&(case2==case3)&&(case3==case4))
    {
        answer='O';
    }
    else
    {
        answer='X';
    }
	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D2_L2i
t_T2_D1i_D1i_D2_L2char_T2_D2_
1i_A_D1i_B<_D1i_A_D1i_B<_D1s_
_F3_FOR_C_FOR_D1i_A_D1i_B<_D1
_D1i_B+_D1i_B+_A_C_FOR_D1i_A_
1i_B<_D1i_D1i_B+_D1i_B+_A_C_F
R_D1i_D1i_D1i_D1i_B+_D1i_D1i_
+_A_D1i_D1i_D1i_D1i_B+_D1i_D1
_B+_A_B==_B==_B&&_B==_B&&_D1c
A_C_D1c_A_C_L1_D1s_E_F3_D1i_R
C_F1_1_
###############################*/
//$//
