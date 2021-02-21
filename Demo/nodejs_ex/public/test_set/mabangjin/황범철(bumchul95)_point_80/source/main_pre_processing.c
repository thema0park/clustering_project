//황범철(bumchul95)_point_80
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
    int i, j;
    //가로
    int left[3] = {0,0,0};
    int ss[3] = {0,0,0};
    int cen[3] = {0,0,0};
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++){
            left[i] += mabangjin[i][j];
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++){
            ss[i] += mabangjin[j][i];        
        }
    }
    for(i = 0; i < 3; i++)
    {
        cen[0] += mabangjin[i][i];
    }
    cen[1] = mabangjin[2][0] + mabangjin[1][1] + mabangjin[0][2];
    int ans = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0;k< 2; k++){
                if((left[i] == cen[k]) && (left[i] == ss[j])){
                    answer = 'O';
                    break;
                }
                else{
                    answer = 'X';
                }
            }
            if(answer = 'O')
                break;
        }
        if(answer = 'O')
            break;
    }
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
1i_D1i_D1i_D1i_D2_L2int_T2_D1
_D1i_D1i_D1i_D2_L2int_T2_D1i_
1i_D1i_D1i_D2_D1i_A_D1i_B<_D1
_A_D1i_B<_A_C_FOR_C_FOR_D1i_A
D1i_B<_D1i_A_D1i_B<_A_C_FOR_C
FOR_D1i_A_D1i_B<_D1i_A_C_FOR_
1i_D1i_D1i_D1i_D1i_B+_D1i_D1i
B+_A_L2int_T2_D1i_D2_D1i_A_D1
_B<_D1i_A_D1i_B<_D1i_A_D1i_B<
B==_B==_B&&_D1c_A_C_D1c_A_C_L
_C_FOR_D1c_A_L1_C_FOR_D1c_A_L
_C_FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
