//최정민(jmchoi1225)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int a,b;
    int i;
    int up=0;

	scanf("%s %s", byte[0], byte[1]);

	////////////////////////////////////////
    

    for(i = BYTE_SIZE-1; i>=0; i--){
        if(byte[0][i]=='0') a = 0;
        else if(byte[0][i]=='1') a = 1;
        else{
            printf("Input Error\n");
            return 0;
        }
        if(byte[1][i]=='0') b = 0;
        else if(byte[1][i]=='1') b = 1;
        else{
            printf("Input Error\n");
            return 0;
        }
        if((a+b+up)%2==1) out[i]='1';
        else out[i] = '0';
        if((a+b+up)>1) up = 1;
        else up = 0;
    }
    out[BYTE_SIZE] = '\0';


	////////////////////////////////////////

	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D2_L2int_T2_D2
L2int_T2_D2_L2int_T2_D1i_D2_D
s_D1i_D1i_E_F3_D1i_D1i_B-_A_D
i_B>=_D1i_D1c_B==_D1i_A_D1i_D
c_B==_D1i_A_D1s_E_F3_D1i_R_C_
1_L1_D1i_D1c_B==_D1i_A_D1i_D1
_B==_D1i_A_D1s_E_F3_D1i_R_C_L
_L1_B+_B+_D1i_B%_D1i_B==_D1c_
_D1c_A_L1_B+_B+_D1i_B>_D1i_A_
1i_A_L1_C_FOR_D1i_D1c_A_D1s_E
F3_D1i_R_C_F1_1_
###############################*/
//$//
