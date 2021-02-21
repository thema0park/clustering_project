//묵주연(juyeon1454)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0;
    
    	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}


    for (l = 0; l < MABANGJIN_SIZE; l++)
    {
        sum1+= mabangjin[0][l];
    }
    for (l = 0; l < MABANGJIN_SIZE; l++)
    {
        sum2+= mabangjin[1][l];
    }
    for (l = 0; l < MABANGJIN_SIZE; l++)
    {
        sum3+= mabangjin[2][l];
    }
   
    for (l = 0; l < MABANGJIN_SIZE; l++)
    {
        sum4+= mabangjin[l][0];
    }
    for (l = 0; l < MABANGJIN_SIZE; l++)
    {
        sum5+= mabangjin[l][1];
    }
    for (l = 0; l < MABANGJIN_SIZE; l++)
    {
        sum6+= mabangjin[l][2];
    }
    
    sum7=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    sum8=mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];
    
    if(sum1==sum2&&sum2==sum3&&sum3==sum4&&sum4==sum5&&sum5==sum6&&sum6==sum7&&sum7==sum8)
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
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_L2int_T2_D1i_D2_L2
nt_T2_D1i_D2_L2int_T2_D1i_D2_
2int_T2_D1i_D2_L2int_T2_D1i_D
_L2int_T2_D1i_D2_L2int_T2_D1i
D2_L2int_T2_D1i_D2_D1i_A_D1i_
<_D1i_A_D1i_B<_D1s_E_F3_FOR_C
FOR_D1i_A_D1i_B<_D1i_A_C_FOR_
1i_A_D1i_B<_D1i_A_C_FOR_D1i_A
D1i_B<_D1i_A_C_FOR_D1i_A_D1i_
<_D1i_A_C_FOR_D1i_A_D1i_B<_D1
_A_C_FOR_D1i_A_D1i_B<_D1i_A_C
FOR_D1i_D1i_D1i_D1i_B+_D1i_D1
_B+_A_D1i_D1i_D1i_D1i_B+_D1i_
1i_B+_A_B==_B==_B&&_B==_B&&_B
=_B&&_B==_B&&_B==_B&&_B==_B&&
D1c_A_C_D1c_A_C_L1_D1s_E_F3_D
i_R_C_F1_1_
###############################*/
//$//
