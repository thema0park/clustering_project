//김민석(rjwltps57)_point_100
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
    int i;
    int sum = 0;
    for(i = 0; i<3; i++){
        sum += mabangjin[0][i];
    }
    int result = sum;
    
    int Sarr[7] = {0, };
    for(i = 0; i<3; i++){
        Sarr[0] += mabangjin[1][i];
    }
    for(i = 0; i<3; i++){
        Sarr[1] += mabangjin[2][i];
    }
    for(i = 0; i<3; i++){
        Sarr[2] += mabangjin[i][0];
    }
    for(i = 0; i<3; i++){
        Sarr[3] += mabangjin[i][1];
    }
    for(i = 0; i<3; i++){
        Sarr[4] += mabangjin[i][2];
    }
    int j = 0;
    for(i = 0; i<3; i++){
        Sarr[5] += mabangjin[i][i];
    }
    for(i = 0; i<3; i++){
        Sarr[6] += mabangjin[i][2-i];
    }

    answer = 'O';
    for(i = 0; i<7; i++){
        if(sum != Sarr[i]){
            answer = 'X';
            break;
        }
    }

	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_L2i
t_T2_D2_L2int_T2_D1i_D2_D1i_A
D1i_B<_D1i_A_C_FOR_L2int_T2_D
_L2int_T2_D1i_D1i_D2_D1i_A_D1
_B<_D1i_D1i_A_C_FOR_D1i_A_D1i
B<_D1i_D1i_A_C_FOR_D1i_A_D1i_
<_D1i_D1i_A_C_FOR_D1i_A_D1i_B
_D1i_D1i_A_C_FOR_D1i_A_D1i_B<
D1i_D1i_A_C_FOR_L2int_T2_D1i_
2_D1i_A_D1i_B<_D1i_A_C_FOR_D1
_A_D1i_B<_D1i_D1i_B-_A_C_FOR_
1c_A_D1i_A_D1i_B<_B!=_D1c_A_C
L1_C_FOR_D1s_E_F3_D1i_R_C_F1_
_
###############################*/
//$//
