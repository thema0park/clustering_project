//안형석(dksudtjr)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int tmp1=0;
    int tmp2=0;
    int tmp3=0;
    int tmp4=0;
    int tmp5=0;
    int tmp6=0;
    int tmp7=0;
    int tmp8=0;

    
	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    
	//////////////////////////////////////// 
    /*
    for (k = 0; k < MABANGJIN_SIZE; k++)
    {
        scanf("%d %d %d", &mabangjin[k][0],&mabangjin[k][1],&mabangjin[k][2]);
    }
    */
    tmp1=mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];
    tmp2=mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2];
    tmp3=mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2];

    tmp4=mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0];
    tmp5=mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1];
    tmp6=mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2];

    tmp7=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    tmp8=mabangjin[2][0]+mabangjin[1][1]+mabangjin[0][2];
    /*
    printf("%d ",tmp1);
    printf("%d ",tmp2);
    printf("%d ",tmp3);
    printf("%d ",tmp4);
    printf("%d ",tmp5);
    printf("%d ",tmp6);
    printf("%d ",tmp7);
    printf("%d ",tmp8);
    */
    if (tmp1==tmp2 && tmp3==tmp4 && tmp5==tmp6 && tmp7==tmp8) answer='O';
    else answer = 'X';
	////////////////////////////////////////

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
FOR_D1i_D1i_D1i_D1i_B+_D1i_D1
_B+_A_D1i_D1i_D1i_D1i_B+_D1i_
1i_B+_A_D1i_D1i_D1i_D1i_B+_D1
_D1i_B+_A_D1i_D1i_D1i_D1i_B+_
1i_D1i_B+_A_D1i_D1i_D1i_D1i_B
_D1i_D1i_B+_A_D1i_D1i_D1i_D1i
B+_D1i_D1i_B+_A_D1i_D1i_D1i_D
i_B+_D1i_D1i_B+_A_D1i_D1i_D1i
D1i_B+_D1i_D1i_B+_A_B==_B==_B
&_B==_B&&_B==_B&&_D1c_A_D1c_A
L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
