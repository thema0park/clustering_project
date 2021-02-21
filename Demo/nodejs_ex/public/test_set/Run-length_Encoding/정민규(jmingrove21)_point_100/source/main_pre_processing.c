//정민규(jmingrove21)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;

	scanf("%s", input);

	////////////////////////////////////////
    int i,j=0;
    
    for(i=0;i<MAX_LEN;i++){
        if(input[i]=='\0'){
            len=i;
            break;
        }
    }
    for(i=0;i<len;i++){
        if(input[i]<65||input[i]>90)
        {
            printf("Input Error\n");
            return 0;
        }
    }
    int count=1;
    int point=0;
    for(i=0;i<len;i++){
        if(input[i+1]!='\0'){
            if(input[i]==input[i+1]){
                count++;
            }
            else{
                if(count==1){
                    output[point++]=input[i];
                    count=1;

                }else if(count==2){
                    output[point++]=input[i];
                    output[point++]=input[i];
                    count=1;

                }else{
                  if(count>=10){
                    output[point++]=count/10+48;
                    output[point++]=count%10+48;
                    output[point++]=input[i];
                    count=1;
                  }else{
                    output[point++]=count+48;
                    output[point++]=input[i];
                    count=1;
                  }
                }
                
            }
        }else{
            if(count==1){
                output[point++]=input[i];

            }else if(count==2){
                output[point++]=input[i];
                output[point++]=input[i];
            }else{
                if(count>=10){
                    output[point++]=count/10+48;
                    output[point++]=count%10+48;
                    output[point++]=input[i];
                }else{
                    output[point++]=count+48;
                    output[point++]=input[i];
                  }
            }
            output[point]='\0';

        }

    }



    for(i=0;i<MAX_LEN;i++){
        if(output[i]=='\0'){
            encoded_len=i;
            break;
        }
    }
    
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
s_E_F3_L2int_T2_D2_L2int_T2_D
i_D2_D1i_A_D1i_B<_D1c_B==_A_C
L1_C_FOR_D1i_A_B<_D1i_B<_D1i_
>_B||_D1s_E_F3_D1i_R_C_L1_C_F
R_L2int_T2_D1i_D2_L2int_T2_D1
_D2_D1i_A_B<_D1i_B+_D1c_B!=_D
i_B+_B==_C_D1i_B==_A_D1i_A_C_
1i_B==_A_A_D1i_A_C_D1i_B>=_D1
_B/_D1i_B+_A_D1i_B%_D1i_B+_A_
_D1i_A_C_D1i_B+_A_A_D1i_A_C_L
_C_L1_L1_C_L1_C_D1i_B==_A_C_D
i_B==_A_A_C_D1i_B>=_D1i_B/_D1
_B+_A_D1i_B%_D1i_B+_A_A_C_D1i
B+_A_A_C_L1_C_L1_L1_D1c_A_C_L
_C_FOR_D1i_A_D1i_B<_D1c_B==_A
C_L1_C_FOR_D1s_E_F3_D1s_E_F3_
1s_L2double_T2_B/_E_F3_D1i_R_
_F1_1_
###############################*/
//$//
