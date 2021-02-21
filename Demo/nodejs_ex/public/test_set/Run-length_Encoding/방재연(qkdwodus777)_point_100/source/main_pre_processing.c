//방재연(qkdwodus777)_point_100
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
int flag = 1;
int i ;
int j; 
int sum = 0;
int line = 0;

for(i = 0 ; i < 3 ; i++) {

    sum+=mabangjin[0][i];
}

for(i = 0 ; i < 3 ; i ++) {
    line = 0;
    for( j = 0 ; j < 3 ; j++) {
        line+=mabangjin[i][j];
    }
    if(line != sum) flag = 0;
}
for(i = 0 ; i < 3 ; i ++) {
    line = 0;
    for( j = 0 ; j < 3 ; j++) {
        line+=mabangjin[j][i];
    }
    if(line != sum) flag = 0;
}
line = 0;
for(i = 0, j = 0 ; i < 3 ; i ++ , j++) {
line+=mabangjin[i][j];
    
}
 if(line != sum) flag = 0;
 line = 0;
 for(i = 0 , j = 2; i < 3 ; i ++, j--) {
     line += mabangjin[i][j];
 }
  if(line != sum) flag = 0;
  
if (flag == 1) answer = 'O';
else answer = 'X';
	////////////////////////////////////////
  printf("%c\n" , answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_D1i_A_D1i_B<_D1i_A
D1i_B<_D1s_E_F3_FOR_C_FOR_L2i
t_T2_D1i_D2_L2int_T2_D2_L2int
T2_D2_L2int_T2_D1i_D2_L2int_T
_D1i_D2_D1i_A_D1i_B<_D1i_A_C_
OR_D1i_A_D1i_B<_D1i_A_D1i_A_D
i_B<_A_C_FOR_B!=_D1i_A_L1_C_F
R_D1i_A_D1i_B<_D1i_A_D1i_A_D1
_B<_A_C_FOR_B!=_D1i_A_L1_C_FO
_D1i_A_D1i_A_D1i_A_E_D1i_B<_E
A_C_FOR_B!=_D1i_A_L1_D1i_A_D1
_A_D1i_A_E_D1i_B<_E_A_C_FOR_B
=_D1i_A_L1_D1i_B==_D1c_A_D1c_
_L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
