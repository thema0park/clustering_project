//최민건(markhappy0821)_point_0
#define _CRT_SECURE_NO_WARNINGS
  #define MAX_LEN 51

int main()
{
	char input[MAX_LEN];

	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    int i = 0, s = 0;
    char count1 = '1';
    int count2 = 0;
	scanf("%s", input);

	////////////////////////////////////////
    for (i = 0; i < strlen(input); i++) {
        if(input[i]<'A' || input[i]>'Z') {
            printf("Input Error");
            return 0;
        }
    }
    for (i = 0; i < strlen(input); i++) {
        if (input[i] == input [i+1]) {
            if(count1 = '9') {
                count1 = '0';
                output[s] = '1';
                s++;
            }
            
        }
        else if (input[i] != input[i+1]) {
            output[s] = count1;
            output[s+1] = input[i];
            s++;
        }
    }
	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);
    len = strlen(input);
    encoded_len = strlen(output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_L
int_T2_D1i_D2_L2int_T2_D1i_D2
L2char_T2_D1c_D2_L2int_T2_D1i
D2_D1s_E_F3_D1i_A_E_F3_B<_D1c
B<_D1c_B>_B||_D1s_E_F3_D1i_R_
_L1_C_FOR_D1i_A_E_F3_B<_D1i_B
_B==_D1c_A_D1c_A_D1c_A_C_L1_C
D1i_B+_B!=_A_D1i_B+_A_C_L1_L1
C_FOR_D1s_E_F3_D1s_E_F3_E_F3_
_E_F3_A_D1s_L2double_T2_B/_E_
3_D1i_R_C_F1_1_
###############################*/
//$//
