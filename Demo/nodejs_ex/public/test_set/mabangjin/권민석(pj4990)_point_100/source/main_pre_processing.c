//권민석(pj4990)_point_100
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
    answer='O';

    int i;
    int a,b,c;
    a=b=c=0;

    for (i=0;i<3;i++){ 
        a=a+mabangjin[i][0];
        b=b+mabangjin[0][i];
        c=c+mabangjin[i][i];
    }
    //printf("%d %d %d", a, b, c);
    if (a==b && b==c & c==a){
        answer='O';
    }
    else{ answer='X'; }

	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_D1c
A_L2int_T2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_D1i_A_A_A
D1i_A_D1i_B<_D1i_B+_A_D1i_B+_
_B+_A_C_FOR_B==_B==_B==_B&_B&
_D1c_A_C_D1c_A_C_L1_D1s_E_F3_
1i_R_C_F1_1_
###############################*/
//$//
