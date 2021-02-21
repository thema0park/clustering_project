//이해찬(dlgockssla)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int arr[MABANGJIN_SIZE][MABANGJIN_SIZE];
    int i=0, j=0;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &arr[k][l]);
	}
	////////////////////////////////////////
    const int sum = arr[0][1] + arr[0][2] + arr[0][0];
    int count = 0;
    int com = 0;
    int com2 = 0;

    for(i=0; i<3;i++){
        com = 0;
        com2 = 0;
        for(j=0; j<3; j++){
            com += arr[i][j];
            com2 += arr[j][i];

        }
        if((sum != com) || (sum != com2)){
            printf("X\n");
            return 0;
        }
        if(sum != com2){
            printf("X\n");
            return 0;
        }
    }
    if(sum != arr[0][0]+arr[1][1]+arr[2][2]){
        printf("X\n");
        return 0;
    }
    if(sum != arr[0][2] + arr[1][1] + arr[2][0]){
        printf("X\n");
        return 0;
    }
    printf("O\n");
   
	////////////////////////////////////////
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
int_T2_D1i_D2_L2int_T2_D1i_D2
D1i_A_D1i_B<_D1i_A_D1i_B<_D1s
E_F3_FOR_C_FOR_L2int_T2_D1i_D
i_D1i_D1i_B+_D1i_D1i_B+_D2_L2
nt_T2_D1i_D2_L2int_T2_D1i_D2_
2int_T2_D1i_D2_D1i_A_D1i_B<_D
i_A_D1i_A_D1i_A_D1i_B<_A_A_C_
OR_B!=_B!=_B||_D1s_E_F3_D1i_R
C_L1_B!=_D1s_E_F3_D1i_R_C_L1_
_FOR_D1i_D1i_D1i_D1i_B+_D1i_D
i_B+_B!=_D1s_E_F3_D1i_R_C_L1_
1i_D1i_D1i_D1i_B+_D1i_D1i_B+_
!=_D1s_E_F3_D1i_R_C_L1_D1s_E_
3_D1i_R_C_F1_1_
###############################*/
//$//
