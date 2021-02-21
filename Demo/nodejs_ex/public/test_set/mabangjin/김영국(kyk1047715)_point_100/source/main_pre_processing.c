//김영국(kyk1047715)_point_100
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
    int i=0;
    int j=0;
    if(mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2]==mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]&&
    mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2]==mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]&&
    mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2]==mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]&&
    mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0]==mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]&&
    mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1]==mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]&&
    mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2]==mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]&&
    mabangjin[2][0]+mabangjin[1][1]+mabangjin[0][2]==mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]
    ){

        printf("O\n");
    }
    else{

        printf("X\n");
    }


	////////////////////////////////////////

	// printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_L2i
t_T2_D1i_D2_L2int_T2_D1i_D2_D
i_D1i_D1i_D1i_B+_D1i_D1i_B+_D
i_D1i_D1i_D1i_B+_D1i_D1i_B+_B
=_D1i_D1i_D1i_D1i_B+_D1i_D1i_
+_D1i_D1i_D1i_D1i_B+_D1i_D1i_
+_B==_B&&_D1i_D1i_D1i_D1i_B+_
1i_D1i_B+_D1i_D1i_D1i_D1i_B+_
1i_D1i_B+_B==_B&&_D1i_D1i_D1i
D1i_B+_D1i_D1i_B+_D1i_D1i_D1i
D1i_B+_D1i_D1i_B+_B==_B&&_D1i
D1i_D1i_D1i_B+_D1i_D1i_B+_D1i
D1i_D1i_D1i_B+_D1i_D1i_B+_B==
B&&_D1i_D1i_D1i_D1i_B+_D1i_D1
_B+_D1i_D1i_D1i_D1i_B+_D1i_D1
_B+_B==_B&&_D1i_D1i_D1i_D1i_B
_D1i_D1i_B+_D1i_D1i_D1i_D1i_B
_D1i_D1i_B+_B==_B&&_D1s_E_F3_
_D1s_E_F3_C_L1_D1i_R_C_F1_1_
###############################*/
//$//
