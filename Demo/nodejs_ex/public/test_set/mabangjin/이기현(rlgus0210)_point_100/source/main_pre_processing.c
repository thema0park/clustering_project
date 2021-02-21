//이기현(rlgus0210)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
    int sum[8] = {0,0,0,0,0,0,0,0};
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    for(k = 0; k<MABANGJIN_SIZE; k++){
        for(l=0; l<MABANGJIN_SIZE; l++){
            sum[k]=sum[k] + mabangjin[k][l];
        }
    }
    for(k = 0; k<MABANGJIN_SIZE; k++){
        for(l=0; l<MABANGJIN_SIZE; l++){
            sum[k+3]=sum[k+3] + mabangjin[l][k];
        }
    }
    sum[6] = mabangjin[0][0] + mabangjin[1][1]+mabangjin[2][2];
    sum[7] = mabangjin[0][2] + mabangjin[1][1]+ mabangjin[2][0];
    if(sum[0]==sum[1]&&sum[1]==sum[2]&&sum[2]==sum[3]&&sum[3]==sum[4]&&sum[4]==sum[5]&&sum[5]==sum[6]&&sum[6]==sum[7]){
        answer = 'O';
    }
    else
        answer = 'X';


	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
int_T2_D1i_D1i_D1i_D1i_D1i_D1
_D1i_D1i_D1i_D2_L2char_T2_D2_
1i_A_D1i_B<_D1i_A_D1i_B<_D1s_
_F3_FOR_C_FOR_D1i_A_D1i_B<_D1
_A_D1i_B<_B+_A_C_FOR_C_FOR_D1
_A_D1i_B<_D1i_A_D1i_B<_D1i_B+
D1i_B+_B+_A_C_FOR_C_FOR_D1i_D
i_D1i_D1i_D1i_B+_D1i_D1i_B+_A
D1i_D1i_D1i_D1i_D1i_B+_D1i_D1
_B+_A_D1i_D1i_B==_D1i_D1i_B==
B&&_D1i_D1i_B==_B&&_D1i_D1i_B
=_B&&_D1i_D1i_B==_B&&_D1i_D1i
B==_B&&_D1i_D1i_B==_B&&_D1c_A
C_D1c_A_L1_D1s_E_F3_D1i_R_C_F
_1_
###############################*/
//$//
