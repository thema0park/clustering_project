//김병욱(bukim0329)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l, sum, a, b, c, i, j, count = 0;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int arr_sum[6] = {0, 0, 0, 0, 0, 0};

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    sum = mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2];
    for(i = 0; i < 3; i++){
        for(j = 0 ; j < 3; j++){
            arr_sum[i] += mabangjin[i][j];
        }
    }
    for(b = 0; b < 3; b++){
        for(a = 0; a < 3; a++){
            arr_sum[b + 3] += mabangjin[a][b];
        }
    }
    for(c = 0; c < 6; c++){
        if(arr_sum[c] != sum){
            count++;
        }
    }
    if(mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2] != sum){
        count++;
    }
    if(mabangjin[2][0] + mabangjin[1][1] + mabangjin[0][2] != sum){
        count++;
    }
    if(count == 0){
        answer = 'O';
    }
    else{
        answer = 'X';
    }

	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
1i_D2_L2int_T2_D1i_D1i_D2_L2c
ar_T2_D2_L2int_T2_D1i_D1i_D1i
D1i_D1i_D1i_D1i_D2_D1i_A_D1i_
<_D1i_A_D1i_B<_D1s_E_F3_FOR_C
FOR_D1i_D1i_D1i_D1i_B+_D1i_D1
_B+_A_D1i_A_D1i_B<_D1i_A_D1i_
<_A_C_FOR_C_FOR_D1i_A_D1i_B<_
1i_A_D1i_B<_D1i_B+_A_C_FOR_C_
OR_D1i_A_D1i_B<_B!=_C_L1_C_FO
_D1i_D1i_D1i_D1i_B+_D1i_D1i_B
_B!=_C_L1_D1i_D1i_D1i_D1i_B+_
1i_D1i_B+_B!=_C_L1_D1i_B==_D1
_A_C_D1c_A_C_L1_D1s_E_F3_D1i_
_C_F1_1_
###############################*/
//$//
