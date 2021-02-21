//우나영(nayoung4023)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l,i,j;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int error[10]={0};

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    error[0]=mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];
    error[1]=mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2];
    error[2]=mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2];
    error[3]=mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0];
    error[4]=mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1];
    error[5]=mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2];
    error[6]=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    error[7]=mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];
    answer='O';
    for(i=0;i<MABANGJIN_SIZE;i++)
    {
        for(j=i+1;j<MABANGJIN_SIZE;j++)
        {
            if(error[i]!=error[j])
            {
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
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D1i_D1i_D2_L2char_
2_D2_L2int_T2_D1i_D1i_D2_D1i_
_D1i_B<_D1i_A_D1i_B<_D1s_E_F3
FOR_C_FOR_D1i_D1i_D1i_D1i_D1i
B+_D1i_D1i_B+_A_D1i_D1i_D1i_D
i_D1i_B+_D1i_D1i_B+_A_D1i_D1i
D1i_D1i_D1i_B+_D1i_D1i_B+_A_D
i_D1i_D1i_D1i_D1i_B+_D1i_D1i_
+_A_D1i_D1i_D1i_D1i_D1i_B+_D1
_D1i_B+_A_D1i_D1i_D1i_D1i_D1i
B+_D1i_D1i_B+_A_D1i_D1i_D1i_D
i_D1i_B+_D1i_D1i_B+_A_D1i_D1i
D1i_D1i_D1i_B+_D1i_D1i_B+_A_D
c_A_D1i_A_D1i_B<_D1i_B+_A_D1i
B<_B!=_D1c_A_C_L1_C_FOR_C_FOR
D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
