//강선규(gron1gh1)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int check = 0;
    int sum = 0;
	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    
	////////////////////////////////////////
    answer = 'O';
    check = 0;
    for(k = 0;k<3;k++)
    {
        sum = 0;
        for(l = 0;l<3;l++)
        {
            sum+=mabangjin[k][l];
            
        }
       // printf("%d %d\n",check ,sum);
        if(check != sum && check)
            answer = 'X';
        check = sum;
    }

    for(k = 0;k<3;k++)
    {
        sum = 0;
        for(l = 0;l<3;l++)
        {
            sum+=mabangjin[l][k];
            
        }
        //printf("%d %d\n",check ,sum);
        if(check != sum && check)
            answer = 'X';
        check = sum;
    }

    
    sum = 0;
    for(k = 0;k<3;k++)
        sum+=mabangjin[k][k];
    if(check != sum  && check) 
        answer = 'X';
    check = sum;
    sum = 0;
    for(k = 2;k>=0;k--)
        sum+=mabangjin[k][k];
    if(check != sum  && check)
        answer = 'X';
        
	////////////////////////////////////////
    
	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_L2int_T2_D1i_D2_L2
nt_T2_D1i_D2_D1i_A_D1i_B<_D1i
A_D1i_B<_D1s_E_F3_FOR_C_FOR_D
c_A_D1i_A_D1i_A_D1i_B<_D1i_A_
1i_A_D1i_B<_A_C_FOR_B!=_B&&_D
c_A_L1_A_C_FOR_D1i_A_D1i_B<_D
i_A_D1i_A_D1i_B<_A_C_FOR_B!=_
&&_D1c_A_L1_A_C_FOR_D1i_A_D1i
A_D1i_B<_A_FOR_B!=_B&&_D1c_A_
1_A_D1i_A_D1i_A_D1i_B>=_A_FOR
B!=_B&&_D1c_A_L1_D1s_E_F3_D1i
R_C_F1_1_
###############################*/
//$//
