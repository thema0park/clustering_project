//강동효(intenr10)_point_0
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    int i = 0;
    int count =0;
	scanf("%s", input);
	printf("%s\n", input);
    while(1)
    {
        for(i =0; i <MAX_LEN; i++)
        {
        while(strcmp(input[i], input[i+1]) == 0)
        {
          count++;
          printf("%d", count);
          break;
        }       
        }
    }
	//printf("%s\n", output);

	//printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_L
int_T2_D1i_D2_L2int_T2_D1i_D2
D1s_E_F3_D1s_E_F3_D1i_D1i_A_D
i_B<_D1i_B+_E_F3_D1i_B==_D1s_
_F3_C_W_C_FOR_C_W_D1i_R_C_F1_
_
###############################*/
//$//
