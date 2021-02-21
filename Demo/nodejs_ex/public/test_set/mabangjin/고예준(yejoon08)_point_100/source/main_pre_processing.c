//고예준(yejoon08)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
    int sum[8]={0};
	char answer='O';

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    sum[0]=mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];
    sum[1]=mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2];
    sum[2]=mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2];
    sum[3]=mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0];
    sum[4]=mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1];
    sum[5]=mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2];
    sum[6]=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    sum[7]=mabangjin[2][0]+mabangjin[1][1]+mabangjin[0][2];
	////////////////////////////////////////
    for(k=0;k<8;k++){
        for(l=k+1;l<8;l++){
            if(sum[k]!=sum[l]){
                answer='X';
            }
        }
    }

	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
int_T2_D1i_D1i_D2_L2char_T2_D
c_D2_D1i_A_D1i_B<_D1i_A_D1i_B
_D1s_E_F3_FOR_C_FOR_D1i_D1i_D
i_D1i_D1i_B+_D1i_D1i_B+_A_D1i
D1i_D1i_D1i_D1i_B+_D1i_D1i_B+
A_D1i_D1i_D1i_D1i_D1i_B+_D1i_
1i_B+_A_D1i_D1i_D1i_D1i_D1i_B
_D1i_D1i_B+_A_D1i_D1i_D1i_D1i
D1i_B+_D1i_D1i_B+_A_D1i_D1i_D
i_D1i_D1i_B+_D1i_D1i_B+_A_D1i
D1i_D1i_D1i_D1i_B+_D1i_D1i_B+
A_D1i_D1i_D1i_D1i_D1i_B+_D1i_
1i_B+_A_D1i_A_D1i_B<_D1i_B+_A
D1i_B<_B!=_D1c_A_C_L1_C_FOR_C
FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
