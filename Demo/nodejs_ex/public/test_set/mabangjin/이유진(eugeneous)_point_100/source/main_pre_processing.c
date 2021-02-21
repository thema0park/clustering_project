//이유진(eugeneous)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int i,j;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    for(k=0;k<3;k++)
    {
        if(k==0)
        i=mabangjin[k][0]+mabangjin[k][1]+mabangjin[k][2];
        else
        {
            if(i==mabangjin[k][0]+mabangjin[k][1]+mabangjin[k][2])
            {
                continue;
            }
            else
            {answer='X';
            break;
            }
        }
    }
    if(answer!='X')
    {
        for(k=0;k<3;k++)
    {
        if(i==mabangjin[0][k]+mabangjin[1][k]+mabangjin[2][k])
            {
                continue;
            }
            else
            {answer='X';
            break;
            }    
    }
    }
    if(answer!='X')
    {
    
        if((i==mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2])&&(i==mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0]))
            {
                answer='O';
            }
            else
            {answer='X';}    
    
    }

	////////////////////////////////////////



	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D1i_D1i_D2_L2char_
2_D2_D1i_A_D1i_B<_D1i_A_D1i_B
_D1s_E_F3_FOR_C_FOR_D1i_A_D1i
B<_D1i_B==_D1i_D1i_B+_D1i_B+_
_D1i_D1i_B+_D1i_B+_B==_C_D1c_
_C_L1_C_L1_C_FOR_D1c_B!=_D1i_
_D1i_B<_D1i_D1i_B+_D1i_B+_B==
C_D1c_A_C_L1_C_FOR_C_L1_D1c_B
=_D1i_D1i_D1i_D1i_B+_D1i_D1i_
+_B==_D1i_D1i_D1i_D1i_B+_D1i_
1i_B+_B==_B&&_D1c_A_C_D1c_A_C
L1_C_L1_D1s_E_F3_D1i_R_C_F1_1

###############################*/
//$//
