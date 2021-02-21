//정민규(jmingrove21)_point_100
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

    int row[3]={0,0,0};
    int col[3]={0,0,0};
    int di[2]={0,0};
    int i,j=0;
    for(i=0;i<MABANGJIN_SIZE;i++){
        for(j=0;j<MABANGJIN_SIZE;j++){
            row[i]+=mabangjin[i][j];
        }
    }
    for(i=0;i<MABANGJIN_SIZE;i++){
        for(j=0;j<MABANGJIN_SIZE;j++){
            col[i]+=mabangjin[j][i];
        }
    }
    di[0]=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    di[1]=mabangjin[2][0]+mabangjin[1][1]+mabangjin[0][2];
  
    if(di[0]==di[1]&&di[0]==row[0]&&row[0]==row[1]&&row[1]==row[2]&&col[0]==di[0]&&col[0]==col[1]&&col[1]==col[2])
        answer='O';
    else
        answer='X';


	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_L2i
t_T2_D1i_D1i_D1i_D1i_D2_L2int
T2_D1i_D1i_D1i_D1i_D2_L2int_T
_D1i_D1i_D1i_D2_L2int_T2_D2_L
int_T2_D1i_D2_D1i_A_D1i_B<_D1
_A_D1i_B<_A_C_FOR_C_FOR_D1i_A
D1i_B<_D1i_A_D1i_B<_A_C_FOR_C
FOR_D1i_D1i_D1i_D1i_D1i_B+_D1
_D1i_B+_A_D1i_D1i_D1i_D1i_D1i
B+_D1i_D1i_B+_A_D1i_D1i_B==_D
i_D1i_B==_B&&_D1i_D1i_B==_B&&
D1i_D1i_B==_B&&_D1i_D1i_B==_B
&_D1i_D1i_B==_B&&_D1i_D1i_B==
B&&_D1c_A_D1c_A_L1_D1s_E_F3_D
i_R_C_F1_1_
###############################*/
//$//
