//김수아(sua99831)_point_100
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

    int i=0, result1 = 0, result2 = 0, result3 = 0, result4 = 0, result5 = 0, result6=0, result7=0, result8=0;
    for(i=0; i<3; i++){
        result1 +=mabangjin[0][i];
    }
    for(i=0; i<3; i++){
        result2 +=mabangjin[1][i];
    }
    for(i=0; i<3; i++){
        result3 +=mabangjin[2][i];
    }
    for(i=0; i<3; i++){
        result4 +=mabangjin[i][0];
    }
    for(i=0; i<3; i++){
        result5 += mabangjin[i][1];
    }
    for(i=0; i<3; i++){
        result6 += mabangjin[i][2];
    }
    result7 = mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2];
    result8 = mabangjin[0][2] + mabangjin[1][1] + mabangjin[2][0];
    int j=0;
	int arr[7] = {result1, result2, result3, result4, result5, result6, result7, result8};
    
    if(arr[i++] == arr[0]) printf("O\n");
    else printf("X\n");

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
_D2_L2int_T2_D1i_D2_D1i_A_D1i
B<_D1i_A_C_FOR_D1i_A_D1i_B<_D
i_A_C_FOR_D1i_A_D1i_B<_D1i_A_
_FOR_D1i_A_D1i_B<_D1i_A_C_FOR
D1i_A_D1i_B<_D1i_A_C_FOR_D1i_
_D1i_B<_D1i_A_C_FOR_D1i_D1i_D
i_D1i_B+_D1i_D1i_B+_A_D1i_D1i
D1i_D1i_B+_D1i_D1i_B+_A_L2int
T2_D1i_D2_L2int_T2_D1i_D2_D1i
B==_D1s_E_F3_D1s_E_F3_L1_D1i_
_C_F1_1_
###############################*/
//$//
