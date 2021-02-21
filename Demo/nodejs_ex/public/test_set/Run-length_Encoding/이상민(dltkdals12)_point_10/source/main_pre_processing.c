//이상민(dltkdals12)_point_10
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k=0, l=0;
	int arr[3][3]={0,};
	char answer;

	for (k = 0; k < 3; k++)
	{
		for (l = 0; l < 3; l++)
			scanf("%d", &arr[k][l]);
	}

	////////////////////////////////////////
    //가로의 합 
    int sum_row[3]={0,};
    int sum_col[3]={0,};
    int sum_d[2]={0,};
    int i=0,j=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum_row[i]=arr[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum_col[i]=arr[j][i];
        }
    }

    sum_d[0]=arr[0][0]+arr[1][1]+arr[2][2];
    sum_d[1]=arr[0][2]+arr[1][1]+arr[2][0];

    if(sum_row[0]==sum_row[1]&&sum_row[1]==sum_row[2])
    {
        if(sum_col[0]==sum_col[1]&&sum_col[1]==sum_col[2])
        {
            if(sum_d[0]==sum_d[1])
            {
                if(sum_d[0]==sum_col[0]&&sum_col[0]==sum_row[0])
                {
                    answer='O';
                    
                    printf("%c\n",answer);
                }
                else
                {
                    answer='X';
                    printf("%c\n",answer);
                }
            }
        }
    }

    


   




	////////////////////////////////////////

	

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D1i_D2
L2int_T2_D1i_D2_L2int_T2_D1i_
1i_D1i_D2_L2char_T2_D2_D1i_A_
1i_B<_D1i_A_D1i_B<_D1s_E_F3_F
R_C_FOR_L2int_T2_D1i_D1i_D2_L
int_T2_D1i_D1i_D2_L2int_T2_D1
_D1i_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D2_D1i_A_D1i_B<_D1i_A_
1i_B<_A_C_FOR_C_FOR_D1i_A_D1i
B<_D1i_A_D1i_B<_A_C_FOR_C_FOR
D1i_D1i_D1i_D1i_D1i_B+_D1i_D1
_B+_A_D1i_D1i_D1i_D1i_D1i_B+_
1i_D1i_B+_A_D1i_D1i_B==_D1i_D
i_B==_B&&_D1i_D1i_B==_D1i_D1i
B==_B&&_D1i_D1i_B==_D1i_D1i_B
=_D1i_D1i_B==_B&&_D1c_A_D1s_E
F3_C_D1c_A_D1s_E_F3_C_L1_C_L1
C_L1_C_L1_D1i_R_C_F1_1_
###############################*/
//$//
