//김민재(rlaalswo1703)_point_80
#define _CRT_SECURE_NO_WARNINGS
 
#define BYTE_SIZE 8
#define IN_NUM 2

int main()
{
    int a,b,c,d,e,f,h,i;
char as[8]={'0','0','0','0','0','0','0','0'};
char aa[8]={'0','0','0','0','0','0','0','0'};
char ac[9]={'0','0','0','0','0','0','0','0','0'};
char ad[9]={'0','0','0','0','0','0','0','0','0'};
scanf("%s",as);
scanf("%s",aa);

for(i=7;i>=0;i--)
{
ac[i+1]+=as[i]+aa[i]-'0'-'0';
if(ac[1+i]>'1')
{
ac[i+1]+= -'2'+'0';
ac[i]+='1'-'0';
}
}
for(e=1;e<=8;e++)
{
printf("%c",ac[e]);
}
printf("\n");
	return 0;
}
/*########code signature#########
2int_T2_F2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2int_T2_
2_L2int_T2_D2_L2int_T2_D2_L2i
t_T2_D2_L2int_T2_D2_L2char_T2
D1i_D1c_D1c_D1c_D1c_D1c_D1c_D
c_D1c_D2_L2char_T2_D1i_D1c_D1
_D1c_D1c_D1c_D1c_D1c_D1c_D2_L
char_T2_D1i_D1c_D1c_D1c_D1c_D
c_D1c_D1c_D1c_D1c_D2_L2char_T
_D1i_D1c_D1c_D1c_D1c_D1c_D1c_
1c_D1c_D1c_D2_D1s_E_F3_D1s_E_
3_D1i_A_D1i_B>=_D1i_B+_B+_D1c
B-_D1c_B-_A_D1i_B+_D1c_B>_D1i
B+_D1c_D1c_B+_A_D1c_D1c_B-_A_
_L1_C_FOR_D1i_A_D1i_B<=_D1s_E
F3_C_FOR_D1s_E_F3_D1i_R_C_F1_
_
###############################*/
//$//
