//박혜민(hyeals9)_point_0
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, encoded_len = 0;
    int i=0;
    int num=0;

	scanf("%s", input);

	len=strlen(input);
   
    for(i=1;i<len;i++)
    {
       if(input[i-1]==input[i])
    {
        num++;
    }
        if(input[i-1]!=input[i]&&num>=2)
        {
            output[i-1]=num;
            i++;
            output[i-1]=input[i-1];
        }
        if(input[i-1]!=input[i]&&num==1)
            {
                output[i-1]=input[i-1];
                i++;
                output[i-1]==input[i-1];
            }
        if(input[i-1]!=input[i]&&num==0)
            output[i-1]=input[i-1];
    }
    
    encoded_len=strlen(output);
	
    printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D1i_D2_L2int_T2_D1i_
2_L2int_T2_D1i_D2_D1s_E_F3_E_
3_A_D1i_A_B<_D1i_B-_B==_C_L1_
1i_B-_B!=_D1i_B>=_B&&_D1i_B-_
_D1i_B-_D1i_B-_A_C_L1_D1i_B-_
!=_D1i_B==_B&&_D1i_B-_D1i_B-_
_D1i_B-_D1i_B-_B==_C_L1_D1i_B
_B!=_D1i_B==_B&&_D1i_B-_D1i_B
_A_L1_C_FOR_E_F3_A_D1s_E_F3_D
s_E_F3_D1s_L2double_T2_B/_E_F
_D1i_R_C_F1_1_
###############################*/
//$//
