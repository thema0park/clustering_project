//임학범(zcae1020)_point_30
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3


int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    int i,j;
    int flag=0;
    int ga=0;
    int se=0;
    int de=0;
    int deflag=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            int r;
            for(r=0;r<3;r++)
            {
                ga+=mabangjin[i][r];
            }
            for(r=0;r<3;r++)
            {
                se+=mabangjin[r][j];
            }
            if(i==0&&j==0)
            {
                for(r=0;r<3;r++)
                {
                    de+=mabangjin[i+r][j+r];
                }
                deflag=1;
            }
            if(i==0&&j==2)
            {
                for(r=0;r<3;r++)
                {
                    de+=mabangjin[i+r][j-r];
                }
                deflag=1;
            }
            if(i==2&&j==0)
            {
                for(r=0;r<3;r++)
                {
                    de+=mabangjin[i-r][j+r];
                }
                deflag=1;
            }
            if(i==2&&j==2)
            {
               for(r=0;r<3;r++)
                {
                    de+=mabangjin[i-r][j-r];
                }
                deflag=1;
            }
            if(deflag==1)
            {
                if(ga!=se||se!=de||de!=ga)
                {
                    flag=1;
                    break;
                }
            }
            else if(deflag==0)
            {
                if(ga!=se)
                {
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==1)
    {
        answer='X';
    }
    else answer='O';



	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
1i_D2_L2int_T2_D1i_D2_L2int_T
_D1i_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D2_D1i_A_D1i_B<_D1i_A_
1i_B<_L2int_T2_D2_D1i_A_D1i_B
_A_C_FOR_D1i_A_D1i_B<_A_C_FOR
D1i_B==_D1i_B==_B&&_D1i_A_D1i
B<_B+_B+_A_C_FOR_D1i_A_C_L1_D
i_B==_D1i_B==_B&&_D1i_A_D1i_B
_B+_B-_A_C_FOR_D1i_A_C_L1_D1i
B==_D1i_B==_B&&_D1i_A_D1i_B<_
-_B+_A_C_FOR_D1i_A_C_L1_D1i_B
=_D1i_B==_B&&_D1i_A_D1i_B<_B-
B-_A_C_FOR_D1i_A_C_L1_D1i_B==
B!=_B!=_B||_B!=_B||_D1i_A_C_L
_C_D1i_B==_B!=_D1i_A_C_L1_C_L
_L1_C_FOR_C_FOR_D1i_B==_D1c_A
C_D1c_A_L1_D1s_E_F3_D1i_R_C_F
_1_
###############################*/
//$//
