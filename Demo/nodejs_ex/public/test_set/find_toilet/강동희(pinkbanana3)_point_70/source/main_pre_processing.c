//강동희(pinkbanana3)_point_70
#define _CRT_SECURE_NO_WARNINGS
  
int main()
{
	char gender;
	int f, l;
	int out;
    int i,j;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(gender=='M'){
       if(f%2==0){
           if(l<=3) out = l;
           else out=7-l;
       }
       else if(f==5){
           if(l<=3) out =l+1;
           else out=8-l;
       }
       else{
           if(l>=3) out=l;
           else out=7-l;
       }
    }
    else{
       if(f%2==1){
           if(l<=3) out = l;
           else out=7-l;
       }
       else if(f==5){
           if(l<=3) out =l+1;
           else out=8-l;
       }
       else{
           if(l>=3) out=l;
           else out=7-l;
       }
    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_L2int_T2_D2_L2int_T2_D2_D1
_E_F3_D1c_B==_D1i_B%_D1i_B==_
1i_B<=_A_D1i_B-_A_L1_C_D1i_B=
_D1i_B<=_D1i_B+_A_D1i_B-_A_L1
C_D1i_B>=_A_D1i_B-_A_L1_C_L1_
1_C_D1i_B%_D1i_B==_D1i_B<=_A_
1i_B-_A_L1_C_D1i_B==_D1i_B<=_
1i_B+_A_D1i_B-_A_L1_C_D1i_B>=
A_D1i_B-_A_L1_C_L1_L1_C_L1_D1
_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
