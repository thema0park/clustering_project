//유미리(um5273)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	int out[BYTE_SIZE+1]={0};

	scanf("%s %s", byte[0], byte[1]);
    int i;
	////////////////////////////////////////
    int ch=0;
    for(i=BYTE_SIZE;i>=1;i--){
        if(!((byte[0][i-1]=='0' || byte[0][i-1]=='1') && (byte[1][i-1]=='0' || byte[1][i-1]=='1'))){
            ch=1;
            break;
        }
        out[i]+=(byte[0][i-1]-'0')+(byte[1][i-1]-'0');
        if(out[i]>=2){
            out[i]-=2;
            out[i-1]++;
        }
    }
    if(ch==1)
        printf("Input Error\n");
    else{
     for(i=1;i<=BYTE_SIZE;i++)
	////////////////////////////////////////
    
	     printf("%d", out[i]);
     printf("\n");
    }
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2int_T2_D1i_D1i_
+_D1i_D2_D1s_D1i_D1i_E_F3_L2i
t_T2_D2_L2int_T2_D1i_D2_D1i_A
D1i_B>=_D1i_D1i_B-_D1c_B==_D1
_D1i_B-_D1c_B==_B||_D1i_D1i_B
_D1c_B==_D1i_D1i_B-_D1c_B==_B
|_B&&_D1i_A_C_L1_D1i_D1i_B-_D
c_B-_D1i_D1i_B-_D1c_B-_B+_A_D
i_B>=_D1i_A_D1i_B-_C_L1_C_FOR
D1i_B==_D1s_E_F3_D1i_A_D1i_B<
_D1s_E_F3_FOR_D1s_E_F3_C_L1_D
i_R_C_F1_1_
###############################*/
//$//
