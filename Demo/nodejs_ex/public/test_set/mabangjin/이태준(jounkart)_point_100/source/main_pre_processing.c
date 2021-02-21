//이태준(jounkart)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
    
    int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0;
    int count=0;
	

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    
    
        for(l=0;l<MABANGJIN_SIZE;l++)
        {
            sum1+=mabangjin[0][l];
            sum2+=mabangjin[1][l];
            sum3+=mabangjin[2][l];
            sum4+=mabangjin[l][0];
            sum5+=mabangjin[l][1];
            sum6+=mabangjin[l][2];
            sum7+=mabangjin[l][l];
            sum8+=mabangjin[l][2-l];     //02 11 20
        }
        if(sum1==sum2 && sum1==sum3 && sum1==sum4 && sum1==sum5 && sum1==sum6 && sum1==sum7 && sum1==sum8)
        {
            printf("O\n");
        }

        else
        {
            printf("X\n");
        }

        
    

	////////////////////////////////////////



	////////////////////////////////////////


	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
int_T2_D1i_D2_L2int_T2_D1i_D2
L2int_T2_D1i_D2_L2int_T2_D1i_
2_L2int_T2_D1i_D2_L2int_T2_D1
_D2_L2int_T2_D1i_D2_L2int_T2_
1i_D2_L2int_T2_D1i_D2_D1i_A_D
i_B<_D1i_A_D1i_B<_D1s_E_F3_FO
_C_FOR_D1i_A_D1i_B<_D1i_A_D1i
A_D1i_A_D1i_A_D1i_A_D1i_A_A_D
i_B-_A_C_FOR_B==_B==_B&&_B==_
&&_B==_B&&_B==_B&&_B==_B&&_B=
_B&&_D1s_E_F3_C_D1s_E_F3_C_L1
D1i_R_C_F1_1_
###############################*/
//$//
