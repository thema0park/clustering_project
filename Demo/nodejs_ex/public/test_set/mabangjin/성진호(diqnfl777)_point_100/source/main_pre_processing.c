//성진호(diqnfl777)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer ='O';
    int asum=0,sum=0;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++){
            scanf("%d", &mabangjin[k][l]);
            if(k==0)
                asum+= mabangjin[k][l];
        }	
	}
    for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++){
            sum+= mabangjin[k][l];
        }
        if(sum!=asum){
            answer = 'X';
            break;
        }
        sum=0;
	}
    for (l = 0; l < MABANGJIN_SIZE; l++){
        for (k = 0; k < MABANGJIN_SIZE; k++){
            sum+=mabangjin[k][l];
        }
        if(sum!=asum){
            answer ='X';
            break;
        }
        sum=0;
    }
    if(mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]!=asum||mabangjin[2][0]+mabangjin[1][1]+mabangjin[0][2]!=asum)
        answer = 'X';

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D1c_D2_L2int_T2_D1i_D
_L2int_T2_D1i_D2_D1i_A_D1i_B<
D1i_A_D1i_B<_D1s_E_F3_D1i_B==
A_L1_C_FOR_C_FOR_D1i_A_D1i_B<
D1i_A_D1i_B<_A_C_FOR_B!=_D1c_
_C_L1_D1i_A_C_FOR_D1i_A_D1i_B
_D1i_A_D1i_B<_A_C_FOR_B!=_D1c
A_C_L1_D1i_A_C_FOR_D1i_D1i_D1
_D1i_B+_D1i_D1i_B+_B!=_D1i_D1
_D1i_D1i_B+_D1i_D1i_B+_B!=_B|
_D1c_A_L1_D1s_E_F3_D1i_R_C_F1
1_
###############################*/
//$//
