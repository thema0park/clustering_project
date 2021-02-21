//김주현(rlawngus0814)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

    k=0;
    l=0;
    //가로
    int R1=0,R2=0,R3=0;
    for(l=0;l<3;l++)
    {
        R1=R1+mabangjin[k][l];
    }
    k=1;
    for(l=0;l<3;l++)
    {
        R2=R2+mabangjin[k][l];
    }
    k=2;
    for(l=0;l<3;l++)
    {
        R3=R3+mabangjin[k][l];
    }
    
    //가로 판별
    if((R1!=R2)||(R2!=R3))
    {
        printf("X\n");
        return 0;
    }

    //세로
    k=0;
    l=0;

     for(l=0;l<3;l++)
    {
        R1=R1+mabangjin[l][k];
    }
    k=1;
    for(l=0;l<3;l++)
    {
        R2=R2+mabangjin[l][k];
    }
    k=2;
    for(l=0;l<3;l++)
    {
        R3=R3+mabangjin[l][k];
    }

    //세로 판별
    if((R1!=R2)||(R2!=R3))
    {
        printf("X\n");
        return 0;
    }

	////////////////////////////////////////대각선
    R1=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    R2=mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];
    
    if(R1!=R2)
    {
        printf("X\n");
        return 0;
    }

    printf("O\n");


	////////////////////////////////////////


	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_D
i_A_D1i_B<_D1i_A_D1i_B<_D1s_E
F3_FOR_C_FOR_D1i_A_D1i_A_L2in
_T2_D1i_D2_L2int_T2_D1i_D2_L2
nt_T2_D1i_D2_D1i_A_D1i_B<_B+_
_C_FOR_D1i_A_D1i_A_D1i_B<_B+_
_C_FOR_D1i_A_D1i_A_D1i_B<_B+_
_C_FOR_B!=_B!=_B||_D1s_E_F3_D
i_R_C_L1_D1i_A_D1i_A_D1i_A_D1
_B<_B+_A_C_FOR_D1i_A_D1i_A_D1
_B<_B+_A_C_FOR_D1i_A_D1i_A_D1
_B<_B+_A_C_FOR_B!=_B!=_B||_D1
_E_F3_D1i_R_C_L1_D1i_D1i_D1i_
1i_B+_D1i_D1i_B+_A_D1i_D1i_D1
_D1i_B+_D1i_D1i_B+_A_B!=_D1s_
_F3_D1i_R_C_L1_D1s_E_F3_D1i_R
C_F1_1_
###############################*/
//$//
