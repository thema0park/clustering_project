//송선우(gbe0808)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
    int save = 0;
    int ans = 0;
    int corr = 0;
	char answer = 'O';

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    for(k = 0; k < 3; k++) {
        save += mabangjin[k][0];
    }
    for(k = 1; k < 3; k++) {
        ans = 0;
        for(l = 0; l < 3; l++) {
            ans += mabangjin[k][l];
        }
        if(ans != save) {
            corr = 1;
            break;
        }
    }

    for(k = 0; k < 3; k++) {
        if(corr == 1) break;
        ans = 0;
        for(l = 0; l < 3; l++) {
            ans += mabangjin[l][k];
        }
        if(ans != save) {
            corr = 1;
            break;
        }
    }

    if(corr == 0) {
        ans = 0;
        ans = ans + mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2];
        if(ans != save) corr = 1;
    }

    if(corr == 0) {
        ans = 0;
        ans = ans + mabangjin[2][0] + mabangjin[1][1] + mabangjin[0][2];
        if(ans != save) corr = 1;
    }    
    

	////////////////////////////////////////
    if(corr == 1) answer = 'X';
	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
int_T2_D1i_D2_L2int_T2_D1i_D2
L2int_T2_D1i_D2_L2char_T2_D1c
D2_D1i_A_D1i_B<_D1i_A_D1i_B<_
1s_E_F3_FOR_C_FOR_D1i_A_D1i_B
_D1i_A_C_FOR_D1i_A_D1i_B<_D1i
A_D1i_A_D1i_B<_A_C_FOR_B!=_D1
_A_C_L1_C_FOR_D1i_A_D1i_B<_D1
_B==_L1_D1i_A_D1i_A_D1i_B<_A_
_FOR_B!=_D1i_A_C_L1_C_FOR_D1i
B==_D1i_A_D1i_D1i_B+_D1i_D1i_
+_D1i_D1i_B+_A_B!=_D1i_A_L1_C
L1_D1i_B==_D1i_A_D1i_D1i_B+_D
i_D1i_B+_D1i_D1i_B+_A_B!=_D1i
A_L1_C_L1_D1i_B==_D1c_A_L1_D1
_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
