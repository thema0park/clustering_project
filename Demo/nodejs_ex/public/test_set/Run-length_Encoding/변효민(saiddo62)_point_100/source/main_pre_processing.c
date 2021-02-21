//변효민(saiddo62)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l,a=2,b=2,c=2,x;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
x=mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];
	////////////////////////////////////////
    int i=0;
    int y=0;
    while(i<3){
    y=0;
    y=mabangjin[i][0]+mabangjin[i][1]+mabangjin[i][2];
        if(x==y) a=1;
        else a=0;
    i++;
    }
    int n=0;
    int z=0;
    while(n<3){
    z=0;
    z=mabangjin[0][n]+mabangjin[1][n]+mabangjin[2][n];
     if(x==z) {b=1;}
        else{ b=0;}
        n++;
    }
    if((mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2])==x){ c=1;}
    else if((mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0])==x){ c=1;}
    else {c=0;}
    if(a==1&&b==1&&c==1){printf("O\n");}
    else {printf("X\n");}
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D2_L2int_T2_D1i_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_D1i
D1i_D1i_D1i_B+_D1i_D1i_B+_A_L
int_T2_D1i_D2_L2int_T2_D1i_D2
D1i_B<_D1i_A_D1i_D1i_B+_D1i_B
_A_B==_D1i_A_D1i_A_L1_C_W_L2i
t_T2_D1i_D2_L2int_T2_D1i_D2_D
i_B<_D1i_A_D1i_D1i_B+_D1i_B+_
_B==_D1i_A_C_D1i_A_C_L1_C_W_D
i_D1i_D1i_D1i_B+_D1i_D1i_B+_B
=_D1i_A_C_D1i_D1i_D1i_D1i_B+_
1i_D1i_B+_B==_D1i_A_C_D1i_A_C
L1_L1_D1i_B==_D1i_B==_B&&_D1i
B==_B&&_D1s_E_F3_C_D1s_E_F3_C
L1_D1i_R_C_F1_1_
###############################*/
//$//
