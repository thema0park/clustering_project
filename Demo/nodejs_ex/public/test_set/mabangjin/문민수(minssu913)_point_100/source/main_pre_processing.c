//문민수(minssu913)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l,i;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int first=0,sec=0,third=0,first_y=0,sec_y=0,third_y=0,cross1=0,cross2=0;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    for(i=0; i<3; i++)
    {
        first+=mabangjin[0][i];
    
        sec+=mabangjin[1][i];

        third+=mabangjin[2][i];
///////@@@@@@@@@@@@@@@@@@
        first_y+=mabangjin[i][0];

        sec_y+=mabangjin[i][1];

        third_y+=mabangjin[i][2];

        cross1+=mabangjin[i][i];
    }
    cross2=mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];
	////////////////////////////////////////

    if(first==sec && sec==third && first_y==sec_y && sec_y==third_y && cross1 == cross2)
    {
            answer='O';
    }
    else
    
    {
        answer='X';
    }
	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
1i_D1i_D2_L2char_T2_D2_L2int_
2_D1i_D2_L2int_T2_D1i_D2_L2in
_T2_D1i_D2_L2int_T2_D1i_D2_L2
nt_T2_D1i_D2_L2int_T2_D1i_D2_
2int_T2_D1i_D2_L2int_T2_D1i_D
_D1i_A_D1i_B<_D1i_A_D1i_B<_D1
_E_F3_FOR_C_FOR_D1i_A_D1i_B<_
1i_A_D1i_A_D1i_A_D1i_A_D1i_A_
1i_A_A_C_FOR_D1i_D1i_D1i_D1i_
+_D1i_D1i_B+_A_B==_B==_B&&_B=
_B&&_B==_B&&_B==_B&&_D1c_A_C_
1c_A_C_L1_D1s_E_F3_D1i_R_C_F1
1_
###############################*/
//$//
