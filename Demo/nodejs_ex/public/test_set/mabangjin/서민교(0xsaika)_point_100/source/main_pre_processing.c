//서민교(0xsaika)_point_100
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
    int f1 = 0;
    int f2 = 0;
    int f3 = 0;

    int i;
    int t[3] = {0,};
    //가로
    for(i=0; i<3; i++){
        t[i] = mabangjin[i][0] + mabangjin[i][1] + mabangjin[i][2];
    }
    if(t[0] == t[1] && t[1] == t[2]){
        f1 = 1;
    }

    int z;
    int t1[3] = {0,};
    //세로
    for(z=0; z<3; z++){
        t1[z] = mabangjin[0][z] + mabangjin[1][z] + mabangjin[2][z];
    }
    if(t1[0] == t1[1] && t1[1] == t1[2]){
        f2 = 1;
    }

    if (f1 == 1 && f2 == 1){
        printf("O\n");
    }else{
        printf("X\n");
    }


	////////////////////////////////////////

	//printf("%c\n", &answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_L2i
t_T2_D1i_D2_L2int_T2_D1i_D2_L
int_T2_D1i_D2_L2int_T2_D2_L2i
t_T2_D1i_D1i_D2_D1i_A_D1i_B<_
1i_D1i_B+_D1i_B+_A_C_FOR_D1i_
1i_B==_D1i_D1i_B==_B&&_D1i_A_
_L1_L2int_T2_D2_L2int_T2_D1i_
1i_D2_D1i_A_D1i_B<_D1i_D1i_B+
D1i_B+_A_C_FOR_D1i_D1i_B==_D1
_D1i_B==_B&&_D1i_A_C_L1_D1i_B
=_D1i_B==_B&&_D1s_E_F3_C_D1s_
_F3_C_L1_D1i_R_C_F1_1_
###############################*/
//$//
