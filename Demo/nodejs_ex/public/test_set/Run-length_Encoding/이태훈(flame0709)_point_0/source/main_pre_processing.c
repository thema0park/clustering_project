//이태훈(flame0709)_point_0
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;


			scanf("%d", &mabangjin[k][l]);
			

	
       



    if(mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2] == mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2])
    {
    printf("O");
    }
    if(mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2] == mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2])
    {
    printf("O");
    }
    if( mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0] == mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1])
    {
    printf("O");
    }
    if(mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0] == mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2])
    {
    printf("O");
    }
    if(mabangjin[0][0]+mabangjin[1][1]+mabangjin[1][2] == mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0])
    {
    printf("O");
    }	
    else
    {
	printf("X");
    }
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1s_E_F3_D1i_D1i_D
i_D1i_B+_D1i_D1i_B+_D1i_D1i_D
i_D1i_B+_D1i_D1i_B+_B==_D1s_E
F3_C_L1_D1i_D1i_D1i_D1i_B+_D1
_D1i_B+_D1i_D1i_D1i_D1i_B+_D1
_D1i_B+_B==_D1s_E_F3_C_L1_D1i
D1i_D1i_D1i_B+_D1i_D1i_B+_D1i
D1i_D1i_D1i_B+_D1i_D1i_B+_B==
D1s_E_F3_C_L1_D1i_D1i_D1i_D1i
B+_D1i_D1i_B+_D1i_D1i_D1i_D1i
B+_D1i_D1i_B+_B==_D1s_E_F3_C_
1_D1i_D1i_D1i_D1i_B+_D1i_D1i_
+_D1i_D1i_D1i_D1i_B+_D1i_D1i_
+_B==_D1s_E_F3_C_D1s_E_F3_C_L
_D1i_R_C_F1_1_
###############################*/
//$//
