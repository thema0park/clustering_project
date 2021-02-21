//신현재(jack9139)_point_100
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

    //////////////////////////////////////////
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
    int i;

    for(i=0;i<MABANGJIN_SIZE;i++)
    {
    a = a + mabangjin[0][i];
    b = b + mabangjin[1][i];
    c = c + mabangjin[2][i];
    d = d + mabangjin[i][0];
    e = e + mabangjin[i][1];
    f = f + mabangjin[i][2];
    g = g + mabangjin[i][i];
    h = h + mabangjin[i][2-i];
    }

    if(a==b && a==c && a==d && a==e && a==f && a==g && a==h){
    answer = 'O';
    }
    else{
    answer ='X';
    }

    //////////////////////////////////////////


	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_L2i
t_T2_D1i_D2_L2int_T2_D1i_D2_L
int_T2_D1i_D2_L2int_T2_D1i_D2
L2int_T2_D1i_D2_L2int_T2_D1i_
2_L2int_T2_D1i_D2_L2int_T2_D1
_D2_L2int_T2_D2_D1i_A_D1i_B<_
1i_B+_A_D1i_B+_A_D1i_B+_A_D1i
B+_A_D1i_B+_A_D1i_B+_A_B+_A_D
i_B-_B+_A_C_FOR_B==_B==_B&&_B
=_B&&_B==_B&&_B==_B&&_B==_B&&
B==_B&&_D1c_A_C_D1c_A_C_L1_D1
_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
