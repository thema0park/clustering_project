//오우진(allegro7)_point_100
#define _CRT_SECURE_NO_WARNINGS
  #define MAX_LEN 51
int rep_edge(char * cur){
    int i =0 ;
    while(cur[i] == cur[i+1]){
        i++;
    }
    //printf("%d\n",i);
    return i;
}
int isAlpha(char *str){
    int c= 0, len = strlen(str);
    for(;c<len;c++){
        if(str[c] < 'A' || str[c] > 'Z')
            return 0;
    }
    return 1;
}
int main()
{
	char input[MAX_LEN] ={0,};
	char output[MAX_LEN] = {0,};
	int len, num, encoded_len = 0;
    int count = 0;
    int i,offset;
	scanf("%50s", input);
    len = strlen(input);
    if(!isAlpha(input)){
        return printf("Input Error\n");
    }
	////////////////////////////////////////
    for(i = 0; i < len; ){
        offset = rep_edge(&input[i]);
        if(offset == 0){
            
            output[count++] = input[i];
            i++;
            continue;
        }
        else if(offset == 1){
            
            output[count] = input[i];
            output[count+1] = input[i];
            i = i + 2;
            count += 2;
            continue;
        }
        else{
            sprintf(&output[count],"%d", offset+1);
            num = strlen(&output[count]);
            output[count+num] = input[i];
            count += num+1;
            i += offset+1;
            continue;
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
2char_T2_P1_D2_P2_L2int_T2_F2
D2_L2int_T2_D1i_D2_D1i_B+_B==
C_W_R_C_F1_L2char_T2_P1_D2_P2
L2int_T2_F2_D2_L2int_T2_D1i_D
_L2int_T2_E_F3_D2_B<_D1c_B<_D
c_B>_B||_D1i_R_L1_C_FOR_D1i_R
C_F1_L2int_T2_F2_D2_L2char_T2
D1i_D1i_D2_L2char_T2_D1i_D1i_
2_L2int_T2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_L2int_T2_D1i_D2_L
int_T2_D2_L2int_T2_D2_D1s_E_F
_E_F3_A_E_F3_D1s_E_F3_R_C_L1_
1i_A_B<_E_F3_A_D1i_B==_A_C_D1
_B==_A_D1i_B+_A_D1i_B+_A_D1i_
_C_D1s_D1i_B+_E_F3_E_F3_A_B+_
_D1i_B+_A_D1i_B+_A_C_L1_L1_C_
OR_E_F3_A_D1s_E_F3_D1s_E_F3_D
s_L2double_T2_B/_E_F3_D1i_R_C
F1_1_
###############################*/
//$//
