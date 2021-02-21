//김동준(dk85440)_point_80
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

int a1,a2,a3,b1,b2,b3,c1,c2,c3;

a1=mabangjin[0][0];
a2=mabangjin[0][1];
a3=mabangjin[0][2];
b1=mabangjin[1][0];
b1=mabangjin[1][1];
b1=mabangjin[1][0];
c1=mabangjin[2][0];
c1=mabangjin[2][1];
c1=mabangjin[2][2];

int r1,r2,r3,r4,r5,r6,r7,r8;

r1=a1+a2+a3;
r2=b1+b2+b3;
r3=c1+c2+c3;
r4=a1+b1+c1;
r5=a2+b2+c2;
r6=a3+b3+c3;
r7=a1+b2+c3;
r8=a3+b2+c1;

if(r1==r2&&r2==r3&&r3==r4&&r4==r5&&r5==r6&&r6==r7&&r7==r1)
{
    answer=("O");
}
else
{
    answer=("X");
}


	////////////////////////////////////////

	printf("O\n");

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_D1i_D1i_A_D1i_D
i_A_D1i_D1i_A_D1i_D1i_A_D1i_D
i_A_D1i_D1i_A_D1i_D1i_A_D1i_D
i_A_D1i_D1i_A_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_B+_B+_A_B
_B+_A_B+_B+_A_B+_B+_A_B+_B+_A
B+_B+_A_B+_B+_A_B+_B+_A_B==_B
=_B&&_B==_B&&_B==_B&&_B==_B&&
B==_B&&_B==_B&&_D1s_A_C_D1s_A
C_L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
