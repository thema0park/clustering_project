//이진호(es4413)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int temp1=0,temp2=0,temp3=0,temp4=0,temp5=0,temp6=0,temp7=0,temp8=0;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
			
    temp1 = mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2];
    
	temp2 = mabangjin[1][0] + mabangjin[1][1] + mabangjin[1][2];

	temp3 = mabangjin[2][0] + mabangjin[2][1] + mabangjin[2][2];

	temp4 = mabangjin[0][0] + mabangjin[1][0] + mabangjin[2][0];

	temp5 = mabangjin[0][1] + mabangjin[1][1] + mabangjin[2][1];

	temp6 = mabangjin[0][2] + mabangjin[1][2] + mabangjin[2][2]; 

    temp7 = mabangjin[1][1] + mabangjin[0][0] + mabangjin[2][2];

    temp8 = mabangjin[1][1] + mabangjin[0][2] + mabangjin[2][0];
  
    if(temp1 == temp2 && temp1 == temp3 &&temp1 == temp4 &&temp1 == temp5 &&temp1 == temp6 &&temp1 == temp7 &&temp1 == temp8) answer = 'O';
    else answer = 'X';
    
   /* printf("%d\n",temp1);
    printf("%d\n",temp2);
    printf("%d\n",temp3);
    printf("%d\n",temp4);
    printf("%d\n",temp5);
    printf("%d\n",temp6);
    printf("%d\n",temp7);
    printf("%d\n",temp8);*/
    
	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D1i_D2_L
char_T2_D2_L2int_T2_D1i_D2_L2
nt_T2_D1i_D2_L2int_T2_D1i_D2_
2int_T2_D1i_D2_L2int_T2_D1i_D
_L2int_T2_D1i_D2_L2int_T2_D1i
D2_L2int_T2_D1i_D2_D1i_A_D1i_
<_D1i_A_D1i_B<_D1s_E_F3_FOR_C
FOR_D1i_D1i_D1i_D1i_B+_D1i_D1
_B+_A_D1i_D1i_D1i_D1i_B+_D1i_
1i_B+_A_D1i_D1i_D1i_D1i_B+_D1
_D1i_B+_A_D1i_D1i_D1i_D1i_B+_
1i_D1i_B+_A_D1i_D1i_D1i_D1i_B
_D1i_D1i_B+_A_D1i_D1i_D1i_D1i
B+_D1i_D1i_B+_A_D1i_D1i_D1i_D
i_B+_D1i_D1i_B+_A_D1i_D1i_D1i
D1i_B+_D1i_D1i_B+_A_B==_B==_B
&_B==_B&&_B==_B&&_B==_B&&_B==
B&&_B==_B&&_D1c_A_D1c_A_L1_D1
_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
