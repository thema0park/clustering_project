//성진호(diqnfl777)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num,i, encoded_len = 0;

    int repeats=1,sp = 0;

	scanf("%s", input);
    
    for (i=1;i<MAX_LEN;i++){
        if(input[i]=='\0'){
            if(repeats>=10){
                output[sp++]= '0'+(repeats/10);
                output[sp++]= '0'+(repeats%10);
            }
            else if(repeats==2){
                output[sp++]=input[i-1];
            }
            else if(repeats!=1){
                output[sp++]='0'+repeats;
            }   
            output[sp++]=input[i-1];
            output[sp]='\0';
            len = i;
            break;
        } 
        if(!(input[i]>='A'&&input[i]<='Z')){
            printf("Input Error\n");
            return 0;
        }
        if(input[i]==input[i-1]){
            repeats++;
        }
        else{
            if(repeats>=10){
                output[sp++]= '0'+(repeats/10);
                output[sp++]= '0'+(repeats%10);
            }
            else if(repeats==2){
                output[sp++]=input[i-1];
            }
            else if(repeats!=1){
                output[sp++]='0'+repeats;
            }  
            output[sp++]=input[i-1];
            repeats=1;
        }
    }
    encoded_len=sp;
	printf("%s\n", input);
	printf("%s\n", output);
	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
_L2char_T2_D1i_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D2_L2int
T2_D1i_D2_L2int_T2_D1i_D2_L2i
t_T2_D1i_D2_D1s_E_F3_D1i_A_D1
_B<_D1c_B==_D1i_B>=_D1c_D1i_B
_B+_A_D1c_D1i_B%_B+_A_C_D1i_B
=_D1i_B-_A_C_D1i_B!=_D1c_B+_A
C_L1_L1_L1_D1i_B-_A_D1c_A_A_C
L1_D1c_B>=_D1c_B<=_B&&_D1s_E_
3_D1i_R_C_L1_D1i_B-_B==_C_D1i
B>=_D1c_D1i_B/_B+_A_D1c_D1i_B
_B+_A_C_D1i_B==_D1i_B-_A_C_D1
_B!=_D1c_B+_A_C_L1_L1_L1_D1i_
-_A_D1i_A_C_L1_C_FOR_A_D1s_E_
3_D1s_E_F3_D1s_L2double_T2_B/
E_F3_D1i_R_C_F1_1_
###############################*/
//$//
