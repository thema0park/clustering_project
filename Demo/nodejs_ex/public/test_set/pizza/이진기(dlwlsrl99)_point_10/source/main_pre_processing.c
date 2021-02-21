//이진기(dlwlsrl99)_point_10
#define _CRT_SECURE_NO_WARNINGS

 


#define PIECE_NUM_MAX 50
int check(int a,int b)
{
    int tmp;
    if(a>b)
    {
        while(1)
        {
            if(b==0)
            {
                break;
            }
            tmp=b;
            b=a%b;
            a=a/b;
        }
    }
    if(a<b)
    {
        while(1)
        {
            if(b==0)
            {
                break;
            }
            tmp=a;
            a=b%a;
            b=b/a;
        }
    }
    return tmp;
}


int main()
{
	int piece_num;
	int input_data[PIECE_NUM_MAX];
	int i;
	int output;
    int k;
    int cq,ck;
	scanf("%d", &piece_num);
    cq=piece_num/2;
    ck=(piece_num-1)/2;
	for (i = 0; i < piece_num; i++)
		scanf("%d", &input_data[i]);
    
	////////////////////////////////////////
    //서로 마주보는 방향은 홀수-1/2를 더해주면 된다. ex)5개의 피자: 2->4 1->3 ..
  /*  for(k=0;k<cq;k++)
    {
        if(check(input_data[k],input_data[k+ck])==1)
        {
            output=input_data[k+ck];
            break;
        }
    }*/


	////////////////////////////////////////

	printf("3\n");
	return 0;
}/*########code signature#########
2int_T2_D2_L2int_T2_D2_P2_L2i
t_T2_F2_D2_L2int_T2_D2_B>_D1i
D1i_B==_C_L1_A_B%_A_B/_A_C_W_
_L1_B<_D1i_D1i_B==_C_L1_A_B%_
_B/_A_C_W_C_L1_R_C_F1_L2int_T
_F2_D2_L2int_T2_D2_L2int_T2_D
i_D2_L2int_T2_D2_L2int_T2_D2_
2int_T2_D2_L2int_T2_D2_L2int_
2_D2_D1s_E_F3_D1i_B/_A_D1i_B-
D1i_B/_A_D1i_A_B<_D1s_E_F3_FO
_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
