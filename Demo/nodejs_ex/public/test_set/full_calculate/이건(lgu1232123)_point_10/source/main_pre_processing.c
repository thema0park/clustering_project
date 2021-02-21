//이건(lgu1232123)_point_10
#define _CRT_SECURE_NO_WARNINGS
   
#define BYTE_SIZE 8
#define IN_NUM 2


    int main()
{
    srand(time(NULL));

	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int a=2,b;
    long int w,r;
    b = rand()%2 + 1;

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////    

	////////////////////////////////////////
    if(b==2)
	printf("%s\n",byte[1] );
    else if(b==1)
	printf("%s\n",byte[0] );

	//printf("%s\n",out[BYTE_SIZE+1] );

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_E_F3_E_F3_L2cha
_T2_D1i_D1i_B+_D1i_D2_L2char_
2_D1i_D1i_B+_D2_L2int_T2_D1i_
2_L2int_T2_D2_L2long_T2_D2_L2
ong_T2_D2_F3_D1i_B%_D1i_B+_A_
1s_D1i_D1i_E_F3_D1i_B==_D1s_D
i_E_F3_D1i_B==_D1s_D1i_E_F3_L
_L1_D1i_R_C_F1_1_
###############################*/
//$//
