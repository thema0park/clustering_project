//허준형(gjwnsgud3)_point_50
#define _CRT_SECURE_NO_WARNINGS
  
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[2][9];
	char out[9];
    char New[9];
    int i=0;
	scanf("%s %s", byte[0], byte[1]);

    char other[9];
    
	////////////////////////////////////////
   
    for(i=0; i<8; i+=1){
        if(byte[0][i]=='0'&&byte[1][i]=='0'){
            out[i] = '0';
        }
        else if((byte[0][i]=='1'&&byte[1][i]=='0') || (byte[0][i]=='0'&&byte[1][i]=='1')){
            out[i] = '1';
        }
        else if(byte[0][i]=='1'&&byte[1][i]=='1'){
            out[i] = '0';
            if(i>0){
            out[i-1] = '1';
            }
        }
    }
 
	////////////////////////////////////////

	printf("%s\n", out); // out

	return 0;
}










/*   while(1){
        if(i<=0) break;
           if(byte[0][i]=='0'&&byte[1][i]=='0'){
                out[i] = '0';
                other[i] = '0';
                i = i - 1;
            }
            else if((byte[0][i]=='1'&&byte[1][i]=='0') || (byte[0][i]=='0'&&byte[1][i]=='1')){
             out[i] = '1';
             other[i] = '0';
             i = i - 1;
            }
            else if(byte[0][i]=='1'&&byte[1][i]=='1'){
                out[i] = '0';
                out[i-1] = '1';
                i = i -2;
            }
        }
    




*//*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_D2_L2char_T2_D1i_D2_L2char_
2_D1i_D2_L2int_T2_D1i_D2_D1s_
1i_D1i_E_F3_L2char_T2_D1i_D2_
1i_A_D1i_B<_D1i_A_D1i_D1c_B==
D1i_D1c_B==_B&&_D1c_A_C_D1i_D
c_B==_D1i_D1c_B==_B&&_D1i_D1c
B==_D1i_D1c_B==_B&&_B||_D1c_A
C_D1i_D1c_B==_D1i_D1c_B==_B&&
D1c_A_D1i_B>_D1i_B-_D1c_A_C_L
_C_L1_L1_L1_C_FOR_D1s_E_F3_D1
_R_C_F1_1_
###############################*/
//$//
