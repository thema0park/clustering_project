//홍소연(sodus1102)_point_0
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;

	scanf("%s", input);

	////////////////////////////////////////
    int i=0, j;
    len = strlen(input);
    encoded_len = 0;
    while(input[i]!=NULL)
    {
        num=1;
        if(input[i]!=input[i+1])
        {
            output[encoded_len]=input[i];
            encoded_len++;
            i++;
        }
        else
        {
            for(j=0;j<len-i;j++)
            {
                if(input[j]==input[j+1])
                {
                    num++;
                    i++;
                }
                else{
                    i++;
                    break;
                }
            }
            output[encoded_len] = num;
            output[encoded_len+1] = input[i];
            encoded_len += 2;
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
s_E_F3_L2int_T2_D1i_D2_L2int_
2_D2_E_F3_A_D1i_A_B!=_D1i_A_D
i_B+_B!=_A_C_D1i_A_B-_B<_D1i_
+_B==_C_C_L1_C_FOR_A_D1i_B+_A
D1i_A_C_L1_C_W_D1s_E_F3_D1s_E
F3_D1s_L2double_T2_B/_E_F3_D1
_R_C_F1_1_
###############################*/
//$//
