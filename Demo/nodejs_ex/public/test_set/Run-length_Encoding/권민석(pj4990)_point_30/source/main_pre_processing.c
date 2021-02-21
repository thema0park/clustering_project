//권민석(pj4990)_point_30
#define _CRT_SECURE_NO_WARNINGS
   #define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int len, num, encoded_len = 0;

	scanf("%s", input);

	////////////////////////////////////////
    int i,j;
    i=j=0;
    int second='0';
    int flag=1;
    num='1';
    len=strlen(input);
    //error Test
    for (i=0;i<len-1;i++){
        if ('A'<input[i] && input[i]>'Z'){
            printf("Input Error");
            return 0;
        }
    }

    //
    for (i=0;i<len-1;i++){
       if(input[i]!=input[i+1]){
           if (num >= '2' && num <= '9') {

               output[j]=num;
               j++;
               output[j]=input[i];
               j++;
               num='1';
           }
           else if (num > '9'){

               while(flag){
               second++;
               num=num-10;
                    if (num>='0' && num<='9'){
                    flag=0;}
               }
               output[j]=second;
               j++;
               output[j]=num;
               j++;
               output[j]=input[i];
               j++;                
           }
           else{
               output[j]=input[i];
                j++;
           }
       }
       else {
           num++;

       }
    }
        if (input[len-1]==input[len-2]){
             if (num >= '2' && num <= '9') {
                output[j]=num;
                j++;
                output[j]=input[len-1];
                j++;
             }
             else if (num > '9'){

               while(flag){
               second++;
               num=num-10;
                    if (num>='0' && num<='9'){
                    flag=0;}
               }
               output[j]=second;
               j++;
               output[j]=num;
               j++;
               output[j]=input[i];
               j++;                
           }
        }
        else {

            output[j]=input[len-1];
            j++;
        }
       output[j]=NULL;
       encoded_len=strlen(output);
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
_D1i_A_A_L2int_T2_D1c_D2_L2in
_T2_D1i_D2_D1c_A_E_F3_A_D1i_A
D1i_B-_B<_D1c_B<_D1c_B>_B&&_D
s_E_F3_D1i_R_C_L1_C_FOR_D1i_A
D1i_B-_B<_D1i_B+_B!=_D1c_B>=_
1c_B<=_B&&_A_A_D1c_A_C_D1c_B>
D1i_B-_A_D1c_B>=_D1c_B<=_B&&_
1i_A_C_L1_C_W_A_A_A_C_A_C_L1_
1_C_C_L1_C_FOR_D1i_B-_D1i_B-_
==_D1c_B>=_D1c_B<=_B&&_A_D1i_
-_A_C_D1c_B>_D1i_B-_A_D1c_B>=
D1c_B<=_B&&_D1i_A_C_L1_C_W_A_
_A_C_L1_L1_C_D1i_B-_A_C_L1_A_
_F3_A_D1s_E_F3_D1s_E_F3_D1s_L
double_T2_B/_E_F3_D1i_R_C_F1_
_
###############################*/
//$//
