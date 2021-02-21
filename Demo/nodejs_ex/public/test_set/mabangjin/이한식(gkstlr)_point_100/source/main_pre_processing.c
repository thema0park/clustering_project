//이한식(gkstlr)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int sum1=0;
    int sum2=0;
    int sum3=0;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++){
			scanf("%d", &mabangjin[k][l]);

        sum1+=mabangjin[0][l];
        sum2+=mabangjin[k][0];
        sum3+=mabangjin[k][l];
        
        } 
	}

	////////////////////////////////////////
    
            
if(sum1==sum2 && sum2==sum3)
    answer='O';
else
     answer='X';


	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D2_L2int_T2_D1i_D2_L2i
t_T2_D1i_D1i_D2_L2char_T2_D2_
1i_A_D1i_B<_D1i_A_D1i_B<_D1s_
_F3_D1i_A_D1i_A_A_C_FOR_C_FOR
B==_B==_B&&_D1c_A_D1c_A_L1_D1
_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
