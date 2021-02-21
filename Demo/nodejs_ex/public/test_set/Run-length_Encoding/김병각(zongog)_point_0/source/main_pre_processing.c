//김병각(zongog)_point_0
#define _CRT_SECURE_NO_WARNINGS
 #define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;//원문자열의 길이, 부호화된 것의 길이
	scanf("%s", input);//입력값

    int k;
    int i=0;
    int count[MAX_LEN];
    for(k=0;k<MAX_LEN-1;k++){
        if(input[k] == input[k+1]){
            output[i] = input[k];
            count[i] = count[i]+1;
        }
        else{
            i++;
            output[i]= input[k];
        }
    }
   
	////////////////////////////////////////
    
	printf("%s\n", input);//입력값
    for(k=0;k<i;k++){
        printf("%d%c ", count[k], output[k]);
    }
    printf("\n");
	printf("%s\n", output);//아웃풋

//	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
    //압축률
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_D
s_E_F3_L2int_T2_D2_L2int_T2_D
i_D2_L2int_T2_D1i_D2_D1i_A_D1
_D1i_B-_B<_D1i_B+_B==_A_D1i_B
_A_C_A_C_L1_C_FOR_D1s_E_F3_D1
_A_B<_D1s_E_F3_C_FOR_D1s_E_F3
D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
