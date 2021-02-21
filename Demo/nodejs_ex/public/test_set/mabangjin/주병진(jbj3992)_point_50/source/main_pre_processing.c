//주병진(jbj3992)_point_50
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int flat=0;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE]; //3x3 행렬.
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

    if(mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2] == 15 && mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2] == 15 && mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2] == 15)
    {
        flat=1;
    }

    if(mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0] == 15 && mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1] == 15 && mabangjin[0][3]+mabangjin[1][3]+mabangjin[2][3] == 15)
    {
        flat=1;
    }

    if(mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2] == 15 && mabangjin[2][0]+mabangjin[1][1]+mabangjin[2][0] == 15)
    {
        flat=1;
    }

    if(flat==0)
    {
        answer='X';
    }

    if(flat==1)
    {
        answer='O';
    }

	////////////////////////////////////////



	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D1i_D2_L2char_T2_D2_D1
_A_D1i_B<_D1i_A_D1i_B<_D1s_E_
3_FOR_C_FOR_D1i_D1i_D1i_D1i_B
_D1i_D1i_B+_D1i_B==_D1i_D1i_D
i_D1i_B+_D1i_D1i_B+_D1i_B==_B
&_D1i_D1i_D1i_D1i_B+_D1i_D1i_
+_D1i_B==_B&&_D1i_A_C_L1_D1i_
1i_D1i_D1i_B+_D1i_D1i_B+_D1i_
==_D1i_D1i_D1i_D1i_B+_D1i_D1i
B+_D1i_B==_B&&_D1i_D1i_D1i_D1
_B+_D1i_D1i_B+_D1i_B==_B&&_D1
_A_C_L1_D1i_D1i_D1i_D1i_B+_D1
_D1i_B+_D1i_B==_D1i_D1i_D1i_D
i_B+_D1i_D1i_B+_D1i_B==_B&&_D
i_A_C_L1_D1i_B==_D1c_A_C_L1_D
i_B==_D1c_A_C_L1_D1s_E_F3_D1i
R_C_F1_1_
###############################*/
//$//
