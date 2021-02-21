//장은학(showri0108)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
    int i,j;
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE]; // 3*3 행렬
	int answer = 0;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]); // 입력
	}
    
    //j = mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];

    //for(i = 0; i < 3; i++)
    //{
        if((mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2]) == (mabangjin[1][0] + mabangjin[1][1] + mabangjin[1][2]) && (mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2]) == (mabangjin[2][0] + mabangjin[2][1] + mabangjin[2][2]) && (mabangjin[1][0] + mabangjin[1][1] + mabangjin[1][2]) == (mabangjin[2][0] + mabangjin[2][1] + mabangjin[2][2]))
            if((mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0]) == (mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1]) && (mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0]) == (mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2]) && (mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2]) == (mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1]))
                if((mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]) == (mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0]) && (mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2]) == (mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]) && (mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0]) == (mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]))
                            answer++;
    //}

    if(answer = 1)
         printf("O\n");
    else
        printf("X");    

	return 0;
}
//if(((mabangjin[i][0] + mabangjin[i][1]+ mabangjin[i][2]) == j) && ((mabangjin[0][i]+mabangjin[1][i]+mabangjin[2][i]) == j) && ((mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]) == j) && ((mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0]) == j))
//if((mabangjin[i][0] + mabangjin[i][1]+ mabangjin[i][2]) == (mabangjin[0][i]+mabangjin[1][i]+mabangjin[2][i]) == (mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]) == (mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0]))/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D1i_D1i_D2_L2int_T
_D1i_D2_D1i_A_D1i_B<_D1i_A_D1
_B<_D1s_E_F3_FOR_C_FOR_D1i_D1
_D1i_D1i_B+_D1i_D1i_B+_D1i_D1
_D1i_D1i_B+_D1i_D1i_B+_B==_D1
_D1i_D1i_D1i_B+_D1i_D1i_B+_D1
_D1i_D1i_D1i_B+_D1i_D1i_B+_B=
_B&&_D1i_D1i_D1i_D1i_B+_D1i_D
i_B+_D1i_D1i_D1i_D1i_B+_D1i_D
i_B+_B==_B&&_D1i_D1i_D1i_D1i_
+_D1i_D1i_B+_D1i_D1i_D1i_D1i_
+_D1i_D1i_B+_B==_D1i_D1i_D1i_
1i_B+_D1i_D1i_B+_D1i_D1i_D1i_
1i_B+_D1i_D1i_B+_B==_B&&_D1i_
1i_D1i_D1i_B+_D1i_D1i_B+_D1i_
1i_D1i_D1i_B+_D1i_D1i_B+_B==_
&&_D1i_D1i_D1i_D1i_B+_D1i_D1i
B+_D1i_D1i_D1i_D1i_B+_D1i_D1i
B+_B==_D1i_D1i_D1i_D1i_B+_D1i
D1i_B+_D1i_D1i_D1i_D1i_B+_D1i
D1i_B+_B==_B&&_D1i_D1i_D1i_D1
_B+_D1i_D1i_B+_D1i_D1i_D1i_D1
_B+_D1i_D1i_B+_B==_B&&_L1_L1_
1_D1i_A_D1s_E_F3_D1s_E_F3_L1_
1i_R_C_F1_1_
###############################*/
//$//
