//박도준(bof0353)_point_0
#define _CRT_SECURE_NO_WARNINGS
  #define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;
    int i;
    int count =0;
	scanf("%s", input);
        len = strlen(input);

 for(i=0; i<len; i++){
        if(input[i]==input[i+1]){
        count +=1;
    
        }

    }
    num = &input[0];
   
    output[count] = count,num ;
      
    
 
         encoded_len = strlen(output);   



	printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_L
int_T2_D2_L2int_T2_D1i_D2_D1s
E_F3_E_F3_A_D1i_A_B<_D1i_B+_B
=_D1i_A_C_L1_C_FOR_D1i_A_A_E_
_F3_A_D1s_E_F3_D1s_E_F3_D1s_L
double_T2_B/_E_F3_D1i_R_C_F1_
_
###############################*/
//$//
