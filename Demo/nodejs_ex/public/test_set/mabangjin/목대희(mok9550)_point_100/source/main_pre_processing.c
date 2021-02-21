//목대희(mok9550)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3


int main()
{
	int k, l, hap = 0, fhap=0, i, j;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer = 'O';

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
		    scanf("%d", &mabangjin[k][l]);
	}
    fhap = mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2];

	////////////////////////////////////////
    
    for(i = 1; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            hap += mabangjin[i][j];
        }
        if(hap != fhap) {
            answer = 'X';
            break;
        }
        else hap = 0;
    }
    if(answer == 'O') {
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                hap += mabangjin[j][i];
            }
            if(hap != fhap) {
                answer = 'X';
                break;
            }
            else hap = 0;
        }
    }

    if(answer == 'O') {
        for(i = 0; i < 3; i++) {
            hap += mabangjin[i][i];
        }
        if(hap != fhap) {
            answer = 'X';
        }
        else hap = 0;
        if(answer == 'O') {
            for(i = 0; i < 3; i++) {
                hap += mabangjin[i][2-i];
            }
            if(hap != fhap) {
                answer = 'X';
            }
        }
    }

	////////////////////////////////////////
    
	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D2_L2int_T2_D2_L2int_T
_D2_L2int_T2_D1i_D1i_D2_L2cha
_T2_D1c_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_D1i
D1i_D1i_D1i_B+_D1i_D1i_B+_A_D
i_A_D1i_B<_D1i_A_D1i_B<_A_C_F
R_B!=_D1c_A_C_D1i_A_L1_C_FOR_
1c_B==_D1i_A_D1i_B<_D1i_A_D1i
B<_A_C_FOR_B!=_D1c_A_C_D1i_A_
1_C_FOR_C_L1_D1c_B==_D1i_A_D1
_B<_A_C_FOR_B!=_D1c_A_C_D1i_A
L1_D1c_B==_D1i_A_D1i_B<_D1i_B
_A_C_FOR_B!=_D1c_A_C_L1_C_L1_
_L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
