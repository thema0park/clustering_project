//서윤의(yoony0612)_point_100
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

    int m = mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2];
   
    if(mabangjin[1][0] + mabangjin[1][1] + mabangjin[1][2] == m){
         if(mabangjin[2][0] + mabangjin[2][1]+ mabangjin[2][2] == m){
            if(mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2] == m){
                printf("O\n");
            }
        }
    }
    else{
        printf("X\n");
    }
    

	////////////////////////////////////////

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_L2i
t_T2_D1i_D1i_D1i_D1i_B+_D1i_D
i_B+_D2_D1i_D1i_D1i_D1i_B+_D1
_D1i_B+_B==_D1i_D1i_D1i_D1i_B
_D1i_D1i_B+_B==_D1i_D1i_D1i_D
i_B+_D1i_D1i_B+_B==_D1s_E_F3_
_L1_C_L1_C_D1s_E_F3_C_L1_D1i_
_C_F1_1_
###############################*/
//$//
