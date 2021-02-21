//박도아(sk05432)_point_70
#define _CRT_SECURE_NO_WARNINGS
  
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i=0;
    int flag=0;
    int she=1;
	scanf("%s %s", byte[0], byte[1]);


    

    




    for(i=7;i>=0;i--)
    {


    if(byte[1][i]=='0'&&byte[0][i]=='1'||byte[1][i]=='1'&&byte[0][i]=='0')
    {
        if(flag==1){
            out[i]='0';
        }
       else
       {
           out[i]='1';
           }
        
    }
    else
    {
        if(flag==1)
        {
            out[i]='1';
            flag=0;
            
        }
        else
        {
            out[i]='0';
        }

        if(byte[1][i]=='1'&&byte[0][i]=='1')
    {
        if(flag==1)
        out[i]='1';
        flag=1;
    }
        
    

        
        }
    }

if(strlen(byte)!=8)
{
    printf("Input Error\n");
}
else
{
if(out[0]=='0'&&out[1]=='0'&&out[2]=='0'&&out[3]=='0'&&out[4]=='0'&&out[5]=='0'&&out[6]=='0'&&out[7]=='0')
{    printf("Input Error\n");
}

else
{
  
    printf("%s\n", out);
}
}




	////////////////////////////////////////



	////////////////////////////////////////

	

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D1i_D2_L2int_T
_D1i_D2_L2int_T2_D1i_D2_D1s_D
i_D1i_E_F3_D1i_A_D1i_B>=_D1i_
1c_B==_D1i_D1c_B==_B&&_D1i_D1
_B==_D1i_D1c_B==_B&&_B||_D1i_
==_D1c_A_C_D1c_A_C_L1_C_D1i_B
=_D1c_A_D1i_A_C_D1c_A_C_L1_D1
_D1c_B==_D1i_D1c_B==_B&&_D1i_
==_D1c_A_L1_D1i_A_C_L1_C_L1_C
FOR_E_F3_D1i_B!=_D1s_E_F3_C_D
i_D1c_B==_D1i_D1c_B==_B&&_D1i
D1c_B==_B&&_D1i_D1c_B==_B&&_D
i_D1c_B==_B&&_D1i_D1c_B==_B&&
D1i_D1c_B==_B&&_D1i_D1c_B==_B
&_D1s_E_F3_C_D1s_E_F3_C_L1_C_
1_D1i_R_C_F1_1_
###############################*/
//$//
