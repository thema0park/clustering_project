//송인범(dlsqja343)_point_0
#define _CRT_SECURE_NO_WARNINGS
 
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;

	scanf("%s", input);

	////////////////////////////////////////
    int i,a=0,sum=0;
    for(i=0;i<strlen(input);i++)
    {
        if(input[i]-input[i+1]==0)
        {
            sum++;
        }
         if(input[i]-input[i+1]!=0)
        {
            sum=0;
        }
        
    }


	////////////////////////////////////////
    len=strlen(input);
    encoded_len=strlen(output);
	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_D
s_E_F3_L2int_T2_D2_L2int_T2_D
i_D2_L2int_T2_D1i_D2_D1i_A_E_
3_B<_D1i_B+_B-_D1i_B==_C_L1_D
i_B+_B-_D1i_B!=_D1i_A_C_L1_C_
OR_E_F3_A_E_F3_A_D1s_E_F3_D1s
E_F3_D1s_L2double_T2_B/_E_F3_
1i_R_C_F1_1_
###############################*/
//$//
