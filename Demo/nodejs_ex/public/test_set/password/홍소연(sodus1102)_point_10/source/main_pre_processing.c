//홍소연(sodus1102)_point_10
#define _CRT_SECURE_NO_WARNINGS
  
#define TEXT_MAX 100

int main()
{
	int fibo_n;
	char text[TEXT_MAX];

	scanf("%d", &fibo_n);
	scanf("%s", text);

	////////////////////////////////////////
    int fibo[TEXT_MAX];
    int i;
    int len = strlen(text);
    fibo[0] = 1;
    fibo[1] = 1;
    for(i=0;i<fibo_n;i++)
    {
        fibo[i] = fibo[i-1]+fibo[i-2];
    }
    for(i=0;i<len;i++)
    {
        if(text[i]+fibo[fibo_n]>'Z')
        {
            text[i]= text[i]-'A'+fibo[fibo_n];
        }
        else text[i] += fibo[fibo_n];
    }


	////////////////////////////////////////

	printf("%s\n", text);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2c
ar_T2_D1i_D2_D1s_E_F3_D1s_E_F
_L2int_T2_D1i_D2_L2int_T2_D2_
2int_T2_E_F3_D2_D1i_D1i_A_D1i
D1i_A_D1i_A_B<_D1i_B-_D1i_B-_
+_A_C_FOR_D1i_A_B<_B+_D1c_B>_
1c_B-_B+_A_C_A_L1_C_FOR_D1s_E
F3_D1i_R_C_F1_1_
###############################*/
//$//
