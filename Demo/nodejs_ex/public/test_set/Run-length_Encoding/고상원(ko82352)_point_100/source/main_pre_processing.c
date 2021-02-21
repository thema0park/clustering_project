//고상원(ko82352)_point_100
#define _CRT_SECURE_NO_WARNINGS
  #define MAX_LEN 51
int main()
{
	char input[MAX_LEN]={0};
	char output[MAX_LEN]={0};
	int len, num=0, encoded_len = 0;
    int i;
    char check=0;
	scanf("%s", input);

	///////////////////////////////////////////////
    len=strlen(input);
    for(i=0;i<len;i++){
        if(input[i]<'A' || input[i]>'Z'){
            printf("Input Error\n");
            return 0;
        }
        if(input[i]==input[i+1])
            num++;
        else{
            num++;
            if(num==1)
            output[encoded_len++]=input[i];
            else if(num==2){
                output[encoded_len++]=input[i];
                output[encoded_len++]=input[i];
            }

            else if(num>=3 && num<10){
                output[encoded_len++]=num+'0';
                output[encoded_len++]=input[i];
            }
            else if(num>=10 && num<100){
                output[encoded_len++]=(num/10)+'0';
                output[encoded_len++]=(num%10)+'0';
                output[encoded_len++]=input[i];
            }
            num=0;
        }
    }



    ///////////////////////////////////////////////
	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_D2_L2char_T2_D1i_D1i_D2_L2i
t_T2_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D2_L2int_T2_D2_L2char_
2_D1i_D2_D1s_E_F3_E_F3_A_D1i_
_B<_D1c_B<_D1c_B>_B||_D1s_E_F
_D1i_R_C_L1_D1i_B+_B==_D1i_B=
_A_D1i_B==_A_A_C_D1i_B>=_D1i_
<_B&&_D1c_B+_A_A_C_D1i_B>=_D1
_B<_B&&_D1i_B/_D1c_B+_A_D1i_B
_D1c_B+_A_A_C_L1_L1_L1_L1_D1i
A_C_L1_C_FOR_D1s_E_F3_D1s_E_F
_D1s_L2double_T2_B/_E_F3_D1i_
_C_F1_1_
###############################*/
//$//
