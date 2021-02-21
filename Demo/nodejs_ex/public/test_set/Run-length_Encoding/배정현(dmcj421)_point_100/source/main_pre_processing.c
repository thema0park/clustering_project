//배정현(dmcj421)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int i, j;
    int A, val;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    answer='O';
	////////////////////////////////////////
    A=mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];

    for(i=0;i<3;i++){
        val=0;
        for(j=0;j<3;j++){
            val+=mabangjin[i][j];
        }
        
        if(val!=A){
            printf("X\n");
            return 0;
        }
    }

    for(i=0;i<3;i++){
        val=0;
        for(j=0;j<3;j++){
            val+=mabangjin[j][i];
        }
        
        if(val!=A){
            printf("X\n");
            return 0;
        }
    }

    val=0;
    for(i=0;i<3;i++){
       val+=mabangjin[i][i];
    }
    if(val!=A){
            printf("X\n");
            return 0;
     }
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D2_L2i
t_T2_D1i_D1i_D2_L2char_T2_D2_
1i_A_D1i_B<_D1i_A_D1i_B<_D1s_
_F3_FOR_C_FOR_D1c_A_D1i_D1i_D
i_D1i_B+_D1i_D1i_B+_A_D1i_A_D
i_B<_D1i_A_D1i_A_D1i_B<_A_C_F
R_B!=_D1s_E_F3_D1i_R_C_L1_C_F
R_D1i_A_D1i_B<_D1i_A_D1i_A_D1
_B<_A_C_FOR_B!=_D1s_E_F3_D1i_
_C_L1_C_FOR_D1i_A_D1i_A_D1i_B
_A_C_FOR_B!=_D1s_E_F3_D1i_R_C
L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
