//심지수(rlj1202)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;

	scanf("%s", input);

	////////////////////////////////////////

    len = strlen(input);

    int i;
    char last = input[0];
    int length = 1;
    for (i = 1; i <= len; i++) {
        if (last < 'A' || 'Z' < last) {
            printf("Input Error\n");
            return 0;
        }

        if (input[i] == last) {
            length++;
        } else {
            if (length > 2) {
                int digits[51];
                int digit = 0;
                while (length > 0) {
                    digits[digit++] = length % 10;
                    length /= 10;
                }
                while (digit--) {
                    output[encoded_len++] = digits[digit] + '0';
                }

                output[encoded_len++] = last;
            } else {
                while (length--) output[encoded_len++] = last;
            }

            last = input[i];
            length = 1;
        }
    }
    output[encoded_len] = 0;

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
s_E_F3_E_F3_A_L2int_T2_D2_L2c
ar_T2_D1i_D2_L2int_T2_D1i_D2_
1i_A_B<=_D1c_B<_D1c_B<_B||_D1
_E_F3_D1i_R_C_L1_B==_C_D1i_B>
L2int_T2_D1i_D2_L2int_T2_D1i_
2_D1i_B>_D1i_B%_A_D1i_A_C_W_D
c_B+_A_C_W_A_C_A_W_C_L1_A_D1i
A_C_L1_C_FOR_D1i_A_D1s_E_F3_D
s_E_F3_D1s_L2double_T2_B/_E_F
_D1i_R_C_F1_1_
###############################*/
//$//
