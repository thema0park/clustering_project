//이기현(rlgus0210)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];//입력
	char output[MAX_LEN];//출력
	int len, num=0, encoded_len=0,count= 0;
    char tok;
    int k;
	scanf("%s", input);

	////////////////////////////////////////
    len = strlen(input);

    tok = input[0];
    
    for(k=0; k<len; k++){
        if(input[k]>'Z'||input[k]<'A'){
            printf("Input Error\n");
            return 0;
        }
    }

	////////////////////////////////////////

	printf("%s\n", input);
	//printf("%s\n", output);
    while(1){
            num++;
            count++;
            if(input[num] != tok){
                
                if((count)>=3){
                    printf("%d",count);
                    printf("%c",tok);
                    if(count>=10)
                        encoded_len = encoded_len + 3;
                    else
                        encoded_len = encoded_len + 2;
                }
                else if(count == 2){
                    printf("%c",tok);
                    printf("%c",tok);
                    encoded_len = encoded_len +2;
                }
                else{
                    printf("%c",tok);
                    encoded_len++;
                }
                tok = input[num];
                
                count = 0;
                if(input[num]==NULL){
                    printf("\n");
                    break;
                }
                
            }
        }
    
	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);// 압축률 , 원래길이, 압축되고나서 길이
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D1i_D2_L2int_T2_D1i_
2_L2int_T2_D1i_D2_L2char_T2_D
_L2int_T2_D2_D1s_E_F3_E_F3_A_
1i_A_D1i_A_B<_D1c_B>_D1c_B<_B
|_D1s_E_F3_D1i_R_C_L1_C_FOR_D
s_E_F3_D1i_B!=_D1i_B>=_D1s_E_
3_D1s_E_F3_D1i_B>=_D1i_B+_A_D
i_B+_A_L1_C_D1i_B==_D1s_E_F3_
1s_E_F3_D1i_B+_A_C_D1s_E_F3_C
L1_L1_A_D1i_A_B==_D1s_E_F3_C_
1_C_L1_C_W_D1s_L2double_T2_B/
E_F3_D1i_R_C_F1_1_
###############################*/
//$//
