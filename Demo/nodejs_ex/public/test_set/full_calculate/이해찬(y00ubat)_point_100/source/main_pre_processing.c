//이해찬(y00ubat)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
	char byte[IN_NUM][BYTE_SIZE + 1];
	char out[BYTE_SIZE+1];
    int i=0;
    int j=0;
    int tmp=0;
    int sum[2] = {0};
    int sum_res=0;
    int count =0 ;
    int res[16] = {0};
	scanf("%s %s", byte[0], byte[1]);


    for(j=0;j<2;j++)
    {
        count =0;
        for(i=7;i>=0;i--)
        {
  
            if(byte[j][i] == '1')
                tmp = 1;
            else if(byte[j][i] == '0')
                tmp = 0;
            else
            {
                printf("Input Error\n");
                return 0;
            }
   
            if(tmp)
            {
                if(count==0)
                    sum[j] += 1;
                else
                    sum[j] += pow(2,count);
                
            }
            count++;
           // printf("%d ",sum[j]);

        }
        count =0;
      //  printf("\n");
    }
    
    sum_res = sum[0]+sum[1];

    for(i=0;i<8;i++)
    {
        res[i]= sum_res % 2;
        sum_res = sum_res /2;
        
    }
    for(i=7;i>=0;i--)
    {
        printf("%d",res[i]);
        
    }

    printf("\n");
    


	////////////////////////////////////////



	////////////////////////////////////////

//	printf("%s\n", out);

	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2char_T2_D1i_D
i_B+_D1i_D2_L2char_T2_D1i_D1i
B+_D2_L2int_T2_D1i_D2_L2int_T
_D1i_D2_L2int_T2_D1i_D2_L2int
T2_D1i_D1i_D2_L2int_T2_D1i_D2
L2int_T2_D1i_D2_L2int_T2_D1i_
1i_D2_D1s_D1i_D1i_E_F3_D1i_A_
1i_B<_D1i_A_D1i_A_D1i_B>=_D1c
B==_D1i_A_D1c_B==_D1i_A_D1s_E
F3_D1i_R_C_L1_L1_D1i_B==_D1i_
_D1i_E_F3_A_L1_C_L1_C_FOR_D1i
A_C_FOR_D1i_D1i_B+_A_D1i_A_D1
_B<_D1i_B%_A_D1i_B/_A_C_FOR_D
i_A_D1i_B>=_D1s_E_F3_C_FOR_D1
_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
