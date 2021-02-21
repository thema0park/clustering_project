//박수빈(psb1010)_point_100
#define _CRT_SECURE_NO_WARNINGS
  int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);
        int ans=100;
        int i;
	////////////////////////////////////////
    if(gender=='M')
    // 성별이 남자일 경우
    {
        int x[4]={1,2,3,4};
        int y[4]={6,0,6,0};
        for(i=0;i<4;i++)
        {
            if(abs(f-x[i])+abs(l-y[i])<ans)
            {
                ans=abs(f-x[i])+abs(l-y[i]);
            }
        }
        printf("%d\n",ans);
    }
    else
    {
        int x[4]={1,2,3,4};
        int y[4]={0,6,0,6};
        int ans=100;
        for(i=0;i<4;i++)
        {
            if(abs(f-x[i])+abs(l-y[i])<ans)
            {
                ans=abs(f-x[i])+abs(l-y[i]);
            }
        }
        printf("%d\n",ans);
    }
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_L2int_T2_D1i_D2_L
int_T2_D2_D1c_B==_L2int_T2_D1
_D1i_D1i_D1i_D1i_D2_L2int_T2_
1i_D1i_D1i_D1i_D1i_D2_D1i_A_D
i_B<_B-_E_F3_B-_E_F3_B+_B<_B-
E_F3_B-_E_F3_B+_A_C_L1_C_FOR_
1s_E_F3_C_L2int_T2_D1i_D1i_D1
_D1i_D1i_D2_L2int_T2_D1i_D1i_
1i_D1i_D1i_D2_L2int_T2_D1i_D2
D1i_A_D1i_B<_B-_E_F3_B-_E_F3_
+_B<_B-_E_F3_B-_E_F3_B+_A_C_L
_C_FOR_D1s_E_F3_C_L1_C_F1_1_
###############################*/
//$//
