//고상원(ko82352)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int sum=0,test,flag=0;
    int x,y;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    for(k=0;k<MABANGJIN_SIZE;k++){ //가로
        for(l=0;l<MABANGJIN_SIZE;l++){
            sum+=mabangjin[k][l];
        }
        if(k==0)
            test=sum;
        else{
            if(sum!=test)
            flag=1;
        }
        sum=0;
    }
    sum=0;
    for(k=0;k<MABANGJIN_SIZE;k++){ //세로
        for(l=0;l<MABANGJIN_SIZE;l++){
            sum+=mabangjin[l][k];
        }
        if(k==0)
            test=sum;
        else{
            if(sum!=test)
            flag=1;
        }
        sum=0;
    }
    sum=0;
    x=y=0;
    for(k=0;k<MABANGJIN_SIZE;k++){
        sum+=mabangjin[x][y];
        x++;
        y++;
    }
    test=sum;
    x=MABANGJIN_SIZE-1;
    y=MABANGJIN_SIZE-1;
    sum=0;
    for(k=0;k<MABANGJIN_SIZE;k++){
        sum+=mabangjin[x][y];
        x--;
        y--;
    }
    if(sum!=test)
    flag=1;
    if(flag==0)
    answer='O';
    else
    answer='X';
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D2_L2int_T2_D1i_D2_L2int_T
_D2_L2int_T2_D2_L2int_T2_D1i_
1i_D2_L2char_T2_D2_D1i_A_D1i_
<_D1i_A_D1i_B<_D1s_E_F3_FOR_C
FOR_D1i_A_D1i_B<_D1i_A_D1i_B<
A_C_FOR_D1i_B==_A_B!=_D1i_A_L
_C_L1_D1i_A_C_FOR_D1i_A_D1i_A
D1i_B<_D1i_A_D1i_B<_A_C_FOR_D
i_B==_A_B!=_D1i_A_L1_C_L1_D1i
A_C_FOR_D1i_A_D1i_A_A_D1i_A_D
i_B<_A_C_FOR_A_D1i_D1i_B-_A_D
i_D1i_B-_A_D1i_A_D1i_A_D1i_B<
A_C_FOR_B!=_D1i_A_L1_D1i_B==_
1c_A_D1c_A_L1_D1s_E_F3_D1i_R_
_F1_1_
###############################*/
//$//
