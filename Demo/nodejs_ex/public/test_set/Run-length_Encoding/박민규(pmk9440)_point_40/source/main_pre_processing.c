//박민규(pmk9440)_point_40
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	int len, num, encoded_len = 0;
    int i, j;
    int count[51] = {0};
    int count_a=1 ,count_s=1;
    int z=0;

	scanf("%s", input);

    len = strlen(input);

    for (i=0 ; i<len ; i++)
    {
        if (input[i]<'A' || input[i]>'Z')
        {
            printf("Input Error\n");
            return 0;
        }
    }

    for (i=0 ; i<len ; i++)
    {
        for (j=i+1 ; j<len ; j++)
        {
            if (input[i] == input[j]) 
            {
                count_s++;
            }
        }
        count_a++;
        if (count_s >= 10) count_a++;
        break;
    }
    printf("%d%c\n", count_s, input[0]);


	printf("%.6lf(%d/%d)\n", (double)len / count_a, len, count_a);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2int_T2_D2_L2int_T2_D2_L2in
_T2_D1i_D2_L2int_T2_D2_L2int_
2_D2_L2int_T2_D1i_D1i_D2_L2in
_T2_D1i_D2_L2int_T2_D1i_D2_L2
nt_T2_D1i_D2_D1s_E_F3_E_F3_A_
1i_A_B<_D1c_B<_D1c_B>_B||_D1s
E_F3_D1i_R_C_L1_C_FOR_D1i_A_B
_D1i_B+_A_B<_B==_C_L1_C_FOR_D
i_B>=_L1_C_FOR_D1s_D1i_E_F3_D
s_L2double_T2_B/_E_F3_D1i_R_C
F1_1_
###############################*/
//$//
