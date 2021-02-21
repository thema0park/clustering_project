//김동환(jino0709)_point_40
#define _CRT_SECURE_NO_WARNINGS

 
#define PIECE_NUM_MAX 50

int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
    int k;
    int count=0;
    int count_1=0;
	int output;
    int big=0;
    int tmp[PIECE_NUM_MAX]={0,};
    int temp=0;
	scanf("%d", &piece_num);

	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);

	////////////////////////////////////////
    for(i=0;i<piece_num;i++)
    {
        if(input_data[i]>2)
        {
             for(k=2;k<input_data[i];k++)
           {
                 if(input_data[i]%k==0)
                   {
                    
                     count++;
                   
                 }
               
            }
              if(count==0)
             {
                 {
                       tmp[count_1]=input_data[i];
                       count_1++;
                    
                  }
                
            }
        count=0;
        }
       
    }
    big=tmp[0];
    
    for(k=0;k<count_1;k++)
    {
        if(big<tmp[k])
        {
            big=tmp[k];
        }
    }
    printf("%d\n",big);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D1i_D2_L2int_T2_D2_L2int
T2_D2_L2int_T2_D1i_D2_L2int_T
_D1i_D2_L2int_T2_D2_L2int_T2_
1i_D2_L2int_T2_D1i_D1i_D2_L2i
t_T2_D1i_D2_D1s_E_F3_D1i_A_B<
D1s_E_F3_FOR_D1i_A_B<_D1i_B>_
1i_A_B<_B%_D1i_B==_C_L1_C_FOR
D1i_B==_A_C_C_L1_D1i_A_C_L1_C
FOR_D1i_A_D1i_A_B<_B<_A_C_L1_
_FOR_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
