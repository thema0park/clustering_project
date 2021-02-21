//이강민(dlrkdals421)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(l==3){
        switch(f){
            case 5 : {
                out=4;
                break;
            }
            default : {
                out=3;
                break;
            }
        }
    }
    if((l==0)||(l==1)||(l==2)){
        if(gender=='M'){
            switch(f){
                case 5 : {
                     out=l+1;
                        break;
                    }
                case 1 : {
                    out=l+1;
                    break;
                }
                case 3 : {
                    out=l+1;
                    break;
                }
                case 2 : {
                    out=l;
                    break;
                }
                case 4 : {
                    out=l;
                    break;
                }
            }
        }
        if(gender=='W'){
            switch(f){
                case 5 : {
                    out=l+2;
                    break;
                }
                case 1 : {
                    out=l;
                    break;
                }
                case 3 : {
                    out=l;
                    break;
                }
                case 2 : {
                    out=l+1;
                    break;
                }
                case 4 : {
                    out=l+1;
                    break;
                }
            }
        }
    }
    if((l==4)||(l==5)||(l==6)){
        if(gender=='M'){
            switch(f){
                case 5 : {
                    out=6-l+2;
                    break;
                }
                case 1 : {
                    out=6-l;
                    break;
                }
                case 3 : {
                    out=6-l;
                    break;
                }
                case 2 : {
                    out=6-l+1;
                    break;
                }
                case 4 : {
                    out=6-l+1;
                    break;
                }
            }
        }
        if(gender=='W'){
            switch(f){
                case 5 : {
                    out=6-l+1;
                    break;
                }
                case 1 : {
                    out=6-l+1;
                    break;
                }
                case 3 : {
                    out=6-l+1;
                    break;
                }
                case 2 : {
                    out=6-l;
                    break;
                }
                case 4 : {
                    out=6-l;
                    break;
                }   
            }
        }
    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1i_B==_D1i_D1i_A
C_D1i_A_C_C_C_L1_D1i_B==_D1i_
==_B||_D1i_B==_B||_D1c_B==_D1
_D1i_B+_A_C_D1i_D1i_B+_A_C_D1
_D1i_B+_A_C_D1i_A_C_D1i_A_C_C
C_L1_D1c_B==_D1i_D1i_B+_A_C_D
i_A_C_D1i_A_C_D1i_D1i_B+_A_C_
1i_D1i_B+_A_C_C_C_L1_C_L1_D1i
B==_D1i_B==_B||_D1i_B==_B||_D
c_B==_D1i_D1i_B-_D1i_B+_A_C_D
i_D1i_B-_A_C_D1i_D1i_B-_A_C_D
i_D1i_B-_D1i_B+_A_C_D1i_D1i_B
_D1i_B+_A_C_C_C_L1_D1c_B==_D1
_D1i_B-_D1i_B+_A_C_D1i_D1i_B-
D1i_B+_A_C_D1i_D1i_B-_D1i_B+_
_C_D1i_D1i_B-_A_C_D1i_D1i_B-_
_C_C_C_L1_C_L1_D1s_E_F3_D1i_R
C_F1_1_
###############################*/
//$//
