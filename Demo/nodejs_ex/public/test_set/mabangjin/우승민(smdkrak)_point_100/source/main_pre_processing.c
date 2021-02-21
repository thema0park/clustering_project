//우승민(smdkrak)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int j;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

    int addr1=0,addr2=0,addr3=0;
    int addc1=0,addc2=0,addc3=0;
    int addx1=0,addx2=0;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////

  
        addr1 = mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];
        addr2 = mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2];
        addr3 = mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2];
        addc1 = mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0];
        addc2 = mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1];
        addc3 = mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2];

    addx1 = mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    addx2 = mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];
	////////////////////////////////////////
    if(addr1==addr2 && addr2==addr3 && addr1==addr3)
    {
        if(addc1==addc2 && addc2==addc3 && addc1==addc3 && addr1 == addc1 && addr1 == addc2 && addr1 == addc3)
        {
            if(addx1 == addx2 && addx1 == addc1 && addx2 == addc1)
            answer = 'O';
            else
            answer = 'X';
        }
        else
        answer = 'X';
    }
    else
    answer = 'X';

	printf("%c\n",answer);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
1i_D1i_D2_L2char_T2_D2_L2int_
2_D1i_D2_L2int_T2_D1i_D2_L2in
_T2_D1i_D2_L2int_T2_D1i_D2_L2
nt_T2_D1i_D2_L2int_T2_D1i_D2_
2int_T2_D1i_D2_L2int_T2_D1i_D
_D1i_A_D1i_B<_D1i_A_D1i_B<_D1
_E_F3_FOR_C_FOR_D1i_D1i_D1i_D
i_B+_D1i_D1i_B+_A_D1i_D1i_D1i
D1i_B+_D1i_D1i_B+_A_D1i_D1i_D
i_D1i_B+_D1i_D1i_B+_A_D1i_D1i
D1i_D1i_B+_D1i_D1i_B+_A_D1i_D
i_D1i_D1i_B+_D1i_D1i_B+_A_D1i
D1i_D1i_D1i_B+_D1i_D1i_B+_A_D
i_D1i_D1i_D1i_B+_D1i_D1i_B+_A
D1i_D1i_D1i_D1i_B+_D1i_D1i_B+
A_B==_B==_B&&_B==_B&&_B==_B==
B&&_B==_B&&_B==_B&&_B==_B&&_B
=_B&&_B==_B==_B&&_B==_B&&_D1c
A_D1c_A_L1_C_D1c_A_L1_C_D1c_A
L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
