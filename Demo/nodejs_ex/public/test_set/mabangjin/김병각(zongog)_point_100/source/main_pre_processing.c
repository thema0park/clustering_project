//김병각(zongog)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    //3*3 입력
	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    int rowsum[3]={0};
    int colsum[3]={0};
    
	////////////////////////////////////////
    //대각선
    int temp_one = mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    int temp_two = mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];

    for(k=0;k<MABANGJIN_SIZE;k++){
        for(l=0;l<MABANGJIN_SIZE;l++){
            rowsum[k]+=mabangjin[k][l];
        }//각각 가로줄 합
        for(l=0;l<MABANGJIN_SIZE;l++){
            colsum[k]+=mabangjin[l][k];
        }//각각 세로줄합
    }


    for(k=0;k<MABANGJIN_SIZE;k++){
        for(l=0;l<MABANGJIN_SIZE;l++){
            if(rowsum[k]!=colsum[l]){
                answer = 'X';
            }
            else{
                if(rowsum[l]!=temp_one){
                    answer = 'X';
                }
                else if(rowsum[l]!=temp_two){
                    answer = 'X';
                }
                else{
                    answer ='O';
                }
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
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_L2i
t_T2_D1i_D1i_D2_L2int_T2_D1i_
1i_D2_L2int_T2_D1i_D1i_D1i_D1
_B+_D1i_D1i_B+_D2_L2int_T2_D1
_D1i_D1i_D1i_B+_D1i_D1i_B+_D2
D1i_A_D1i_B<_D1i_A_D1i_B<_A_C
FOR_D1i_A_D1i_B<_A_C_FOR_C_FO
_D1i_A_D1i_B<_D1i_A_D1i_B<_B!
_D1c_A_C_B!=_D1c_A_C_B!=_D1c_
_C_D1c_A_C_L1_L1_C_L1_C_FOR_C
FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
