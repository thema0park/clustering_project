//이예진(uhoo99)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int check=0,sum=0,ch_sum=0;
	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////

    answer='O';
    //가로
   for(k=0;k< MABANGJIN_SIZE;k++)
   {
       sum=0;
       for (l = 0; l < MABANGJIN_SIZE; l++)
       {
           sum+=mabangjin[k][l];
       }
       if(ch_sum==0)
       {
           ch_sum=sum;
       }
       else if(ch_sum!=sum)
       {
        answer='X';
        break;
       }
   }
    //세로
    if(answer!='X')
    {
       
        for(k=0;k< MABANGJIN_SIZE;k++)
        {
             sum=0;
            for (l = 0; l < MABANGJIN_SIZE; l++)
            {
                sum+=mabangjin[l][k];
            }
            if(ch_sum!=sum)
            {
                answer='X';
                break;
            }
        }
    }
    //대각선
    if(answer!='X')
    {   
        sum=0;
       
        for(k=0;k< MABANGJIN_SIZE;k++)
        {
            sum+=mabangjin[k][k];   
            
        }
        if(ch_sum!=sum)
         {
            answer='X';
        }
    }
    if(answer!='X')
    {   
        sum=0;
       
        for(k=0;k< MABANGJIN_SIZE;k++)
        {
            sum+=mabangjin[k][MABANGJIN_SIZE-k-1];   
            
        }
        if(ch_sum!=sum)
         {
            answer='X';
        }
    }

	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_L2int_T2_D1i_D2_L2
nt_T2_D1i_D2_L2int_T2_D1i_D2_
1i_A_D1i_B<_D1i_A_D1i_B<_D1s_
_F3_FOR_C_FOR_D1c_A_D1i_A_D1i
B<_D1i_A_D1i_A_D1i_B<_A_C_FOR
D1i_B==_A_C_B!=_D1c_A_C_L1_L1
C_FOR_D1c_B!=_D1i_A_D1i_B<_D1
_A_D1i_A_D1i_B<_A_C_FOR_B!=_D
c_A_C_L1_C_FOR_C_L1_D1c_B!=_D
i_A_D1i_A_D1i_B<_A_C_FOR_B!=_
1c_A_C_L1_C_L1_D1c_B!=_D1i_A_
1i_A_D1i_B<_D1i_B-_D1i_B-_A_C
FOR_B!=_D1c_A_C_L1_C_L1_D1s_E
F3_D1i_R_C_F1_1_
###############################*/
//$//
