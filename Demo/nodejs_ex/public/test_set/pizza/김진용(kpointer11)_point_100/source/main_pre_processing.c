//김진용(kpointer11)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(gender== 'm'||gender== 'M'){
            if(f%2==0){
                if(l<=3){
                out=l;
                }
                else if(l>3){
                    out=6-l+1;
                }
            }
            else if(f%2!=0){
                if(f==5){
                    if(l<=3)
                    out=l+1;
                    else{
                        out=6-l+2;
                    }
                }
                else{
                    
                    if(l<3){
                        out=l+1;
                    }
                    else{
                        out=6-l;
                    }
                }
            }
                            
            }
    else{
        if(f%2!=0){
            if(f==5){
                if(l>=3){
                    out=6-l+1;
                }
                else{
                    out=l+2;
                }
            }
            else{
                if(l==3){
                    out=l;
                }
                else if(l>3){
                    out=6-l+1;
                }
                else{
                    out=l;
                }
            }
        }
        else{
            if(l>=3){
                out=6-l;
            }
            else{
                out=l+1;
            }
        }
        
           
        
    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1c_B==_D1c_B==_B
|_D1i_B%_D1i_B==_D1i_B<=_A_C_
1i_B>_D1i_B-_D1i_B+_A_C_L1_L1
C_D1i_B%_D1i_B!=_D1i_B==_D1i_
<=_D1i_B+_A_D1i_B-_D1i_B+_A_C
L1_C_D1i_B<_D1i_B+_A_C_D1i_B-
A_C_L1_C_L1_C_L1_L1_C_D1i_B%_
1i_B!=_D1i_B==_D1i_B>=_D1i_B-
D1i_B+_A_C_D1i_B+_A_C_L1_C_D1
_B==_A_C_D1i_B>_D1i_B-_D1i_B+
A_C_A_C_L1_L1_C_L1_C_D1i_B>=_
1i_B-_A_C_D1i_B+_A_C_L1_C_L1_
_L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
