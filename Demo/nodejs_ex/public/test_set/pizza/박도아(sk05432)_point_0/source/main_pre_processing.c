//박도아(sk05432)_point_0
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50
int gcd(int a, int b)
{
 
    int d;
    if(a>b)
    {
        if(b>a)
        {
            d=a;
            a=b;
            b=d;
            
        }
           int c=a%b;
    if(c==0) return c;
    a=b;
    b=c;
    return gcd(a,b);
    }
}
int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
    int x;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

      
    for(i=0; i<(piece_num+1)/2-1; i++)
    {
        
        x= gcd(input_data[i],input_data[(piece_num+1)/2+i]);
        printf("%d",x);

        if(x==1)
        {
            x= gcd(input_data[i],input_data[(piece_num+1)/2+i-1]);

            output=input_data[i];

        }

    }

	////////////////////////////////////////



	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_D2_B>_B>_
_A_A_C_L1_L2int_T2_B%_D2_D1i_
==_R_L1_A_A_E_F3_R_C_L1_C_F1_
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_L2int_T2_D2_L2int
T2_D2_L2int_T2_D2_D1s_E_F3_D1
_A_B<_D1s_E_F3_FOR_D1i_A_D1i_
+_D1i_B/_D1i_B-_B<_D1i_B+_D1i
B/_B+_E_F3_A_D1s_E_F3_D1i_B==
D1i_B+_D1i_B/_B+_D1i_B-_E_F3_
_A_C_L1_C_FOR_D1s_E_F3_D1i_R_
_F1_1_
###############################*/
//$//
