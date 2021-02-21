//이주형(dlwngud24)_point_90
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    
    if(gender == 'M'){ // 남자
            if(f%2==0){ // 짝수층
                if(l<=3){
                    out =l;
                }else{
                    out = 7-l;
                }
            }else if(f==5){ // 5층
                if(l<=3){
                    out =l+1;
                }else{
                    out = 8-l;
                }
            }else{ // 1층 3층
                if(l<=3){
                    out =l+1;
                }else{
                    out =6-l;
                }
            }
    }else{ // 여자
            if(f%2==0){ // 짝수층
                if(l>=3){
                    out =6-l;
                }else{
                    out = l+1;
                }
            }else if(f==5){ // 5층
                if(l>=3){
                    out =7-l;
                }else{
                    out = l+2;
                }
            }else{ // 1층 3층
                if(l>=3){
                    out =7-l;
                }else{
                    out =l;
                }
            }
        }
        
        ////////////////////////////////////////

	printf("%d\n", out);
	return 0;
   
    }
    

/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1c_B==_D1i_B%_D1
_B==_D1i_B<=_A_C_D1i_B-_A_C_L
_C_D1i_B==_D1i_B<=_D1i_B+_A_C
D1i_B-_A_C_L1_C_D1i_B<=_D1i_B
_A_C_D1i_B-_A_C_L1_C_L1_L1_C_
1i_B%_D1i_B==_D1i_B>=_D1i_B-_
_C_D1i_B+_A_C_L1_C_D1i_B==_D1
_B>=_D1i_B-_A_C_D1i_B+_A_C_L1
C_D1i_B>=_D1i_B-_A_C_A_C_L1_C
L1_L1_C_L1_D1s_E_F3_D1i_R_C_F
_1_
###############################*/
//$//
