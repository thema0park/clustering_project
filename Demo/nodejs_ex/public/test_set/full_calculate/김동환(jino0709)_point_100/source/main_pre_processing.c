//김동환(jino0709)_point_100
#define _CRT_SECURE_NO_WARNINGS
  
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1]={};
    int tmp[8]={0,};
    int tmp_1[8]={0,};
    
    int k=0;
    int j=0;

	scanf("%s %s", byte[0], byte[1]);

    for(k=0;k<8;k++)
    {
        if(!((byte[0][k]=='0' || byte[0][k]=='1') && (byte[1][k]=='0' || byte[1][k]=='1')))
        {
            printf("Input Error\n");
            exit(0);
        }
    }
	////////////////////////////////////////
    for(k=0;k<8;k++)
    {
        if(byte[0][7-k]=='0'&& byte[1][7-k]=='0')
        {
            tmp[7-k]=0;
         }
           if(byte[0][7-k]=='0'&& byte[1][7-k]=='1')
        {
            tmp[7-k]=1;
         }
           if(byte[0][7-k]=='1'&& byte[1][7-k]=='0')
        {
            tmp[7-k]=1;
         }
           if(byte[0][7-k]=='1'&& byte[1][7-k]=='1')
        {
            tmp[7-k]=2;
          
         }
         
    }
  

///////////////////////////////////////
    for(k=0;k<7;k++)
    {
        if(tmp[7-k]==2)
        {
            tmp[7-k]=0;
            tmp[6-k]++;
        }
        else if(tmp[7-k]==3)
        {
            tmp[7-k]=1;
            tmp[6-k]++;
        }
    }
    if(tmp[0]==2)
    {
        tmp[0]=0;
    }
    else if(tmp[0]==3)
    {
        tmp[0]=1;
    }
    for(k=0;k<8;k++)
    {
        if(tmp[k]==0)
        {
            out[k]='0';
        }
        else
        {
            out[k]='1';
        }
    }
    

    printf("%s\n",out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D1i_D1i_D2_L2i
t_T2_D1i_D1i_D2_L2int_T2_D1i_
2_L2int_T2_D1i_D2_D1s_D1i_D1i
E_F3_D1i_A_D1i_B<_D1i_D1c_B==
D1i_D1c_B==_B||_D1i_D1c_B==_D
i_D1c_B==_B||_B&&_D1s_E_F3_D1
_E_F3_C_L1_C_FOR_D1i_A_D1i_B<
D1i_D1i_B-_D1c_B==_D1i_D1i_B-
D1c_B==_B&&_D1i_B-_D1i_A_C_L1
D1i_D1i_B-_D1c_B==_D1i_D1i_B-
D1c_B==_B&&_D1i_B-_D1i_A_C_L1
D1i_D1i_B-_D1c_B==_D1i_D1i_B-
D1c_B==_B&&_D1i_B-_D1i_A_C_L1
D1i_D1i_B-_D1c_B==_D1i_D1i_B-
D1c_B==_B&&_D1i_B-_D1i_A_C_L1
C_FOR_D1i_A_D1i_B<_D1i_B-_D1i
B==_D1i_B-_D1i_A_D1i_B-_C_D1i
B-_D1i_B==_D1i_B-_D1i_A_D1i_B
_C_L1_L1_C_FOR_D1i_D1i_B==_D1
_D1i_A_C_D1i_D1i_B==_D1i_D1i_
_C_L1_L1_D1i_A_D1i_B<_D1i_B==
D1c_A_C_D1c_A_C_L1_C_FOR_D1s_
_F3_D1i_R_C_F1_1_
###############################*/
//$//
