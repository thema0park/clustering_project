//구영석(dudtjr9)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int i, j, k, l;
    int sum[7];
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer = 'X';

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    for(k=0;k<MABANGJIN_SIZE; k++){
        for(l=0;l < MABANGJIN_SIZE; l++){
            sum[k]+=mabangjin[k][l];
        }
    }

    for(k=0;k<MABANGJIN_SIZE; k++){
        for(l=0;l < MABANGJIN_SIZE; l++){
            sum[k+3]+=mabangjin[l][k];
        }
    }

    for(k=0, l=0;k<MABANGJIN_SIZE && l < MABANGJIN_SIZE; k++, l++){
            sum[6]+=mabangjin[k][l];
            }

   for(k=0, l=MABANGJIN_SIZE-1; k<MABANGJIN_SIZE && l >=0; k++, l--){
            sum[7]+=mabangjin[k][l];
            }

    for(i=0;i<MABANGJIN_SIZE-1;i++){
        for(j=1; j<MABANGJIN_SIZE;j++){
            if(sum[i] == sum[j]){
                answer = 'O';
            }
        }
    }
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D1i_D2_L2int_T2_D1
_D1i_D2_L2char_T2_D1c_D2_D1i_
_D1i_B<_D1i_A_D1i_B<_D1s_E_F3
FOR_C_FOR_D1i_A_D1i_B<_D1i_A_
1i_B<_A_C_FOR_C_FOR_D1i_A_D1i
B<_D1i_A_D1i_B<_D1i_B+_A_C_FO
_C_FOR_D1i_A_D1i_A_E_D1i_B<_D
i_B<_B&&_E_D1i_A_C_FOR_D1i_A_
1i_D1i_B-_A_E_D1i_B<_D1i_B>=_
&&_E_D1i_A_C_FOR_D1i_A_D1i_D1
_B-_B<_D1i_A_D1i_B<_B==_D1c_A
C_L1_C_FOR_C_FOR_D1s_E_F3_D1i
R_C_F1_1_
###############################*/
//$//
