//정재윤(jyjung9910)_point_40
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

long long int gcd(long long int a,long long int b)
{
    if(a<b)
    {
        long long int temp;
        temp = a;
        a=b;
        b=temp;
    }
    if(a%b==0)
    {
        return b;
    }
    long long int c;
    c=a%b;
    return gcd(b,c);


}

int main()
{
	int piece_num;
	long long int input_data[PIECE_NUM_MAX];
    int checking[PIECE_NUM_MAX];
	int i;
    int j;
	long long int output;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
    {
		scanf("%lld", &input_data[i]);
        checking[i]=0;
    }

	////////////////////////////////////////
    for(i=0;i<piece_num-1;++i)
    {
        for(j=i+1;j<piece_num;++j)
        {
            if(gcd(input_data[i],input_data[j])>1)
            {
                checking[i]++;
                checking[j]++;
            }
        }
    }
    for(i=0;i<piece_num;++i)
    {
        if(checking[i]==0)
        {
            output=input_data[i];
        }
    }

	////////////////////////////////////////

	printf("%d\n", output);
	return 0;
}/*########code signature#########
2long_T2_D2_L2long_T2_D2_P2_L
long_T2_F2_D2_B<_L2long_T2_D2
A_A_A_C_L1_B%_D1i_B==_R_C_L1_
2long_T2_D2_B%_A_E_F3_R_C_F1_
2int_T2_F2_D2_L2int_T2_D2_L2l
ng_T2_D1i_D2_L2int_T2_D1i_D2_
2int_T2_D2_L2int_T2_D2_L2long
T2_D2_D1s_E_F3_D1i_A_B<_D1s_E
F3_D1i_A_C_FOR_D1i_A_D1i_B-_B
_D1i_B+_A_B<_E_F3_D1i_B>_C_L1
C_FOR_C_FOR_D1i_A_B<_D1i_B==_
_C_L1_C_FOR_D1s_E_F3_D1i_R_C_
1_1_
###############################*/
//$//
