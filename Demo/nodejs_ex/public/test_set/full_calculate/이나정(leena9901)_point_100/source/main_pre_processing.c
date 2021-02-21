//이나정(leena9901)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    
	scanf("%s %s", byte[0], byte[1]);
    
	////////////////////////////////////////
    
    char temp[BYTE_SIZE+1]={'0','0','0','0','0','0','0','0'};
    
    int k=0;
    int u=0;
    for (;u<8;u++){
        if (byte[0][u]<'0')
            k++;
        if (byte[1][u]<'0')
            k++;
        if (byte[0][u]>'1')
            k++;
        if (byte[1][u]>'1')
            k++;
    }

    if(k>=1)
        printf("Input Error\n");
    
    else{
        int i=7;
        for (;i>0;i--){
            int num=byte[0][i]-'0'+ byte[1][i]-'0'+ temp[i]-'0';
            if (num == 0)
                out[i]='0';
            else if (num==1)
                out[i]='1';
            else if(num==2){
                out[i]='0';
                temp[i-1]='1';
            }
            else if(num==3){
                out[i]='1';
                temp[i-1]='1';
            }
        }

        int num2=byte[0][0]-'0'+byte[1][0]-'0'+ temp[0]-'0';
        
        if(num2==0)
            out[0]='0';
        else if(num2==1)
            out[0]='1';
        else if(num2==2)
            out[0]='0';
        else if(num2==3)
            out[0]='1';
        int p=0;
        for(;p<8;p++)
            printf("%c", out[p]);
        printf("\n");
    }

	////////////////////////////////////////

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_D1s_D1i_D1i_E_F3_L2char
T2_D1i_D1i_B+_D1c_D1c_D1c_D1c
D1c_D1c_D1c_D1c_D2_L2int_T2_D
i_D2_L2int_T2_D1i_D2_D1i_B<_D
i_D1c_B<_L1_D1i_D1c_B<_L1_D1i
D1c_B>_L1_D1i_D1c_B>_L1_C_FOR
D1i_B>=_D1s_E_F3_L2int_T2_D1i
D2_D1i_B>_L2int_T2_D1i_D1c_B-
D1i_B+_D1c_B-_B+_D1c_B-_D2_D1
_B==_D1c_A_D1i_B==_D1c_A_D1i_
==_D1c_A_D1i_B-_D1c_A_C_D1i_B
=_D1c_A_D1i_B-_D1c_A_C_L1_L1_
1_L1_C_FOR_L2int_T2_D1i_D1i_D
c_B-_D1i_D1i_B+_D1c_B-_D1i_B+
D1c_B-_D2_D1i_B==_D1i_D1c_A_D
i_B==_D1i_D1c_A_D1i_B==_D1i_D
c_A_D1i_B==_D1i_D1c_A_L1_L1_L
_L1_L2int_T2_D1i_D2_D1i_B<_D1
_E_F3_FOR_D1s_E_F3_C_L1_D1i_R
C_F1_1_
###############################*/
//$//
