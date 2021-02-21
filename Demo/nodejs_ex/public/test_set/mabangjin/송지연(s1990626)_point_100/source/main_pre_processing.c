//송지연(s1990626)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int a, b, c, d, e, f, g, h;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	
 a=(mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2]);
 b=(mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2]);
 c=(mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2]);
 d=(mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0]);
 e=(mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1]);
 f=(mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2]);
 g=(mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0]);
 h=(mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]);


if(a==b&& b==c && c==d&& d==e && e==f && f==g && g==h) {answer='O';}
 else {answer='X';}






	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D1i_D1
_D2_L2char_T2_D2_D1i_A_D1i_B<
D1i_A_D1i_B<_D1s_E_F3_FOR_C_F
R_D1i_D1i_D1i_D1i_B+_D1i_D1i_
+_A_D1i_D1i_D1i_D1i_B+_D1i_D1
_B+_A_D1i_D1i_D1i_D1i_B+_D1i_
1i_B+_A_D1i_D1i_D1i_D1i_B+_D1
_D1i_B+_A_D1i_D1i_D1i_D1i_B+_
1i_D1i_B+_A_D1i_D1i_D1i_D1i_B
_D1i_D1i_B+_A_D1i_D1i_D1i_D1i
B+_D1i_D1i_B+_A_D1i_D1i_D1i_D
i_B+_D1i_D1i_B+_A_B==_B==_B&&
B==_B&&_B==_B&&_B==_B&&_B==_B
&_B==_B&&_D1c_A_C_D1c_A_C_L1_
1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
