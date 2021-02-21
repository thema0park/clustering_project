//송인범(dlsqja343)_point_50
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
    int a,b,c=1,sum;
    for(a=0;a<MABANGJIN_SIZE;a++)
    {sum=0;
        for(b=0;b<MABANGJIN_SIZE;b++)
        {
           sum= sum+mabangjin[a][b];
        }
     if(sum!=15)
     {
        c=0;
        break;
     }
    }
    for(a=0;a<MABANGJIN_SIZE;a++)
    {sum=0;
        for(b=0;b<MABANGJIN_SIZE;b++)
        {
           sum= sum+mabangjin[b][a];
        }
     if(sum!=15)
     {
        c=0;
        break;
     }
    }
    sum = 0;
    for(a=0;a<MABANGJIN_SIZE;a++)
    {
        for(b=0;b<MABANGJIN_SIZE;b++)
        {
           sum= sum+mabangjin[b][a];
        }
    }
    if(sum!=45)
    {
        c=0;
    }
    if(mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0]!=15)
    {
        c=0;
    }
    if(mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]!=15)
    {
        c=0;
    }
    if(c==0)
    {
        answer='X';
    }
    else if(c==1)
    {
        answer='O';
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
t_T2_D2_L2int_T2_D2_L2int_T2_
1i_D2_L2int_T2_D2_D1i_A_D1i_B
_D1i_A_D1i_A_D1i_B<_B+_A_C_FO
_D1i_B!=_D1i_A_C_L1_C_FOR_D1i
A_D1i_B<_D1i_A_D1i_A_D1i_B<_B
_A_C_FOR_D1i_B!=_D1i_A_C_L1_C
FOR_D1i_A_D1i_A_D1i_B<_D1i_A_
1i_B<_B+_A_C_FOR_C_FOR_D1i_B!
_D1i_A_C_L1_D1i_D1i_D1i_D1i_B
_D1i_D1i_B+_D1i_B!=_D1i_A_C_L
_D1i_D1i_D1i_D1i_B+_D1i_D1i_B
_D1i_B!=_D1i_A_C_L1_D1i_B==_D
c_A_C_D1i_B==_D1c_A_C_L1_L1_D
s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
