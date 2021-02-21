//박민석(apark0907)_point_100
#define _CRT_SECURE_NO_WARNINGS
 
int main()
{
	char gender;
	int f, l;
	int out;

	scanf("%c %d %d", &gender, &f, &l);

	////////////////////////////////////////
    if(l==0){
        if(gender=='M'){
            if(f%2==1)out=1;
            if(f%2==0)out=0;
        }
        if(gender=='W'){
            if(f%2==1&&f!=5)out=0;
            if(f==5)out=2;
            if(f%2==0)out=1;
        }
    }
    if(l==6){
        if(gender=='W'){
            if(f%2==1)out=1;
            if(f%2==0)out=0;
        }
        if(gender=='M'){
            if(f%2==1&&f!=5)out=0;
            if(f==5)out=2;
            if(f%2==0)out=1;
        }
    }
    if(l==1){
        if(gender=='M'){
            if(f%2==1)out=1+l;
            if(f%2==0)out=0+l;
        }
        if(gender=='W'){
            if(f%2==1&&f!=5)out=0+l;
            if(f==5)out=2+l;
            if(f%2==0)out=1+l;
        }
    }
    if(l==5){
        if(gender=='W'){
            if(f%2==1)out=1+1;
            if(f%2==0)out=0+1;
        }
        if(gender=='M'){
            if(f%2==1&&f!=5)out=0+1;
            if(f==5)out=2+1;
            if(f%2==0)out=1+1;
        }
    }
    if(l==2){
        if(gender=='M'){
            if(f%2==1)out=1+l;
            if(f%2==0)out=0+l;
        }
        if(gender=='W'){
            if(f%2==1&&f!=5)out=0+l;
            if(f==5)out=2+l;
            if(f%2==0)out=1+l;
        }
    }
    if(l==4){
        if(gender=='W'){
            if(f%2==1)out=1+2;
            if(f%2==0)out=0+2;
        }
        if(gender=='M'){
            if(f%2==1&&f!=5)out=0+2;
            if(f==5)out=2+2;
            if(f%2==0)out=1+2;
        }
    }
    if(l==3){
        if(f!=5)out=3;
        if(f==5)out=4;
    }

	
	////////////////////////////////////////

	printf("%d\n", out);
	return 0;
}/*########code signature#########
2int_T2_F2_D2_L2char_T2_D2_L2
nt_T2_D2_L2int_T2_D2_L2int_T2
D2_D1s_E_F3_D1i_B==_D1c_B==_D
i_B%_D1i_B==_D1i_A_L1_D1i_B%_
1i_B==_D1i_A_L1_C_L1_D1c_B==_
1i_B%_D1i_B==_D1i_B!=_B&&_D1i
A_L1_D1i_B==_D1i_A_L1_D1i_B%_
1i_B==_D1i_A_L1_C_L1_C_L1_D1i
B==_D1c_B==_D1i_B%_D1i_B==_D1
_A_L1_D1i_B%_D1i_B==_D1i_A_L1
C_L1_D1c_B==_D1i_B%_D1i_B==_D
i_B!=_B&&_D1i_A_L1_D1i_B==_D1
_A_L1_D1i_B%_D1i_B==_D1i_A_L1
C_L1_C_L1_D1i_B==_D1c_B==_D1i
B%_D1i_B==_D1i_B+_A_L1_D1i_B%
D1i_B==_D1i_B+_A_L1_C_L1_D1c_
==_D1i_B%_D1i_B==_D1i_B!=_B&&
D1i_B+_A_L1_D1i_B==_D1i_B+_A_
1_D1i_B%_D1i_B==_D1i_B+_A_L1_
_L1_C_L1_D1i_B==_D1c_B==_D1i_
%_D1i_B==_D1i_D1i_B+_A_L1_D1i
B%_D1i_B==_D1i_D1i_B+_A_L1_C_
1_D1c_B==_D1i_B%_D1i_B==_D1i_
!=_B&&_D1i_D1i_B+_A_L1_D1i_B=
_D1i_D1i_B+_A_L1_D1i_B%_D1i_B
=_D1i_D1i_B+_A_L1_C_L1_C_L1_D
i_B==_D1c_B==_D1i_B%_D1i_B==_
1i_B+_A_L1_D1i_B%_D1i_B==_D1i
B+_A_L1_C_L1_D1c_B==_D1i_B%_D
i_B==_D1i_B!=_B&&_D1i_B+_A_L1
D1i_B==_D1i_B+_A_L1_D1i_B%_D1
_B==_D1i_B+_A_L1_C_L1_C_L1_D1
_B==_D1c_B==_D1i_B%_D1i_B==_D
i_D1i_B+_A_L1_D1i_B%_D1i_B==_
1i_D1i_B+_A_L1_C_L1_D1c_B==_D
i_B%_D1i_B==_D1i_B!=_B&&_D1i_
1i_B+_A_L1_D1i_B==_D1i_D1i_B+
A_L1_D1i_B%_D1i_B==_D1i_D1i_B
_A_L1_C_L1_C_L1_D1i_B==_D1i_B
=_D1i_A_L1_D1i_B==_D1i_A_L1_C
L1_D1s_E_F3_D1i_R_C_F1_1_
###############################*/
//$//
