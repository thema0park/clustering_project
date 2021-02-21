//박혜민(hyeals9)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer='C';
    int result=0;
    int test=0;
    int test_2=0;
    int i;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

    for(i=0;i<3;i++)
        result+=mabangjin[i][0];

    for(k=0;k<3;k++)
    {
        for(l=0;l<3;l++)
        {
            test+=mabangjin[l][k];
        }
         if(test!=result)
            {
                answer='X';
                break;
            }
        test=0;

        for(l=0;l<3;l++)
        {
            test_2+=mabangjin[k][l];
        }
       
        if(test_2!=result)
                {
                      answer='X';
                      break;
                }
        test_2=0;

    }
    
    if(answer!='X')
    {
        if(mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]==result)
            {
                    if(mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0]==result)
                    {
                        answer='O';
                    }
            }

        if(answer!='O')
            answer='X';
    }

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D1c_D2_L2int_T2_D1i_D
_L2int_T2_D1i_D2_L2int_T2_D1i
D2_L2int_T2_D2_D1i_A_D1i_B<_D
i_A_D1i_B<_D1s_E_F3_FOR_C_FOR
D1i_A_D1i_B<_D1i_A_FOR_D1i_A_
1i_B<_D1i_A_D1i_B<_A_C_FOR_B!
_D1c_A_C_L1_D1i_A_D1i_A_D1i_B
_A_C_FOR_B!=_D1c_A_C_L1_D1i_A
C_FOR_D1c_B!=_D1i_D1i_D1i_D1i
B+_D1i_D1i_B+_B==_D1i_D1i_D1i
D1i_B+_D1i_D1i_B+_B==_D1c_A_C
L1_C_L1_D1c_B!=_D1c_A_L1_C_L1
D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
