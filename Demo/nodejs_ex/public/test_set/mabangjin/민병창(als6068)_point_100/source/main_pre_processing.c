//민병창(als6068)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k,l,i;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE]={0};
    int sum=0, cnt=0;
    char result = 0;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    for(i=0; i<3; i++){
        sum += mabangjin[0][i];
    }
    if(sum ==(mabangjin[0][1] + mabangjin[0][2] + mabangjin[0][0])) cnt++;
    if(sum ==(mabangjin[1][1] + mabangjin[1][2] + mabangjin[1][0])) cnt++;
    if(sum ==(mabangjin[2][1] + mabangjin[2][2] + mabangjin[2][0])) cnt++;
    if(sum ==(mabangjin[1][0] + mabangjin[2][0] + mabangjin[0][0])) cnt++;
    if(sum ==(mabangjin[2][1] + mabangjin[1][1] + mabangjin[0][1])) cnt++;
    if(sum ==(mabangjin[2][2] + mabangjin[1][2] + mabangjin[0][2])) cnt++;
    if(sum ==(mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2])) cnt++;
    if(sum ==(mabangjin[0][2] + mabangjin[1][1] + mabangjin[2][0])) cnt++;
  
  
    if(cnt ==8)
    {
        result = 'O';
    }
    else{
        result = 'X';
    }
    printf("%c\n",result);
    return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
1i_D1i_D1i_D2_L2int_T2_D1i_D2
L2int_T2_D1i_D2_L2char_T2_D1i
D2_D1i_A_D1i_B<_D1i_A_D1i_B<_
1s_E_F3_FOR_C_FOR_D1i_A_D1i_B
_D1i_A_C_FOR_D1i_D1i_D1i_D1i_
+_D1i_D1i_B+_B==_L1_D1i_D1i_D
i_D1i_B+_D1i_D1i_B+_B==_L1_D1
_D1i_D1i_D1i_B+_D1i_D1i_B+_B=
_L1_D1i_D1i_D1i_D1i_B+_D1i_D1
_B+_B==_L1_D1i_D1i_D1i_D1i_B+
D1i_D1i_B+_B==_L1_D1i_D1i_D1i
D1i_B+_D1i_D1i_B+_B==_L1_D1i_
1i_D1i_D1i_B+_D1i_D1i_B+_B==_
1_D1i_D1i_D1i_D1i_B+_D1i_D1i_
+_B==_L1_D1i_B==_D1c_A_C_D1c_
_C_L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
