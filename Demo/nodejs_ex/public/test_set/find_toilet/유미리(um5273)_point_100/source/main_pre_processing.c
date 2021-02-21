//유미리(um5273)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int n,m;
	int out;

	scanf("%c %d %d", &gender, &n, &m);

	////////////////////////////////////////
    if(m==0){
        if(gender=='M'){
            if(n%2==0) out=0;
            else out=1;
        }
        else if(gender=='W'){
            if(n%2==0) out=1;
            else{
                if(n==5) out=2;
                else out=1;
            }
        }
    }
    else if(m==6){
        if(gender=='M'){
            if(n%2==0) out=1;
            else{
                if(n==5) out=2;
                else out=1;
            }
        }
        else{
            if(n%2==0) out=0;
            else out=1;
        }
    }
    else if(m>3){
        if(gender=='M'){
            if(n%2==0) out=1+6-m;
            else{
                if(n==5) out=2+6-m;
                else out=6-m;
            }
        }
        else if(gender=='W'){
            if(n%2==0) out=6-m;
            else out=1+6-m;
        }
    }
    else if(m==3){
        if(n==5) out=4;
        else out=3;
    }
    if(m<3){
        if(gender=='M'){
            if(n%2==0) out=m;
            else out=1+m;
        }
        if(gender=='W'){
            if(n%2==0) out=1+m;
            else{
                if(n==5) out=m;
                else out=m;
            }
        }
    }
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1i_B==_D1c_B==_D
i_B%_D1i_B==_D1i_A_D1i_A_L1_C
D1c_B==_D1i_B%_D1i_B==_D1i_A_
1i_B==_D1i_A_D1i_A_L1_C_L1_C_
1_L1_C_D1i_B==_D1c_B==_D1i_B%
D1i_B==_D1i_A_D1i_B==_D1i_A_D
i_A_L1_C_L1_C_D1i_B%_D1i_B==_
1i_A_D1i_A_L1_C_L1_C_D1i_B>_D
c_B==_D1i_B%_D1i_B==_D1i_D1i_
+_B-_A_D1i_B==_D1i_D1i_B+_B-_
_D1i_B-_A_L1_C_L1_C_D1c_B==_D
i_B%_D1i_B==_D1i_B-_A_D1i_D1i
B+_B-_A_L1_C_L1_L1_C_D1i_B==_
1i_B==_D1i_A_D1i_A_L1_C_L1_L1
L1_L1_D1i_B<_D1c_B==_D1i_B%_D
i_B==_A_D1i_B+_A_L1_C_L1_D1c_
==_D1i_B%_D1i_B==_D1i_B+_A_D1
_B==_A_A_L1_C_L1_C_L1_C_L1_D1
_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
