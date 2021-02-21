//민병창(als6068)_point_0
#define _CRT_SECURE_NO_WARNINGS
 
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN] = {0};
	char output[MAX_LEN] = {0};
	int len, num, encoded_len = 0;
    int count=0,cnt =1;
    int i,j,k;
	scanf("%s", input);
  
    
    for(i=0; i<MAX_LEN;i++){
        if(input[i] == '\0') break;
        else len ++;
        
        if(input[i] == input[i+1]){
            cnt ++;
        }
        else{
            cnt++;
            if(cnt>=10){
                output[count] = cnt/10;
                 cnt = cnt % 10;
                 count++;
                 encoded_len ++;
            }
            output[count] = cnt;
            encoded_len ++;
            ++count;
            output[count] = input[i];
            count++;
            encoded_len ++;
            cnt = 1;
        }
    }
    printf("%s\n",input);
    printf("%s\n",output);
    printf("%lf(%d/%d)\n",len/encoded_len,len,encoded_len);
    return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_D2_L2char_T2_D1i_D1i_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
1i_D2_L2int_T2_D1i_D2_L2int_T
_D1i_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_D1s_E_F3_D1i_A_
1i_B<_D1c_B==_L1_D1i_B+_B==_C
D1i_B>=_D1i_B/_A_D1i_B%_A_C_L
_A_A_D1i_A_C_L1_C_FOR_D1s_E_F
_D1s_E_F3_D1s_B/_E_F3_D1i_R_C
F1_1_
###############################*/
//$//
