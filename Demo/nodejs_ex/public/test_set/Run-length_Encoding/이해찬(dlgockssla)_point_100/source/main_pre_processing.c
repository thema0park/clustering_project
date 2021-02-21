//이해찬(dlgockssla)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN]={};
	char output[MAX_LEN]={};
	int len, num, encoded_len = 0;

	scanf("%s", input);
    len = strlen(input);
    char tmp = '0';
	////////////////////////////////////////
    int count = 1;
    int i=0,j=0;
    for(i=0; i<len; i++){
        if(input[i] > 'Z' || input[i] < 'A'){
            printf("Input Error\n");
            return 0;
        }
        tmp = input[i];
        
        if(input[i] == input[i+1]){
            tmp = input[i];
            count++;
        }
        else if(input[i] != input[i+1]){
            if(count >= 10){
                output[j] = count/10 + '0';
                j++;
                output[j] = count % 10 + '0';
                j++;
                output[j] = tmp;
                j++;
            }
            else if(count == 1){
                output[j] = tmp;
                j++;
            }
            else if(count == 2){
                output[j] = tmp;
                j++;
                output[j] = tmp;
                j++;
            }
            else {
                output[j] = count + '0';
                j++;
                output[j] = tmp;
                j++;
            }
            count = 1;
        }
        output[j] = '\0';
    }


	////////////////////////////////////////
    encoded_len = strlen(output);
	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / (double)encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_D
s_E_F3_E_F3_A_L2char_T2_D1c_D
_L2int_T2_D1i_D2_L2int_T2_D1i
D2_L2int_T2_D1i_D2_D1i_A_B<_D
c_B>_D1c_B<_B||_D1s_E_F3_D1i_
_C_L1_A_D1i_B+_B==_A_C_D1i_B+
B!=_D1i_B>=_D1i_B/_D1c_B+_A_D
i_B%_D1c_B+_A_A_C_D1i_B==_A_C
D1i_B==_A_A_C_D1c_B+_A_A_C_L1
L1_L1_D1i_A_C_L1_L1_D1c_A_C_F
R_E_F3_A_D1s_E_F3_D1s_E_F3_D1
_L2double_T2_L2double_T2_B/_E
F3_D1i_R_C_F1_1_
###############################*/
//$//
