//신기철(skck0226)_point_100
#define _CRT_SECURE_NO_WARNINGS
  int main()
{
	char gender;
	int f, l;
	int out;
    int m[5]={0},w[5]={0}, i=0, min=100;
	scanf("%c %d %d", &gender, &f, &l);
    
	////////////////////////////////////////
    // m 40 20 16 36
    // w 26 46 10 30
	if(gender=='M'){
        m[0]=abs(f-4)+abs(l-0);
        m[1]=abs(f-2)+abs(l-0);
        m[2]=abs(f-1)+abs(l-6);
        m[3]=abs(f-3)+abs(l-6);
        for(i=0;i<4;i++){
            if(m[i]<min) min=m[i];
        }
    }
    else{
        w[0]=abs(f-2)+abs(l-6);
        w[1]=abs(f-4)+abs(l-6);
        w[2]=abs(f-1)+abs(l-0);
        w[3]=abs(f-3)+abs(l-0);
        for(i=0;i<4;i++){
            if(w[i]<min) min=w[i];
        }
    }
	////////////////////////////////////////

	printf("%d\n", min);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_L2int_T2_D1i_D1i_D2_L2int_
2_D1i_D1i_D2_L2int_T2_D1i_D2_
2int_T2_D1i_D2_D1s_E_F3_D1c_B
=_D1i_D1i_B-_E_F3_D1i_B-_E_F3
B+_A_D1i_D1i_B-_E_F3_D1i_B-_E
F3_B+_A_D1i_D1i_B-_E_F3_D1i_B
_E_F3_B+_A_D1i_D1i_B-_E_F3_D1
_B-_E_F3_B+_A_D1i_A_D1i_B<_B<
A_L1_C_FOR_C_D1i_D1i_B-_E_F3_
1i_B-_E_F3_B+_A_D1i_D1i_B-_E_
3_D1i_B-_E_F3_B+_A_D1i_D1i_B-
E_F3_D1i_B-_E_F3_B+_A_D1i_D1i
B-_E_F3_D1i_B-_E_F3_B+_A_D1i_
_D1i_B<_B<_A_L1_C_FOR_C_L1_D1
_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
