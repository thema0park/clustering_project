//오미정(ael854)_point_0
#define _CRT_SECURE_NO_WARNINGS
 
#define SIZE 10


int main()
{
    int i, j;
    int n=0;
    int m=0;
	int byte[2][9];
	int out[SIZE+1];

	scanf("%s %s", byte[0], byte[1]);
 for(j=8; j>0; j--)
    {
        if(byte[0][j] + byte[1][j] == 0)
           {
               out[j] == 0;
            }
        if(byte[0][j] + byte[1][j] == 1)
        {
            out[j] == 1;
        }
        if(byte[0][j] + byte[1][j] == 2)
        {
            out[j] == 0;
            byte[0][j-1]++;
        }
        if(byte[0][j] + byte[1][j] == 3)
        {
            out[j] == 1;
            byte[0][j-1]++;
        }
    }
   printf("%s", out);

	
  


	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D2_L2int_T2_D1i_D1i_D2
L2int_T2_D1i_D1i_B+_D2_D1s_D1
_D1i_E_F3_D1i_A_D1i_B>_D1i_D1
_B+_D1i_B==_D1i_B==_C_L1_D1i_
1i_B+_D1i_B==_D1i_B==_C_L1_D1
_D1i_B+_D1i_B==_D1i_B==_D1i_D
i_B-_C_L1_D1i_D1i_B+_D1i_B==_
1i_B==_D1i_D1i_B-_C_L1_C_FOR_
1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
