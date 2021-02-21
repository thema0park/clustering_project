//구영석(dudtjr9)_point_0
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    int i,j , count=0, flag=1;

	scanf("%s", input);

	////////////////////////////////////////
    len = strlen(input);
    for(i=0;i<len;i++){
        for(j=1;j<len;j++){
            if(input[i]==input[j]) {
                count++;
            }
            else break;
        }
        if(count>1){
            count +=1;
            if(count<=9){
                output[i]='0'+count;
                output[i+1]=input[i];
            }
            else if(count>9){
                output[i]= (count/10) + '0';
                output[i+1]= (count%10) +'0';
                output[i+2]=input[i];
            }
        }
        else if(count==1) {
            output[i]=input[i];
            output[i+1]=input[i];
        }
        else if(count==0){
            output[i]=input[i];
        }
        i=count+1;
        j=count+2;
    }
    encoded_len = strlen(output);




	////////////////////////////////////////

	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_L
int_T2_D2_L2int_T2_D2_L2int_T
_D1i_D2_L2int_T2_D1i_D2_D1s_E
F3_E_F3_A_D1i_A_B<_D1i_A_B<_B
=_C_L1_C_FOR_D1i_B>_D1i_A_D1i
B<=_D1c_B+_A_D1i_B+_A_C_D1i_B
_D1i_B/_D1c_B+_A_D1i_B+_D1i_B
_D1c_B+_A_D1i_B+_A_C_L1_L1_C_
1i_B==_A_D1i_B+_A_C_D1i_B==_A
C_L1_L1_L1_D1i_B+_A_D1i_B+_A_
_FOR_E_F3_A_D1s_E_F3_D1s_E_F3
D1s_L2double_T2_B/_E_F3_D1i_R
C_F1_1_
###############################*/
//$//
