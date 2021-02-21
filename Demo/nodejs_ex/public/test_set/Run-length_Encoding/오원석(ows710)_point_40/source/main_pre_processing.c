//오원석(ows710)_point_40
#define _CRT_SECURE_NO_WARNINGS
 #define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0,i,ans;

	scanf("%s", input);
    for(i=0;i<51;i++)
    {
        if(('A'>input[i])&&(input[i]>'Z'))
        {
            ans=0;
        }
    }
    if(ans==0)
    {
        printf("Input Error\n");
    }
	////////////////////////////////////////
	////////////////////////////////////////
    if(('A'<=input[i])&&(input[i]<='Z'))
    {
        printf("%s\n", input);
        printf("%s\n", output);

        printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
    }
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_L
int_T2_D2_L2int_T2_D2_D1s_E_F
_D1i_A_D1i_B<_D1c_B>_D1c_B>_B
&_D1i_A_C_L1_C_FOR_D1i_B==_D1
_E_F3_C_L1_D1c_B<=_D1c_B<=_B&
_D1s_E_F3_D1s_E_F3_D1s_L2doub
e_T2_B/_E_F3_C_L1_D1i_R_C_F1_
_
###############################*/
//$//
