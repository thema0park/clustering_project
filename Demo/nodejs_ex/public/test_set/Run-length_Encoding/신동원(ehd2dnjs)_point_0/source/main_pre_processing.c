//신동원(ehd2dnjs)_point_0
#define _CRT_SECURE_NO_WARNINGS
   
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN]={0,};
	char output[MAX_LEN]={0,};
    int i=0,j=0,k=0;
    int a=0, b=0, c=0;
	int len, num, encoded_len = 0;

	scanf("%s", input);

	////////////////////////////////////////
    
    len=strlen(input);
    encoded_len=strlen(output);

    

    for(i;i<len;i++){
    if(input[a]==input[a+1]){
        ++b;
        ++a;
    }
    else{
        if(b==1){
            output[c]=input[a];
            output[c+1]=input[a];
            c+=2;
            b=0;
        }
        else if(b==0){
            output[c]=input[a];
            c+=1;
            ++a;
        }
        else{
        output[c]=b+1;
        output[c+1]=input[a];
        c+=2;
        b=0;
        ++a;}
    }}

    printf("%d\n",output[0]);
    
    printf("%s\n", input);
	printf("%s\n", output);

	printf("%.6lf(%d/%d)\n", (double)len / encoded_len, len, encoded_len);
	
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_D2_L2char_T2_D1i_D1i_D2_L2i
t_T2_D1i_D2_L2int_T2_D1i_D2_L
int_T2_D1i_D2_L2int_T2_D1i_D2
L2int_T2_D1i_D2_L2int_T2_D1i_
2_L2int_T2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_D1s_E_F3_E_F3_A_E
F3_A_B<_D1i_B+_B==_C_D1i_B==_
_D1i_B+_A_D1i_A_D1i_A_C_D1i_B
=_A_D1i_A_C_D1i_B+_A_D1i_B+_A
D1i_A_D1i_A_C_L1_L1_C_L1_C_FO
_D1s_D1i_E_F3_D1s_E_F3_D1s_E_
3_D1s_L2double_T2_B/_E_F3_D1i
R_C_F1_1_
###############################*/
//$//
