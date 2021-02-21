//목대희(mok9550)_point_0
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num = 0, encoded_len, count=1, i, j;
    char a;

	scanf("%s", input);

	////////////////////////////////////////
    len = strlen(input);
    
    for(i = 0; i < len; i++) {
        if(input[i] == input[i+1]) {
            count += 1;
            if(i == len - 1) {
                if(count == 1) {
                output[num] = input[i];
                num++;
            }
            else if(count == 2) {
                output[num] = input[i];
                output[num + 1] = input[i];
                num++;
                num++;
            }
            else if(count < 10) {
                output[num] = (char)count;
                output[num + 1] = input[i];
                num++;
                num++;
            }
            else {
                output[num] = (char)(count/10);
                output[num + 1] = (char)(count%10);
                output[num + 2] = input[i];
                num++;
                num++;
                num++;
            }
            }
        }
        else {
            if(count == 1) {
                output[num] = input[i];
                num++;
            }
            else if(count == 2) {
                output[num] = input[i];
                output[num + 1] = input[i];
                num++;
                num++;
            }
            else if(count < 10) {
                output[num] = (char)count;
                output[num + 1] = input[i];
                num++;
                num++;
            }
            else {
                output[num] = (char)(count/10);
                output[num + 1] = (char)(count%10);
                output[num + 2] = input[i];
                num++;
                num++;
                num++;
            }
        }
    }
    encoded_len = strlen(output);

	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D1i_D2_L2int_T2_D2_L
int_T2_D1i_D2_L2int_T2_D2_L2i
t_T2_D2_L2char_T2_D2_D1s_E_F3
E_F3_A_D1i_A_B<_D1i_B+_B==_D1
_A_D1i_B-_B==_D1i_B==_A_C_D1i
B==_A_D1i_B+_A_C_D1i_B<_L2cha
_T2_A_D1i_B+_A_C_L2char_T2_D1
_B/_A_D1i_B+_L2char_T2_D1i_B%
A_D1i_B+_A_C_L1_L1_L1_C_L1_C_
1i_B==_A_C_D1i_B==_A_D1i_B+_A
C_D1i_B<_L2char_T2_A_D1i_B+_A
C_L2char_T2_D1i_B/_A_D1i_B+_L
char_T2_D1i_B%_A_D1i_B+_A_C_L
_L1_L1_C_L1_C_FOR_E_F3_A_D1s_
_F3_D1s_E_F3_D1s_L2double_T2_
/_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
