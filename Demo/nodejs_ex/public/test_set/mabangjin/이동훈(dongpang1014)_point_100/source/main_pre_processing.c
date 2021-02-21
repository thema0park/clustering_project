//이동훈(dongpang1014)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int rowsum1=0;
    int rowsum2=0;
    int rowsum3=0;
    int colsum1=0;
    int colsum2=0;
    int colsum3=0;
    int diasum1=0;
    int diasum2=0;

    int a,b,c,d,e,f,g,h;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
        //scanf("%d %d %d",&mabangjin[k][0],&mabangjin[k][1],&mabangjin[k][2]);
        
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
        
	}

	////////////////////////////////////////
    /*
    sum1=mabangjin[0][0]+mabangjin[3][3];
    sum2=mabangjin[0][1]+mabangjin[2][1];
    sum3=mabangjin[0][2]+mabangjin[2][0];
    sum4=mabangjin[1][0]+mabangjin[1][2];
*/
    rowsum1=mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];
    rowsum2=mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2];
    rowsum3=mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2];
    colsum1=mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0];
    colsum2=mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1];
    colsum3=mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2];
    diasum1=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    diasum2=mabangjin[2][0]+mabangjin[1][1]+mabangjin[0][2];

/*
    for(a=0;k<MABANGJIN_SIZE;a++)
    {
        rowsum1=mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];
    }
    for(b=0;k<MABANGJIN_SIZE;b++)
    {
        rowsum2+=mabangjin[1][b];
    }
    for(c=0;k<MABANGJIN_SIZE;c++)
    {
        rowsum3+=mabangjin[2][c];
    }
    for(d=0;k<MABANGJIN_SIZE;d++)
    {
        colsum1+=mabangjin[d][0];
    }
    for(e=0;k<MABANGJIN_SIZE;e++)
    {
        colsum2+=mabangjin[e][1];
    }
    for(f=0;k<MABANGJIN_SIZE;f++)
    {
        colsum3+=mabangjin[f][2];
    }
    for(g=0;k<MABANGJIN_SIZE;g++)
    {
        diasum1+=mabangjin[g][g];
    }
    for(h=0;h<MABANGJIN_SIZE;h++)
    {
        diasum2+=mabangjin[h][2-h];
    }
*/
    if((diasum1==colsum2)&&(colsum1==colsum3)&&(colsum1==rowsum1)&&(colsum1==rowsum2)&&(colsum1==rowsum3)&&(colsum1==diasum1)&&(colsum1==diasum2))
    {
        answer='O';
    }
    else
    {
        answer='X';
    }
    
    
	////////////////////////////////////////
   

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D2_L2int_T2_D1i_D2_L2i
t_T2_D1i_D2_L2int_T2_D1i_D2_L
int_T2_D1i_D2_L2int_T2_D1i_D2
L2int_T2_D1i_D2_L2int_T2_D2_L
int_T2_D2_L2int_T2_D2_L2int_T
_D2_L2int_T2_D2_L2int_T2_D2_L
int_T2_D2_L2int_T2_D2_L2int_T
_D1i_D1i_D2_L2char_T2_D2_D1i_
_D1i_B<_D1i_A_D1i_B<_D1s_E_F3
FOR_C_FOR_D1i_D1i_D1i_D1i_B+_
1i_D1i_B+_A_D1i_D1i_D1i_D1i_B
_D1i_D1i_B+_A_D1i_D1i_D1i_D1i
B+_D1i_D1i_B+_A_D1i_D1i_D1i_D
i_B+_D1i_D1i_B+_A_D1i_D1i_D1i
D1i_B+_D1i_D1i_B+_A_D1i_D1i_D
i_D1i_B+_D1i_D1i_B+_A_D1i_D1i
D1i_D1i_B+_D1i_D1i_B+_A_D1i_D
i_D1i_D1i_B+_D1i_D1i_B+_A_B==
B==_B&&_B==_B&&_B==_B&&_B==_B
&_B==_B&&_B==_B&&_D1c_A_C_D1c
A_C_L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
