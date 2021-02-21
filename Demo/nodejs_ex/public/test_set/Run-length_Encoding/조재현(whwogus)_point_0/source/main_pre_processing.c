//조재현(whwogus)_point_0
#define _CRT_SECURE_NO_WARNINGS
  #define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0; // 
    int i;
    int count = 1;
	scanf("%s", input);

	////////////////////////////////////////

    for (i=0;i<MAX_LEN;i++)
    {
        if (input[i] == input[i+1])
        { 
            count +=1; 
            if (input[i+1] == input[i+2]){
                count +=1;
                if (input[i+1] == input[i+2]){
                count +=1;
                if (input[i+1] == input[i+2]){
                count +=1;
                if (input[i+1] == input[i+2]){
                count +=1;
                if (input[i+1] == input[i+2]){
                count +=1;
            }
            }
            }
                }
            }
        }
        

    }



	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len); // 압축률, 원래길이, 압축길이

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_L
int_T2_D2_L2int_T2_D1i_D2_D1s
E_F3_D1i_A_D1i_B<_D1i_B+_B==_
1i_A_D1i_B+_D1i_B+_B==_D1i_A_
1i_B+_D1i_B+_B==_D1i_A_D1i_B+
D1i_B+_B==_D1i_A_D1i_B+_D1i_B
_B==_D1i_A_D1i_B+_D1i_B+_B==_
1i_A_C_L1_C_L1_C_L1_C_L1_C_L1
C_L1_C_FOR_D1s_E_F3_D1s_E_F3_
1s_L2double_T2_B/_E_F3_D1i_R_
_F1_1_
###############################*/
//$//
