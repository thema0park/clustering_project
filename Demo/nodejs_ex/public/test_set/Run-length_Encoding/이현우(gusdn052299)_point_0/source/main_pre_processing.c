//이현우(gusdn052299)_point_0
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;

	scanf("%s", input);

	////////////////////////////////////////
    len=strlen(input); //'0'=48
    char temp;
    int k, l, count;
    for(k=0; k<len; k++)
    {
        if(input[k]<65 || input[k]>90)
        printf("Input Error");
        return 0;
    }
    for(k=0; k<len; k+=l)
    {
        temp=input[k];
        count=1;
        for(l=1; temp==input[k+l]; l++)
        {
            count++;
        }
    }

	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_D
s_E_F3_E_F3_A_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1i_A_B<_D1i_B<_D1i_B>_B||
D1s_E_F3_L1_D1i_R_C_FOR_D1i_A
B<_A_A_D1i_A_D1i_A_B+_B==_C_F
R_C_FOR_D1s_E_F3_D1s_E_F3_D1s
L2double_T2_B/_E_F3_D1i_R_C_F
_1_
###############################*/
//$//
